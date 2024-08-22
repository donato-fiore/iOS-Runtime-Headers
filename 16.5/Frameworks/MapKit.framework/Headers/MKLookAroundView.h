// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLOOKAROUNDVIEW_H
#define MKLOOKAROUNDVIEW_H

@class UIView, UIImageView, UIView<MKCompassView>, NSLayoutConstraint, UITapGestureRecognizer, NSArray, NSString, GEOStorefrontView, NSDate, VKMapView, VKMuninMarker, GEOMuninViewState, VKLabelMarker, NSURL;
@protocol MKLookAroundGestureControllerDelegate, VKMapViewCameraDelegate, VKMapViewDelegate, NSCoding, MKMapServiceTicket, MKLookAroundViewDelegate;


#import "_MKLookAroundLayerHostingView.h"
#import "MKLookAroundBumpFlash.h"
#import "MKLookAroundGestureController.h"
#import "MKHapticEngine.h"
#import "MKMapItem.h"
#import "MKPointOfInterestFilter.h"

@interface MKLookAroundView : UIView <MKLookAroundGestureControllerDelegate, VKMapViewCameraDelegate, VKMapViewDelegate, NSCoding>

 {
    _MKLookAroundLayerHostingView *_hostView;
    BOOL _changingViewSize;
    BOOL _wantsCompassShown;
    UIImageView *_transitionStartImageview;
    UIImageView *_transitionEndImageview;
    UIImageView *_transitionGridImageview;
    UIView<MKCompassView> *_compassView;
    NSLayoutConstraint *_compassTopOrBottomConstraint;
    NSLayoutConstraint *_compassTrailingConstraint;
    UITapGestureRecognizer *_compassSelectGestureRecognizer;
    MKLookAroundBumpFlash *_bumpFlashView;
    MKLookAroundGestureController *_gestureController;
    CLLocationCoordinate2D _lastCoordinate;
    NSArray *_lastGroundViews;
    NSString *_lastJunctionName;
    id<MKMapServiceTicket> *_refineTicket;
    id<MKMapServiceTicket> *_revGeoTicket;
    CGRect _oldRect;
    BOOL _hasValidViewState;
    BOOL _storefrontFullyDrawn;
    BOOL _wantsStorefrontCloseUpView;
    BOOL _moveToStorefrontViewInProgress;
    BOOL _didTriggerAdequatelyDrawnNotification;
    BOOL _didChangeCameraFrame;
    BOOL _didStartRegionChange;
    GEOStorefrontView *_requestedStorefrontView;
    NSDate *_startTime;
    int _triggerAction;
    MKHapticEngine *_hapticEngine;
}


@property (readonly, nonatomic) BOOL adequatelyDrawn;
@property (nonatomic) CLLocationCoordinate2D centerCoordinate;
@property (readonly, nonatomic) NSDate *collectionDate;
@property (nonatomic, getter=isCompassHidden) BOOL compassHidden;
@property (nonatomic) UIEdgeInsets compassInsets; // ivar: _compassInsets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKLookAroundViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEnteredLookAround; // ivar: _hasEnteredLookAround
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *imageResources;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (retain, nonatomic) VKMapView *lookAroundView; // ivar: _lookAroundView
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) VKMuninMarker *muninMarker;
@property (readonly, nonatomic) GEOMuninViewState *muninViewState; // ivar: _muninViewState
@property (nonatomic) BOOL navigatingEnabled; // ivar: _navigatingEnabled
@property (readonly, nonatomic) UIView *overlayView; // ivar: _overlayView
@property (nonatomic) BOOL panningEnabled; // ivar: _panningEnabled
@property (copy, nonatomic) MKPointOfInterestFilter *pointOfInterestFilter; // ivar: _pointOfInterestFilter
@property (nonatomic) CGFloat presentationYaw;
@property (readonly, nonatomic) MKMapItem *revGeoMapItem; // ivar: _revGeoMapItem
@property (readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
@property (readonly, nonatomic) NSURL *sharingURL;
@property (nonatomic) BOOL showsPointLabels;
@property (nonatomic) BOOL showsRoadLabels;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visiblePlaceMUIDs;
@property (readonly, nonatomic) NSArray *visibleRoadLabels;
@property (nonatomic) BOOL zoomingEnabled; // ivar: _zoomingEnabled


-(BOOL)_moveToStorefrontView:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_pointContainedInCompassView:(struct CGPoint )arg0 ;
-(BOOL)cancelPendingMove;
-(BOOL)lookAroundGestureControllerShouldReceive:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)moveToMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 orMuninMarker:(id)arg2 withHeading:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(BOOL)tapAtPoint:(struct CGPoint )arg0 ;
-(id)_imageFromLookAroundView;
-(id)_locationInfoWithHeading:(CGFloat)arg0 ;
-(id)_mapkit_locationSubtitle;
-(id)_mapkit_locationTitle;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)labelMarkerForCustomFeatureAnnotation:(id)arg0 ;
-(void)_animateCanvasForBounds:(struct CGRect )arg0 ;
-(void)_enterLookAroundForMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 cameraFrameOverride:(id)arg2 ;
-(void)_enterLookAroundForMuninMarker:(id)arg0 withHeading:(CGFloat)arg1 ;
-(void)_enterLookAroundForMuninViewState:(id)arg0 ;
-(void)_handleCompassSelect;
-(void)_maps_initCommon;
-(void)_refineLabelMarker:(id)arg0 ;
-(void)_resetViewState;
-(void)_reverseGeocodeCoordinate:(struct CLLocationCoordinate2D )arg0 ;
-(void)_setInitialLocationInfo;
-(void)_updateCameraFrame;
-(void)_updateCompass;
-(void)_updateCompassInsets;
-(void)_updateLocationInfo;
-(void)_updateLocationInfoForCoordinate:(struct CLLocationCoordinate2D )arg0 allowReverseGeocodeIfNeeded:(BOOL)arg1 ;
-(void)addCustomFeatureDataSource:(id)arg0 ;
-(void)dealloc;
-(void)deselectLabelMarker;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enterLookAroundWithEntryPoint:(id)arg0 ;
-(void)jumpToCloseUpView;
-(void)jumpToStandOffView;
-(void)lookAroundGestureController:(id)arg0 didTapAtPoint:(struct CGPoint )arg1 areaAvailable:(BOOL)arg2 ;
-(void)lookAroundGestureController:(id)arg0 didTapLabelMarker:(id)arg1 ;
-(void)lookAroundGestureController:(id)arg0 didZoomWithDirection:(NSInteger)arg1 type:(NSInteger)arg2 ;
-(void)lookAroundGestureControllerDidPan:(id)arg0 ;
-(void)lookAroundGestureControllerDidStartUserInteraction:(id)arg0 ;
-(void)lookAroundGestureControllerDidStopUserInteraction:(id)arg0 ;
-(void)mapLayer:(id)arg0 nearestJunctionDidChange:(id)arg1 currentRoad:(id)arg2 ;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg0 ;
-(void)mapLayerDidChangeSceneState:(id)arg0 withState:(NSUInteger)arg1 ;
-(void)mapLayerDidChangeVisibleRegion;
-(void)mapLayerWasUnableToAnimate;
-(void)mapLayerWillAnimateToLocation:(struct ? )arg0 ;
-(void)mapLayerWillChangeRegionAnimated:(BOOL)arg0 ;
-(void)moveToCloseUpView;
-(void)moveToCloseUpViewAnimated:(BOOL)arg0 ;
-(void)moveToStandOffView;
-(void)moveToStandOffViewAnimated:(BOOL)arg0 ;
-(void)openInMapsWithCompletionHandler:(id)arg0 ;
-(void)recordTriggerAction:(int)arg0 ;
-(void)removeCustomFeatureDataSource:(id)arg0 ;
-(void)reset;
-(void)selectLabelMarker:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)snapToNorth:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif