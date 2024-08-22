// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKUIMETALQUADVIEW_H
#define CLKUIMETALQUADVIEW_H

@class MTLRenderPassDescriptor, CAMetalLayer, NSArray, UIImageView;
@protocol MTLCommandQueue, MTLTexture, MTLDepthStencilState, MTLComputePipelineState;


#import "CLKUIQuadView.h"

@interface CLKUIMetalQuadView : CLKUIQuadView {
    id<MTLCommandQueue> *_commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    BOOL _drawableSizeNeedsUpdate;
    CLKUIQuadSize _quadSize;
    CAMetalLayer *_metalLayer;
    NSArray *_quads;
    id<MTLTexture> *_depthTexture;
    id<MTLDepthStencilState> *_depthStencilState;
    BOOL _isDepthBufferRequired;
    id<MTLComputePipelineState> *_aplPipelineState;
    id<MTLComputePipelineState> *_colorConversionPipelineState;
    BOOL _presentWithTransaction;
    NSUInteger _msaaCount;
    id<MTLTexture> *_msaaTexture;
    id<MTLTexture> *_textureForPrewarming;
    UIImageView *_snapshotView;
    BOOL _useNativeScale;
}


@property (readonly, nonatomic) NSUInteger colorPixelFormat; // ivar: _colorPixelFormat
@property (readonly, nonatomic) BOOL isSnapshotting; // ivar: _isSnapshotting


+(id)allocateDepthTextureWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 sampleCount:(NSUInteger)arg2 ;
+(id)allocateMsaaTextureWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 sampleCount:(NSUInteger)arg3 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg0 withCompletion:(id)arg1 ;
-(BOOL)prewarmWithCompletion:(id)arg0 ;
-(NSUInteger)_msaaCount;
-(float)computeAPL;
-(float)computeAPLAndSnapshot:(*id)arg0 ;
-(id)_newRenderPassDescriptor;
-(id)_snapshotTextureInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 withAdditionalPasses:(id)arg3 ;
-(id)_textureToImage:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 options:(NSUInteger)arg1 colorSpace:(NSInteger)arg2 ;
-(id)metalLayer;
-(id)snapshotInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(id)snapshotTextureInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(struct CGSize )drawableSize;
-(void)_handleQuadArrayChange:(id)arg0 ;
-(void)_renderQuads:(id)arg0 toScreenWithCommandBuffer:(id)arg1 passDescriptor:(id)arg2 ;
-(void)_updateDrawableSizeIfNecessary;
-(void)dealloc;
-(void)discardContents;
-(void)layoutSubviews;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setSingleBufferMode:(BOOL)arg0 ;
-(void)snapshotAndFreeze;


@end


#endif