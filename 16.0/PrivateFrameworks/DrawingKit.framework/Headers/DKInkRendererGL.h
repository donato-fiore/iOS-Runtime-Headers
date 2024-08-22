// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKINKRENDERERGL_H
#define DKINKRENDERERGL_H

@class GLKView, NSMutableArray, NSString, UIColor;
@protocol DKOpenGLRendererDelegate, DKInkRenderer, DKInkRendererDelegate;


#import "DKOpenGLRenderer.h"

@interface DKInkRendererGL : GLKView <DKOpenGLRendererDelegate, DKInkRenderer>

 {
    NSMutableArray *_brushPointQueue;
    NSMutableArray *_brushStrokes;
    NSMutableArray *_currentBrushStroke;
    BOOL _initialized;
    CGFloat _backingScale;
    DKOpenGLRenderer *_inkRenderer;
    BOOL _needToNotify;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DKInkRendererDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawingEnabled; // ivar: drawingEnabled
@property (nonatomic) CGFloat drawingScale; // ivar: _drawingScale
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL initialized;
@property (retain, nonatomic) UIColor *inkColor; // ivar: _inkColor
@property (readonly, nonatomic) NSUInteger maximumPointsForBleedAnimation;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (nonatomic) BOOL scaleDrawingToFitCanvas; // ivar: scaleDrawingToFitCanvas
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBleedAnimation;


-(BOOL)canBecomeFirstResponder;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snapshotImage;
-(void)_commonInit;
-(void)addPoint:(struct ? )arg0 ;
-(void)addPointsFromBrushPointQueueWithSegmentLength:(NSUInteger)arg0 ;
-(void)beginStroke;
-(void)clear;
-(void)completeAnimationsImmediately;
-(void)dealloc;
-(void)display;
-(void)displayForcefully;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endStroke;
-(void)flush;
-(void)force;
-(void)layoutSubviews;
-(void)removeLastStroke;
-(void)rendererDidFinishAnimatingDrawing:(id)arg0 ;
-(void)resetRendererState;
-(void)teardown;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif