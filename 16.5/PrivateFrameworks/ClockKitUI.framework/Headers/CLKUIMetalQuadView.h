// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKUIMETALQUADVIEW_H
#define CLKUIMETALQUADVIEW_H

@class MTLRenderPassDescriptor, CAMetalLayer, NSArray, UIImageView;
@protocol MTLCommandQueue, MTLTexture, MTLDepthStencilState, MTLComputePipelineState;


#import "CLKUIQuadView.h"

@interface CLKUIMetalQuadView : CLKUIQuadView {
    id<MTLCommandQueue> *_commandQueue;
    MTLRenderPassDescriptor *_renderPassDescriptor;
    CLKUIQuadSize _quadSize;
    CAMetalLayer *_metalLayer;
    NSArray *_quads;
    id<MTLTexture> *_depthTexture;
    id<MTLDepthStencilState> *_depthStencilState;
    BOOL _isDepthBufferRequired;
    BOOL _isPresentWithTransaction;
    BOOL _isUseNativeScale;
    BOOL _isRenderWithCommandBuffer;
    BOOL _isDrawableSizeNeedsUpdate;
    BOOL _isDrawableRead;
    BOOL _isDrawableWrite;
    BOOL _isDoubleBuffer;
    id<MTLComputePipelineState> *_aplPipelineState;
    id<MTLComputePipelineState> *_colorConversionPipelineState;
    id<MTLComputePipelineState> *_dimmingPipelineState;
    NSUInteger _msaaCount;
    id<MTLTexture> *_msaaTexture;
    id<MTLTexture> *_textureForPrewarming;
    UIImageView *_snapshotView;
}


@property (nonatomic) float aplFilterAmount; // ivar: _aplFilterAmount
@property (nonatomic) ? clearColor;
@property (readonly, nonatomic) NSUInteger colorPixelFormat; // ivar: _colorPixelFormat
@property (readonly, nonatomic) BOOL isSnapshotting; // ivar: _isSnapshotting
@property (nonatomic) float maxAPL; // ivar: _maxAPL


+(id)allocateDepthTextureWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 sampleCount:(NSUInteger)arg2 ;
+(id)allocateMsaaTextureWithWidth:(NSUInteger)arg0 height:(NSUInteger)arg1 pixelFormat:(NSUInteger)arg2 sampleCount:(NSUInteger)arg3 ;
-(BOOL)_displayAndCheckForDrawable:(BOOL)arg0 withCompletion:(id)arg1 ;
-(BOOL)_shouldApplyAPLFilter;
-(BOOL)prewarmWithCompletion:(id)arg0 ;
-(NSUInteger)_msaaCount;
-(float)computeAPL;
-(float)computeAPLAndSnapshot:(*id)arg0 ;
-(id)_getDimmingPipelineState;
-(id)_newRenderPassDescriptor;
-(id)_snapshotTextureInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 withAdditionalPasses:(id)arg3 ;
-(id)_textureToImage:(id)arg0 scale:(CGFloat)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 identifier:(id)arg1 options:(NSUInteger)arg2 colorSpace:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 identifier:(id)arg1 options:(NSUInteger)arg2 colorSpace:(NSInteger)arg3 asyncRenderQueue:(id)arg4 ;
-(id)metalLayer;
-(id)snapshotInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(id)snapshotTextureInRect:(struct CGRect )arg0 scale:(CGFloat)arg1 time:(CGFloat)arg2 ;
-(struct CGSize )drawableSize;
-(void)_handleQuadArrayChange:(id)arg0 ;
-(void)_renderQuads:(id)arg0 toScreenWithCommandBuffer:(id)arg1 passDescriptor:(id)arg2 ;
-(void)_updateDrawableSizeIfNecessary;
-(void)_updateFramebufferOnly;
-(void)dealloc;
-(void)discardContents;
-(void)layoutSubviews;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setSingleBufferMode:(BOOL)arg0 ;
-(void)snapshotAndFreeze;


@end


#endif