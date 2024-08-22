// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKMUNINVIEW_H
#define MKMUNINVIEW_H

@class UIView, UIImageView, UIView<MKCompassView>, NSLayoutConstraint, UITapGestureRecognizer, NSArray, NSString, GEOStorefrontView, NSDate, VKMuninMarker, VKMapView, GEOMuninViewState, VKLabelMarker, NSURL;
@protocol MKMuninGestureControllerDelegate, VKMapViewCameraDelegate, VKMapViewDelegate, NSCoding, MKMapServiceTicket, MKMuninViewDelegate;


#import "_MKMuninLayerHostingView.h"
#import "MKMuninGestureController.h"
#import "MKMuninBumpFlash.h"
#import "MKHapticEngine.h"
#import "MKMapItem.h"

@interface MKMuninView : UIView <MKMuninGestureControllerDelegate, VKMapViewCameraDelegate, VKMapViewDelegate, NSCoding>

 {
    _MKMuninLayerHostingView *_hostView;
    BOOL _changingViewSize;
    BOOL _wantsCompassShown;
    UIImageView *_transitionStartImageview;
    UIImageView *_transitionEndImageview;
    UIImageView *_transitionGridImageview;
    UIView<MKCompassView> *_compassView;
    NSLayoutConstraint *_compassTopOrBottomConstraint;
    NSLayoutConstraint *_compassTrailingConstraint;
    UITapGestureRecognizer *_compassTapGestureRecognizer;
    MKMuninGestureController *_gestureController;
    MKMuninBumpFlash *_bumpFlashView;
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
@property (weak, nonatomic) NSObject<MKMuninViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasEnteredMunin; // ivar: _hasEnteredMunin
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *imageResources;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic) MKMapItem *mapItem; // ivar: _mapItem
@property (readonly, nonatomic) VKMuninMarker *muninMarker;
@property (retain, nonatomic) VKMapView *muninView; // ivar: _muninView
@property (readonly, nonatomic) GEOMuninViewState *muninViewState; // ivar: _muninViewState
@property (nonatomic) BOOL navigatingEnabled; // ivar: _navigatingEnabled
@property (nonatomic) BOOL panningEnabled; // ivar: _panningEnabled
@property (nonatomic) BOOL pinchingEnabled; // ivar: _pinchingEnabled
@property (nonatomic) CGFloat presentationYaw;
@property (readonly, nonatomic) MKMapItem *revGeoMapItem; // ivar: _revGeoMapItem
@property (readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
@property (readonly, nonatomic) NSURL *sharingURL;
@property (nonatomic) BOOL showsPointLabels;
@property (nonatomic) BOOL showsRoadLabels;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visiblePlaceMUIDs;
@property (readonly, nonatomic) NSArray *visibleRoadLabels;


-(BOOL)_moveToStorefrontView:(id)arg0 animated:(BOOL)arg1 completionHandler:(id)arg2 ;
-(BOOL)_pointContainedInCompassView:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)cancelPendingMove;
-(BOOL)moveToMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 orMuninMarker:(id)arg2 withHeading:(CGFloat)arg3 completionHandler:(id)arg4 ;
-(BOOL)tapAtPoint:(struct CGPoint )arg0 ;
-(id)_locationInfoWithHeading:(CGFloat)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)labelMarkerForCustomFeatureAnnotation:(id)arg0 ;
-(void)_animateCanvasForBounds:(struct CGRect )arg0 ;
-(void)_enterMuninForMapItem:(id)arg0 wantsCloseUpView:(BOOL)arg1 ;
-(void)_enterMuninForMuninMarker:(id)arg0 withHeading:(CGFloat)arg1 ;
-(void)_enterMuninForMuninViewState:(id)arg0 ;
-(void)_handleCompassTap;
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
-(void)enterMuninWithEntryPoint:(id)arg0 ;
-(void)jumpToCloseUpView;
-(void)jumpToStandOffView;
-(void)mapLayer:(id)arg0 nearestJunctionDidChange:(id)arg1 currentRoad:(id)arg2 ;
-(void)mapLayerDidChangeRegionAnimated:(BOOL)arg0 ;
-(void)mapLayerDidChangeSceneState:(id)arg0 withState:(NSUInteger)arg1 ;
-(void)mapLayerDidChangeVisibleRegion;
-(void)mapLayerWasUnableToAnimate;
-(void)mapLayerWillAnimateToLocation:(struct ? )arg0 ;
-(void)moveToCloseUpView;
-(void)moveToCloseUpViewAnimated:(BOOL)arg0 ;
-(void)moveToStandOffView;
-(void)moveToStandOffViewAnimated:(BOOL)arg0 ;
-(void)muninGestureController:(id)arg0 didTapAtPoint:(struct CGPoint )arg1 areaAvailable:(BOOL)arg2 ;
-(void)muninGestureController:(id)arg0 didTapLabelMarker:(id)arg1 ;
-(void)muninGestureController:(id)arg0 didZoomWithDirection:(NSInteger)arg1 type:(NSInteger)arg2 ;
-(void)muninGestureControllerDidPan:(id)arg0 ;
-(void)muninGestureControllerDidStartUserInteraction:(id)arg0 ;
-(void)muninGestureControllerDidStopUserInteraction:(id)arg0 ;
-(void)openInMapsWithCompletionHandler:(id)arg0 ;
-(void)recordTriggerAction:(int)arg0 ;
-(void)removeCustomFeatureDataSource:(id)arg0 ;
-(void)selectLabelMarker:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)snapToNorth:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif