// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMLIQUIDSHUTTERRENDERER_H
#define CAMLIQUIDSHUTTERRENDERER_H

@class CAMetalLayer;
@protocol MTLCommandQueue, MTLDevice, MTLRenderPipelineState;

#import <Foundation/Foundation.h>


@interface CAMLiquidShutterRenderer : NSObject

@property (nonatomic, setter=_setBackgrounded:) BOOL _backgrounded; // ivar: __backgrounded
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *_commandQueue; // ivar: __commandQueue
@property (readonly, nonatomic) NSObject<MTLDevice> *_device; // ivar: __device
@property (readonly, nonatomic) NSObject<MTLRenderPipelineState> *_renderPipelineState; // ivar: __renderPipelineState
@property (nonatomic) CGFloat blurRadius; // ivar: _blurRadius
@property (nonatomic) ? centerShape; // ivar: _centerShape
@property (nonatomic) ? dragHandleShape; // ivar: _dragHandleShape
@property (weak, nonatomic) CAMetalLayer *metalLayer; // ivar: _metalLayer
@property (nonatomic) BOOL needsRender; // ivar: _needsRender
@property (nonatomic) ? shadowColor; // ivar: _shadowColor
@property (nonatomic) CGFloat shadowSize; // ivar: _shadowSize
@property (nonatomic) BOOL showDragHandle; // ivar: _showDragHandle


-(id)initWithDevice:(id)arg0 commandQueue:(id)arg1 pixelFormat:(NSUInteger)arg2 ;
-(struct ? )_fragmentForShape:(struct ? )arg0 scale:(CGFloat)arg1 ;
-(struct ? )_orthographicMatrixWithLeft:(float)arg0 right:(float)arg1 bottom:(float)arg2 top:(float)arg3 near:(float)arg4 far:(float)arg5 ;
-(void)_applicationDidEnterBackground;
-(void)_applicationWillEnterForeground;
-(void)dealloc;
-(void)renderIfNecessary;


@end


#endif