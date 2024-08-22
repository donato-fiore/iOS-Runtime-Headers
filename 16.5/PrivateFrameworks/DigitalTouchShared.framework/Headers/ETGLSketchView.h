// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETGLSKETCHVIEW_H
#define ETGLSKETCHVIEW_H

@class UIView, CADisplayLink, UIColor, EAGLContext;
@protocol ETGLSketchRendererDelegate;


#import "ETQuadCurvePointFIFO.h"
#import "ETSketchMessage.h"
#import "ETPointFIFO.h"
#import "ETGLSketchRenderer.h"
#import "ETBoxcarFilterPointFIFO.h"

@interface ETGLSketchView : UIView <ETGLSketchRendererDelegate>

 {
    CADisplayLink *_displayLink;
    UIColor *_currentStrokeColor;
    CGFloat _lastDisplayLinkTime;
    BOOL _renderingOffscreen;
    NSUInteger _currentStrokeIndex;
    NSUInteger _currentPointIndex;
    NSUInteger _numberOfDrawnStrokes;
    CGFloat _renderingDelay;
    CGFloat _renderingStartTime;
    CGFloat _pauseTime;
    vector<std::vector<float __attribute__((ext_vector_type(2)))>, std::allocator<std::vector<float __attribute__((ext_vector_type(2)))>>> _vertexBatches;
    vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>> _controlBatches;
    vector<unsigned long, std::allocator<unsigned long>> _vertexBatchCount;
    vector<unsigned long, std::allocator<unsigned long>> _secondaryVertexBatchCount;
}


@property (retain, nonatomic) EAGLContext *context; // ivar: _context
@property ? controlBatches;
@property (nonatomic) CGFloat delayBetweenStrokes; // ivar: _delayBetweenStrokes
@property (retain, nonatomic) ETQuadCurvePointFIFO *interpolatingFIFO; // ivar: _interpolatingFIFO
@property (retain, nonatomic) ETSketchMessage *messageData; // ivar: _messageData
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) BOOL playbackCompleted; // ivar: _playbackCompleted
@property (nonatomic, getter=isPlaying) BOOL playing; // ivar: _playing
@property (retain, nonatomic) ETPointFIFO *pointFIFO; // ivar: _pointFIFO
@property (retain, nonatomic) ETGLSketchRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) ETQuadCurvePointFIFO *secondaryInterpolatingFIFO; // ivar: _secondaryInterpolatingFIFO
@property (retain, nonatomic) ETPointFIFO *secondaryPointFIFO; // ivar: _secondaryPointFIFO
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *secondarySmoothingFIFO; // ivar: _secondarySmoothingFIFO
@property ? secondaryVertexBatchCount;
@property (retain, nonatomic) ETBoxcarFilterPointFIFO *smoothingFIFO; // ivar: _smoothingFIFO
@property (nonatomic) CGFloat timestampForLastDrawnPoint; // ivar: _timestampForLastDrawnPoint
@property (nonatomic) float unitSize; // ivar: _unitSize
@property (nonatomic) BOOL useFastVerticalWisp; // ivar: _useFastVerticalWisp
@property ? vertexBatchCount;
@property ? vertexBatches;
@property (nonatomic) NSUInteger vertexOffset; // ivar: _vertexOffset
@property (nonatomic) CGFloat wispDelay; // ivar: _wispDelay


-(BOOL)_doesPoint:(struct ? *)arg0 predateTime:(CGFloat)arg1 ;
-(BOOL)_getCurrentSketchPoint:(struct ? *)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGImage *)createImageForTime:(CGFloat)arg0 ;
-(void)animateOutWithCompletion:(id)arg0 ;
-(void)beginStrokeWithColor:(id)arg0 ;
-(void)drawView:(id)arg0 ;
-(void)handleSketchAtPosition:(struct CGPoint )arg0 ;
-(void)handleTapAtPosition:(struct CGPoint )arg0 ;
-(void)sketchRendererDidReachVertexLimit:(id)arg0 ;
-(void)updateRendererWithPoints:(*NSUInteger)arg0 count:(*BOOL)arg1 controlPointflush;
-(void)updateRendererWithSecondaryPoints:(*NSUInteger)arg0 count:(*BOOL)arg1 controlPointflush;


@end


#endif