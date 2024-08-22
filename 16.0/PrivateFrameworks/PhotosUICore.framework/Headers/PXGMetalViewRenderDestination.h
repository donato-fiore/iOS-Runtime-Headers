// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGMETALVIEWRENDERDESTINATION_H
#define PXGMETALVIEWRENDERDESTINATION_H

@class MTLRenderPassDescriptor, NSString, MTKView;
@protocol MTKViewDelegate, PXGPresentableMetalRenderDestination, PXGMetalRenderDestinationDelegate, MTLDevice, OS_dispatch_queue, MTLTexture;

#import <Foundation/Foundation.h>


@interface PXGMetalViewRenderDestination : NSObject <MTKViewDelegate, PXGPresentableMetalRenderDestination>

 {
    NSUInteger _lastSizeChangeTime;
}


@property (readonly, nonatomic) BOOL canSetColorSpace;
@property (readonly, nonatomic) NSUInteger colorPixelFormat;
@property (nonatomic) *CGColorSpace colorspace;
@property (readonly, nonatomic) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXGMetalRenderDestinationDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger depthStencilPixelFormat;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger destinationColorSpaceName;
@property (readonly, nonatomic) NSObject<MTLDevice> *device;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (readonly, nonatomic) MTKView *metalView; // ivar: _metalView
@property (readonly, nonatomic) CGRect renderBoundsInPoints;
@property (readonly, nonatomic) CGSize renderSize;
@property (readonly, nonatomic) NSObject<MTLTexture> *renderTexture;
@property (readonly, nonatomic) NSInteger sampleCount;
@property (readonly, nonatomic) CGFloat scale;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *test_renderSnapshotHandler; // ivar: _test_renderSnapshotHandler


-(id)init;
-(void)_setupMetalIfNeeded;
-(void)drawInMTKView:(id)arg0 ;
-(void)mtkView:(id)arg0 drawableSizeWillChange:(struct CGSize )arg1 ;
-(void)present;
-(void)releaseCachedResources;
-(void)renderImmediately;
-(void)setNeedsRender;
-(void)test_configureForRenderSnapshot;


@end


#endif