// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUIKEYBOARDPATHRENDERER_H
#define TUIKEYBOARDPATHRENDERER_H

@class MTKView, NSString;
@protocol MTKViewDelegate, MTLDevice, MTLRenderPipelineState, MTLCommandQueue, MTLBuffer, TUIKeyboardPathRendererDataSource;

#import <Foundation/Foundation.h>


@interface TUIKeyboardPathRenderer : NSObject <MTKViewDelegate>

 {
    id<MTLDevice> *_device;
    MTKView *_view;
    BOOL _drawing;
    BOOL _setupCompleted;
    NSUInteger _colorPixelFormat;
    id<MTLRenderPipelineState> *_pipelineState;
    id<MTLCommandQueue> *_commandQueue;
    ? _viewportPointSize;
    ? _viewportPixelSize;
    float _scale;
    id<MTLBuffer> *_vertexBuffer;
    NSUInteger _vertexCount;
    ? _pathColor;
}


@property (weak, nonatomic) NSObject<TUIKeyboardPathRendererDataSource> *datasource; // ivar: _datasource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? pathColor;
@property (nonatomic) BOOL paused;
@property (readonly) Class superclass;


-(id)initWithMTKView:(id)arg0 ;
-(void)drawInMTKView:(id)arg0 ;
-(void)mtkView:(id)arg0 drawableSizeWillChange:(struct CGSize )arg1 ;
-(void)updateVertexBufferForPaths:(id)arg0 ;


@end


#endif