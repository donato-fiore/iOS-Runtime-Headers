// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCAMERACONTROLLER_H
#define VKCAMERACONTROLLER_H

@class NSString, GEOMapRegion;
@protocol VKCameraController, MDRenderTarget, VKMapViewCameraDelegate;

#import <Foundation/Foundation.h>

#import "VKCamera.h"

@interface VKCameraController : NSObject <VKCameraController>

 {
    VKCamera *_vkCamera;
    ? _camera;
    id<MDRenderTarget> *_canvas;
    id<VKMapViewCameraDelegate> *_cameraDelegate;
    BOOL _gesturing;
    NSUInteger _regionChangeCount;
    BOOL _inProgressRegionChangeIsAnimated;
    VKEdgeInsets _edgeInsets;
    BOOL _edgeInsetsAnimating;
    ? _animationRunner;
}


@property (readonly, nonatomic) CGFloat altitude;
@property ? animationRunner;
@property (readonly, nonatomic) BOOL canPitch;
@property (readonly, nonatomic) BOOL canRotate;
@property (nonatomic) ? centerCoordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat distanceFromCenterCoordinate;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat heading;
@property (readonly, nonatomic) BOOL isFullyPitched;
@property (nonatomic) BOOL isPitchEnabled; // ivar: _isPitchEnabled
@property (readonly, nonatomic) BOOL isPitched;
@property (nonatomic) BOOL isRotateEnabled; // ivar: _isRotateEnabled
@property (readonly, nonatomic) BOOL isRotated;
@property (readonly, nonatomic) *MapDataAccess mapDataAccess; // ivar: _mapDataAccess
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) GEOMapRegion *mapRegionIgnoringEdgeInsets;
@property (readonly, nonatomic) CGFloat maxPitch;
@property (readonly, nonatomic) CGFloat minPitch;
@property (nonatomic) CGFloat pitch;
@property (readonly, nonatomic) CGFloat presentationHeading;
@property (readonly, nonatomic) *RunLoopController runLoopController; // ivar: _runLoopController
@property (nonatomic) BOOL staysCenteredDuringPinch; // ivar: _staysCenteredDuringPinch
@property (nonatomic) BOOL staysCenteredDuringRotation; // ivar: _staysCenteredDuringRotation
@property (readonly) Class superclass;


-(?)initWithMapDataAccess:(?)arg0 animationRunner:(?)arg1 runLoopControllercameraDelegate;
-(BOOL)canZoomInForTileSize:(NSInteger)arg0 ;
-(BOOL)canZoomOutForTileSize:(NSInteger)arg0 ;
-(BOOL)centerCoordinate:(struct ? *)arg0 andDistanceFromCenter:(*CGFloat)arg1 forMapRegion:(id)arg2 ;
-(CGFloat)currentZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)maximumZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)minimumZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)topDownMinimumZoomLevelForTileSize:(NSInteger)arg0 ;
-(CGFloat)zoomLevelAdjustmentForTileSize:(NSInteger)arg0 ;
-(struct CGPoint )scaledScreenPointForPoint:(struct CGPoint )arg0 ;
-(struct Matrix<int, 2, 1> )cursorFromScreenPoint:(struct CGPoint )arg0 ;
-(void)beginRegionChange:(BOOL)arg0 ;
-(void)populateDebugNode:(*void)arg0 withOptions:(*void)arg1 ;
-(void)updateWithTimestamp:(CGFloat)arg0 withContext:(*void)arg1 ;


@end


#endif