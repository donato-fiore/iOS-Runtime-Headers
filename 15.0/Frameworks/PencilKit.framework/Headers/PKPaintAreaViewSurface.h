// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAINTAREAVIEWSURFACE_H
#define PKPAINTAREAVIEWSURFACE_H

@class NSMutableArray, CIContext, NSString, NSUUID, NSMutableSet;
@protocol PKControllerDelegate, PKMetalRendererControllerDelegate, OS_dispatch_queue, PKPaintSurface;

#import <Foundation/Foundation.h>

#import "PKController.h"
#import "PKPaintAreaView.h"

@interface PKPaintAreaViewSurface : NSObject <PKControllerDelegate, PKMetalRendererControllerDelegate>

 {
    NSMutableArray *_textureSet;
    CGSize _pixelSize;
    CGPoint _oldEraseLocation;
    CIContext *_imageContext;
}


@property BOOL allowLiveInteraction; // ivar: _allowLiveInteraction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly, nonatomic) PKController *drawingController; // ivar: _drawingController
@property (readonly, nonatomic) CGSize drawingSize; // ivar: _drawingSize
@property (readonly, nonatomic) NSUUID *drawingUUID; // ivar: _drawingUUID
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDrawing; // ivar: _isDrawing
@property (readonly, nonatomic) BOOL isErasingObjects; // ivar: _isErasingObjects
@property (readonly, nonatomic) BOOL isMipmapped; // ivar: _isMipmapped
@property (weak, nonatomic) PKPaintAreaView *paintAreaView; // ivar: _paintAreaView
@property (nonatomic) CGPoint previousPoint; // ivar: _previousPoint
@property (readonly, nonatomic) NSMutableSet *strokeIDsToErase; // ivar: _strokeIDsToErase
@property (readonly, nonatomic) CGAffineTransform strokeTransform; // ivar: _strokeTransform
@property (readonly, nonatomic) NSMutableArray *strokesToErase; // ivar: _strokesToErase
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PKPaintSurface> *surface; // ivar: _surface
@property (readonly, nonatomic) CGFloat textureScale; // ivar: _textureScale
@property (readonly, nonatomic) BOOL waitingForStrokeToEnd; // ivar: _waitingForStrokeToEnd


-(BOOL)eraserBegan:(id)arg0 transformedLocation:(struct CGPoint )arg1 ;
-(id)CIImageFromTexture:(id)arg0 ;
-(id)initWithPaintSurface:(id)arg0 dispatchQueue:(id)arg1 ;
-(id)nextTextureTargetForMetalRendererController:(id)arg0 ;
-(void)_didFinishErasingStrokes:(BOOL)arg0 ;
-(void)_setupPKController;
-(void)dealloc;
-(void)dispatchSyncOnSurfaceQueue:(id)arg0 ;
-(void)drawingBegan:(id)arg0 transformedLocation:(struct CGPoint )arg1 activeInputProperties:(NSUInteger)arg2 ;
-(void)drawingCancelled;
-(void)drawingChanged:(id)arg0 ;
-(void)drawingEndedWithDetectedShape:(id)arg0 completionBlock:(id)arg1 ;
-(void)eraseStrokesForPoint:(struct CGPoint )arg0 prevPoint:(struct CGPoint )arg1 ;
-(void)eraserCancelled;
-(void)eraserEnded;
-(void)eraserMoved:(id)arg0 transformedLocation:(struct CGPoint )arg1 ;
-(void)metalRendererController:(id)arg0 didCommitRenderingIntoTexture:(id)arg1 ;
-(void)setNeedsDrawingDisplay;
-(void)vsync:(CGFloat)arg0 ;


@end


#endif