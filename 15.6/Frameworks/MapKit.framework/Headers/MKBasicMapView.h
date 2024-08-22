// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKBASICMAPVIEW_H
#define MKBASICMAPVIEW_H

@class UIView, NSString, VKMapView;
@protocol GEOResourceManifestTileGroupObserver;



@interface MKBasicMapView : UIView <GEOResourceManifestTileGroupObserver>

 {
    UIView *_hostView;
}


@property (readonly, nonatomic, getter=isChangingViewSize) BOOL changingViewSize; // ivar: _changingViewSize
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIEdgeInsets edgeInsets;
@property (nonatomic) BOOL hasRenderedSomething; // ivar: _hasRenderedSomething
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInBackground) BOOL inBackground; // ivar: _inBackground
@property (nonatomic) BOOL inactive; // ivar: _inactive
@property (nonatomic) CGFloat mapModeStartTime; // ivar: _mapModeStartTime
@property (readonly, nonatomic) VKMapView *mapView; // ivar: _mapView
@property (nonatomic) BOOL rendersInBackground;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat trafficStartTime; // ivar: _trafficStartTime


-(BOOL)isPointValidForGesturing:(struct CGPoint )arg0 ;
-(CGFloat)calloutContainerCanvasScale;
-(id)initWithFrame:(struct CGRect )arg0 andGlobe:(BOOL)arg1 shouldRasterize:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 andGlobe:(BOOL)arg1 shouldRasterize:(BOOL)arg2 allowsAntialiasing:(BOOL)arg3 ;
-(struct CGPoint )convertCoordinate:(struct CLLocationCoordinate2D )arg0 toCameraModelPointToView:(id)arg1 ;
-(struct CGPoint )convertCoordinate:(struct CLLocationCoordinate2D )arg0 toPointToView:(id)arg1 ;
-(struct CGSize )calloutContainerCanvasSize;
-(struct CLLocationCoordinate2D )convertPoint:(struct CGPoint )arg0 toCoordinateFromView:(id)arg1 ;
-(void)_animateCanvasForBounds:(struct CGRect )arg0 ;
-(void)_didEnterBackground;
-(void)_finishedSnapshot:(id)arg0 ;
-(void)_registerSceneNotifications;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;
-(void)_unregisterSceneNotifications;
-(void)_updateBackgroundState;
-(void)_updateBackgroundState:(NSInteger)arg0 ;
-(void)_updateForCurrentScreen;
-(void)_updateMapViewHidden;
-(void)_updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg0 ignoreIfViewInWindow:(BOOL)arg1 ;
-(void)_updateStatsForTrafficEnabledTime:(BOOL)arg0 ;
-(void)addCalloutSubview:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHidden:(BOOL)arg0 ;
-(void)updateStatsForEnablingTraffic:(BOOL)arg0 ;
-(void)updateStatsForSwitchingToMapType:(int)arg0 ;
-(void)updateStatsForTimeSpentInCurrentMapTypeIsShowingFlyover:(BOOL)arg0 ;
-(void)updateStatsForTrafficEnabledTime;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif