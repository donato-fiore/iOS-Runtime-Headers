// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMFMAPVIEWCONTROLLER_H
#define FMFMAPVIEWCONTROLLER_H

@class UIViewController, NSSet, UIColor, UIImageView, NSString, UIBarButtonItem, FMFSession, MKMapView, _MKUserTrackingButton;
@protocol FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, MKUserTrackingView, FMFNoLocationViewDelegate, FMFMapOptionsViewControllerDelegate, FMFMapViewControllerDelegate;


#import "FMFMapOptionsViewController.h"
#import "FMFMapViewDelegateInternal.h"
#import "FMFNoLocationView.h"
#import "FMFRefreshBarButtonItem.h"
#import "FMFTitleView.h"

@interface FMFMapViewController : UIViewController <FMFSessionDelegateInternal, FMFMapViewDelegateInternalDelegate, MKUserTrackingView, FMFNoLocationViewDelegate, FMFMapOptionsViewControllerDelegate>



@property (nonatomic) BOOL _blockDidReceiveAnimation; // ivar: __blockDidReceiveAnimation
@property (retain, nonatomic) NSSet *_internalHandlesShowingLocations; // ivar: __internalHandlesShowingLocations
@property (nonatomic) BOOL _isRenderingInitialMap; // ivar: __isRenderingInitialMap
@property (retain, nonatomic) NSSet *_preloadedHandles; // ivar: __preloadedHandles
@property (nonatomic) BOOL _refreshingIsPaused; // ivar: __refreshingIsPaused
@property (nonatomic) BOOL alwaysShowAccuracy; // ivar: _alwaysShowAccuracy
@property (copy, nonatomic) UIColor *annotationTintColor; // ivar: _annotationTintColor
@property (retain, nonatomic) UIImageView *cachedMapView; // ivar: _cachedMapView
@property (nonatomic) NSInteger currentTrackingMode; // ivar: _currentTrackingMode
@property (retain, nonatomic) NSString *debugContext; // ivar: _debugContext
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger defaultMapType; // ivar: _defaultMapType
@property (weak, nonatomic) NSObject<FMFMapViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIBarButtonItem *directionsBarButtonItem; // ivar: _directionsBarButtonItem
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) FMFSession *fmfSession; // ivar: _fmfSession
@property (copy, nonatomic) NSSet *handlesShowingLocations;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *infoBarButtonItem; // ivar: _infoBarButtonItem
@property (nonatomic) BOOL isMapCenteringDisabled; // ivar: _isMapCenteringDisabled
@property (nonatomic) BOOL isSimpleMap; // ivar: _isSimpleMap
@property (retain, nonatomic) FMFMapOptionsViewController *mapOptionsVC; // ivar: _mapOptionsVC
@property (nonatomic) BOOL mapTypeLoaded; // ivar: _mapTypeLoaded
@property (retain, nonatomic) MKMapView *mapView; // ivar: _mapView
@property (retain, nonatomic) FMFMapViewDelegateInternal *mapViewDelegate; // ivar: _mapViewDelegate
@property (retain, nonatomic) FMFNoLocationView *noLocationView; // ivar: _noLocationView
@property (retain, nonatomic) FMFRefreshBarButtonItem *refreshButton; // ivar: _refreshButton
@property (nonatomic) BOOL shouldZoomToFitMeAndLocations; // ivar: _shouldZoomToFitMeAndLocations
@property (nonatomic) BOOL shouldZoomToFitNewLocations; // ivar: _shouldZoomToFitNewLocations
@property (nonatomic) BOOL showFloatingMapLocationButton; // ivar: _showFloatingMapLocationButton
@property (readonly) Class superclass;
@property (retain, nonatomic) FMFTitleView *titleView; // ivar: _titleView
@property (retain, nonatomic) _MKUserTrackingButton *userTrackingButton; // ivar: _userTrackingButton
@property (retain, nonatomic) UIBarButtonItem *userTrackingButtonItem; // ivar: _userTrackingButtonItem
@property (nonatomic) BOOL viewWillAppearCalled; // ivar: _viewWillAppearCalled
@property (nonatomic) BOOL wasToolbarPreviouslyHidden; // ivar: _wasToolbarPreviouslyHidden


+(BOOL)hasUserLocation;
+(struct CGSize )annotationImageSize;
-(BOOL)canRotateForHeading;
-(BOOL)canSelectAnnotation:(id)arg0 ;
-(BOOL)canShowNoLocation;
-(BOOL)hasUserLocation;
-(BOOL)isCompact;
-(BOOL)isCurrentlyRotated;
-(BOOL)isLocationAlreadyOnMap:(id)arg0 ;
-(BOOL)mapHasUserLocations;
-(BOOL)sessionContainsHandle:(id)arg0 ;
-(BOOL)singleAnnotationOnMap;
-(CGFloat)liveAnimationDuration;
-(CGFloat)nonLiveAnimationDuration;
-(NSInteger)userTrackingMode;
-(id)_generateDebugContext;
-(id)_internalAnnotationTintColor;
-(id)_selectedHandleAnnotation;
-(id)annotationImageForAnnotation:(id)arg0 andHandle:(id)arg1 ;
-(id)init;
-(id)initSimpleMapWithDelegate:(id)arg0 handles:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 handles:(id)arg1 ;
-(id)locationOnMapForHandle:(id)arg0 enforceServerId:(BOOL)arg1 ;
-(id)openInAppURL;
-(void)_authorizeMonitoringLocation;
-(void)_dismiss:(id)arg0 ;
-(void)_enablePreloadedHandles:(id)arg0 ;
-(void)_setUserTrackingMode:(NSInteger)arg0 animated:(BOOL)arg1 fromTrackingButton:(BOOL)arg2 ;
-(void)_updateDirectionsButtonEnabled;
-(void)_updateLocationButtonEnabled;
-(void)_updateTitleViewLocation:(id)arg0 ;
-(void)addHandlesToSession;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)dealloc;
-(void)deselectAllAnnotations;
-(void)destroySession;
-(void)didDeselectLocation:(id)arg0 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)didReceiveLocation:(id)arg0 ;
-(void)didReceiveLocationForDelegateCallback:(id)arg0 ;
-(void)didReceiveMemoryWarning;
-(void)didSelectLocation:(id)arg0 ;
-(void)didStopAbilityToGetLocationForHandle:(id)arg0 ;
-(void)didUpdateUserLocation:(id)arg0 ;
-(void)enablePreloadedHandles;
-(void)getDirections;
-(void)hideCachedMap;
-(void)infoButtonTapped:(id)arg0 ;
-(void)initializeDefaults;
-(void)loadCachedLocationsForHandles;
-(void)loadDelegate;
-(void)loadView;
-(void)mapTypeChanged:(NSUInteger)arg0 ;
-(void)mapTypeChangedNotification:(id)arg0 ;
-(void)openInMapsButtonTapped:(id)arg0 ;
-(void)presentMapOptionsModal:(id)arg0 ;
-(void)reZoomToFit;
-(void)recenterMap;
-(void)refreshButtonTapped:(id)arg0 ;
-(void)regionDidChangeAnimated:(BOOL)arg0 ;
-(void)regionWillChangeAnimated:(BOOL)arg0 ;
-(void)removeAllFriendLocationsFromMap;
-(void)removeAnnotationsFromMapForHandle:(id)arg0 ;
-(void)removeHandlesFromSession;
-(void)resumeRefreshingLocations;
-(void)selectAnnotationIfSingleForMac;
-(void)selectAnnotationIfSingleFriend:(id)arg0 ;
-(void)setupRecenterMapTimer;
-(void)setupToolbarItems;
-(void)startShowingLocationsForHandles:(id)arg0 ;
-(void)stopRefreshingLocations;
-(void)stopShowingLocationsForHandles:(id)arg0 ;
-(void)updateAllAnnotationsDueToAddressBookUpdate;
-(void)updateMapWithNewLocation:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateNoLocationView:(BOOL)arg0 ;
-(void)updateRefreshForLocation:(id)arg0 ;
-(void)updateUserTrackingButtonState;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillAppearWillMoveToWindowSetup;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;
-(void)zoomAndSelectHandle:(id)arg0 ;
-(void)zoomToFit;
-(void)zoomToFit:(BOOL)arg0 ;


@end


#endif