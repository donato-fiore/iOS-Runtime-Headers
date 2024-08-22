// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ETGLSKETCHRENDERER_H
#define ETGLSKETCHRENDERER_H

@class CAEAGLLayer, EAGLContext;
@protocol ETGLSketchRendererDelegate;

#import <Foundation/Foundation.h>


@interface ETGLSketchRenderer : NSObject {
    BOOL _useThisRendererOnlyForWarmup;
    ? _brushColorForInitialColor;
    ? _brushColorForFinalColor;
}


@property (nonatomic) *? allVertices; // ivar: _allVertices
@property (nonatomic) unsigned int allocatedHeight; // ivar: _allocatedHeight
@property (nonatomic) unsigned int allocatedWidth; // ivar: _allocatedWidth
@property (nonatomic) unsigned int backingHeight; // ivar: _backingHeight
@property (nonatomic) unsigned int backingWidth; // ivar: _backingWidth
@property ? brushColorForFinalColor;
@property ? brushColorForInitialColor;
@property (nonatomic) CAEAGLLayer *cachedLayer; // ivar: _cachedLayer
@property (nonatomic) CGFloat cometScaleFactor; // ivar: _cometScaleFactor
@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (nonatomic) EAGLContext *context; // ivar: _context
@property (readonly, nonatomic) float currentTimeClock; // ivar: _currentTimeClock
@property (readonly, nonatomic) float currentTimeIndex; // ivar: _currentTimeIndex
@property (nonatomic) float deathTime; // ivar: _deathTime
@property (weak, nonatomic) NSObject<ETGLSketchRendererDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isDying; // ivar: _isDying
@property (nonatomic) float lastBirth; // ivar: _lastBirth
@property (nonatomic) CGFloat lineWidthScaleFactor; // ivar: _lineWidthScaleFactor
@property (nonatomic) BOOL renderingOffscreen; // ivar: _renderingOffscreen
@property (nonatomic) unsigned int shaderProgram; // ivar: _shaderProgram
@property (nonatomic) BOOL useFastVerticalWisp; // ivar: _useFastVerticalWisp
@property (nonatomic) unsigned int vaoLineID; // ivar: _vaoLineID
@property (nonatomic) unsigned int vboVertLineId; // ivar: _vboVertLineId
@property (nonatomic) int vertexBufferBegin; // ivar: _vertexBufferBegin
@property (nonatomic) int vertexBufferCount; // ivar: _vertexBufferCount
@property (nonatomic) NSUInteger vertexCount; // ivar: _vertexCount
@property (nonatomic) unsigned int viewFramebuffer; // ivar: _viewFramebuffer
@property (nonatomic) unsigned int viewRenderbuffer; // ivar: _viewRenderbuffer
@property (nonatomic) CGFloat wispDelay; // ivar: _wispDelay


-(BOOL)resizeFromLayer:(id)arg0 ;
-(id)initWithContext:(id)arg0 andDrawable:(id)arg1 ;
-(int)linkProgramWithVShader:(int)arg0 FShader:(int)arg1 ;
-(int)loadOneShaderOfType:(unsigned int)arg0 withCString:(char *)arg1 length:(int)arg2 ;
-(struct CGImage *)createRenderedFrameImageUsingAlpha:(BOOL)arg0 ;
-(void)animateOutWithCompletion:(id)arg0 ;
-(void)appendDualPointArray:(*NSUInteger)arg0 length:(*NSUInteger)arg1 controlPoint:(float)arg2 alternatePoints:(NSUInteger)arg3 alternateLength:(NSUInteger)arg4 alternateControlPointunitSizesegmentIndexsegmentCount;
-(void)appendPointArray:(*NSUInteger)arg0 length;
-(void)updateGLWithTime:(float)arg0 ;
-(void)updateVertexBufferWithVertexCount:(NSUInteger)arg0 ;


@end


#endif