// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKCLASSICGLOBECANVAS_H
#define VKCLASSICGLOBECANVAS_H

@class NSString, NSArray;
@protocol GEOResourceManifestTileGroupObserver, VKInteractiveMap, VKInteractiveMapDelegate;


#import "VKScreenCanvas.h"
#import "VKARCameraController.h"
#import "VKGlobeCameraController.h"

@interface VKClassicGlobeCanvas : VKScreenCanvas <GEOResourceManifestTileGroupObserver, VKInteractiveMap>

 {
    CGFloat _contentScale;
    AltitudeDebugSettings _debugSettings;
    *void _globeAdapter;
    *void _renderer;
    shared_ptr<md::GlobeOverlayContainer> _overlayContainer;
    shared_ptr<ggl::FlyoverLibrary> _flyoverLibrary;
    BOOL _initialized;
    shared_ptr<bool> _isDead;
    BOOL _isLoading;
    BOOL _isDownloading;
    BOOL _coarseLoading;
    BOOL _tourIsDownloading;
    *void _loadingStatusTracker;
    CGFloat _currentZoomLevel;
    BOOL _arRoadDisabledState;
    CGSize _lastCanvasSize;
}


@property (readonly, nonatomic) VKARCameraController *arCameraController; // ivar: _arCameraController
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VKInteractiveMapDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableLabels; // ivar: _disableLabels
@property (nonatomic) BOOL disableRoads; // ivar: _disableRoads
@property (readonly, nonatomic) BOOL flyoverAvailable; // ivar: _canShowFlyover
@property (readonly, nonatomic) int flyoverMode; // ivar: _flyoverMode
@property (readonly, nonatomic) VKGlobeCameraController *globeCameraController; // ivar: _globeCameraController
@property (readonly) NSUInteger hash;
@property (nonatomic) int mapType; // ivar: _mapType
@property (readonly, nonatomic) NSArray *overlays;
@property (copy, nonatomic) id *sceneDidLoadCallback; // ivar: _sceneDidLoadCallback
@property (readonly) Class superclass;
@property (nonatomic) BOOL trafficEnabled; // ivar: _trafficEnabled
@property (readonly, nonatomic) NSArray *visibleTileSets;


+(BOOL)supportsMapType:(int)arg0 scale:(int)arg1 ;
-(*void)_clientStyleState;
-(*void)_styleManager;
-(BOOL)isPointValidForGesturing:(struct CGPoint )arg0 ;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(BOOL)useNewRenderPath;
-(id)annotationCoordinateTest:(SEL)arg0 ;
-(id)annotationRectTest:(SEL)arg0 ;
-(id)attributionsForCurrentRegion;
-(id)consoleString:(BOOL)arg0 ;
-(id)createFlyoverPreTourAnimation:(id)arg0 duration:(CGFloat)arg1 ;
-(id)detailedDescription;
-(id)flyoverStatistics;
-(id)initWithMapEngine:(*void)arg0 inBackground:(BOOL)arg1 ;
-(struct ? )convertPointToCoordinate:(struct CGPoint )arg0 ;
-(struct ? )convertPointToCoordinateOnSphere:(struct CGPoint )arg0 ;
-(struct ? )convertPointToMapPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )_centerScreenPoint;
-(struct CGPoint )convertCoordinateToCameraModelPoint:(struct ? )arg0 ;
-(struct CGPoint )convertCoordinateToPoint:(struct ? )arg0 ;
-(struct CGPoint )convertMapPointToPoint:(struct ? )arg0 ;
-(struct GlobeOverlayContainer *)overlayContainer;
-(void)_reloadStylesheet;
-(void)_setDefaultFov:(float)arg0 ;
-(void)_update;
-(void)_updateDebugSettings;
-(void)addOverlay:(id)arg0 ;
-(void)dealloc;
-(void)debugHighlightObjectAtPoint:(struct CGPoint )arg0 highlightTarget:(unsigned char)arg1 ;
-(void)didBecomeActive;
-(void)didBecomeInActive;
-(void)didPresent;
-(void)didReceiveMemoryWarning:(BOOL)arg0 beAggressive:(BOOL)arg1 ;
-(void)disableFlyoverStatistics;
-(void)disableTileAnalytics;
-(void)enableFlyoverStatistics;
-(void)enableTileAnalytics;
-(void)enterARSessionAtCoordinate:(struct ? )arg0 ;
-(void)exitARSession;
-(void)insertOverlay:(id)arg0 aboveOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg0 belowOverlay:(id)arg1 ;
-(void)pauseFlyoverTourAnimation;
-(void)prepareFlyoverAnimation:(id)arg0 completion:(id)arg1 ;
-(void)removeOverlay:(id)arg0 ;
-(void)resetFlyoverStatistics;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg0 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg0 ;
-(void)resumeFlyoverTourAnimation;
-(void)setCamera:(struct shared_ptr<gdc::Camera> )arg0 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)setupMapScene;
// -(void)startFlyoverAnimation:(id)arg0 animateToStart:(BOOL)arg1 labelChanged:(id)arg2 stateChange:(unk)arg3  ;
// -(void)startFlyoverTourAnimation:(NSUInteger)arg0 animateToStart:(BOOL)arg1 labelChanged:(id)arg2 stateChange:(unk)arg3  ;
-(void)stopAnimations;
-(void)stopFlyoverAnimation;
-(void)stopLoading;
-(void)stopSnappingAnimations;
-(void)transferStateFromCanvas:(id)arg0 ;
-(void)transitionToTracking:(BOOL)arg0 mapMode:(NSInteger)arg1 startLocation:(struct ? )arg2 startCourse:(CGFloat)arg3 cameraController:(id)arg4 pounceCompletionHandler:(id)arg5 ;
-(void)updateCameraForFrameResize;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;
-(void)waitForLoading;


@end


#endif