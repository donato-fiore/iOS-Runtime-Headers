// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKMAPCANVAS_H
#define VKMAPCANVAS_H

@class NSString, NSArray;
@protocol VKMapModelDelegate, VKInteractiveMap, VKInteractiveMapDelegate;


#import "VKScreenCanvas.h"
#import "VKTimedAnimation.h"
#import "VKMapModel.h"

@interface VKMapCanvas : VKScreenCanvas <VKMapModelDelegate, VKInteractiveMap>

 {
    CGSize _lastCanvasSize;
    optional<float> _lastValidCanvasSizeZoomLevel;
    VKTimedAnimation *_horizontalOffsetAnimation;
    shared_ptr<md::OverlayContainer> _overlayContainer;
}


@property (nonatomic) CGFloat canonicalSkyHeight; // ivar: _canonicalSkyHeight
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<VKInteractiveMapDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) VKMapModel *map; // ivar: _map
@property (readonly, nonatomic) NSArray *overlays;
@property (readonly) Class superclass;
@property (nonatomic) BOOL trafficEnabled; // ivar: _trafficEnabled
@property (readonly, nonatomic) NSArray *visibleTileSets;


+(BOOL)supportsMapType:(int)arg0 scale:(int)arg1 ;
-(BOOL)_isGlobeEnabled;
-(BOOL)isPointValidForGesturing:(struct CGPoint )arg0 ;
-(BOOL)shouldHideOffscreenSelectedAnnotation;
-(NSInteger)tileSize;
-(id)annotationCoordinateTest:(SEL)arg0 ;
-(id)annotationRectTest:(SEL)arg0 ;
-(id)attributionsForCurrentRegion;
-(id)consoleString:(BOOL)arg0 ;
-(id)detailedDescription;
-(id)globeAnnotationCoordinateTest:(SEL)arg0 ;
-(id)globeAnnotationRectTest:(SEL)arg0 ;
-(id)initWithMapEngine:(*void)arg0 inBackground:(BOOL)arg1 ;
-(id)markerAtScreenPoint:(struct CGPoint )arg0 enableExtendedFeatureMarkers:(BOOL)arg1 ;
-(id)navigationPuck;
-(struct ? )convertPointToCoordinate:(struct CGPoint )arg0 ;
-(struct ? )convertPointToMapPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )convertCoordinateToCameraModelPoint:(struct ? )arg0 ;
-(struct CGPoint )convertCoordinateToPoint:(struct ? )arg0 ;
-(struct CGPoint )convertMapPointToPoint:(struct ? )arg0 ;
-(struct optional<float> )_zoomLevelForCanvasSize:(struct CGSize )arg0 ;
-(void)addOverlay:(id)arg0 ;
-(void)clearScene;
-(void)dealloc;
-(void)debugHighlightObjectAtPoint:(struct CGPoint )arg0 highlightTarget:(unsigned char)arg1 ;
-(void)didBecomeActive;
-(void)didBecomeInActive;
-(void)goToTileX:(int)arg0 Y:(int)arg1 Z:(int)arg2 tileSize:(int)arg3 ;
-(void)insertOverlay:(id)arg0 aboveOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg0 belowOverlay:(id)arg1 ;
-(void)mapModel:(id)arg0 labelMarkerDidChangeState:(*void)arg1 ;
-(void)mapModel:(id)arg0 selectedLabelMarkerWillDisappear:(*void)arg1 ;
-(void)mapModelDidReloadStylesheet:(id)arg0 ;
-(void)mapModelDidUpdateMinMaxZoomLevel:(id)arg0 ;
-(void)mapModelLabelsDidLayout:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)populateDebugNode:(*void)arg0 withOptions:(*void)arg1 ;
-(void)reloadStylesheet;
-(void)removeOverlay:(id)arg0 ;
-(void)setCameraHorizontalOffset:(CGFloat)arg0 duration:(CGFloat)arg1 timingFunction:(id)arg2 ;
-(void)setContentsScale:(CGFloat)arg0 ;
-(void)transferStateFromCanvas:(id)arg0 ;
-(void)transitionToTracking:(BOOL)arg0 mapMode:(NSInteger)arg1 startLocation:(struct ? )arg2 startCourse:(CGFloat)arg3 cameraController:(id)arg4 pounceCompletionHandler:(id)arg5 ;
-(void)updateCameraForFrameResize;
-(void)updateOverlays;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif