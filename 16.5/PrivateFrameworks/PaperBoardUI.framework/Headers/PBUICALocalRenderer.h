// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBUICALOCALRENDERER_H
#define PBUICALOCALRENDERER_H

@class CARenderer, CIContext, NSString;
@protocol PBUIRenderer, MTLCommandQueue, MTLDevice, OS_os_log;

#import <Foundation/Foundation.h>

#import "PBUIViewportLayer.h"

@interface PBUICALocalRenderer : NSObject <PBUIRenderer>

 {
    CARenderer *_renderer;
    PBUIViewportLayer *_viewportLayer;
    *CGColorSpace _colorSpace;
    CIContext *_ciContext;
    PBUIRenderState _currentRenderState;
    os_unfair_lock_s _encodingLock;
}


@property (readonly, nonatomic) *CGColorSpace colorSpace;
@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<MTLDevice> *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<OS_os_log> *logger; // ivar: _logger
@property (readonly) Class superclass;


-(BOOL)archiveRenderingOfRequest:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)usesCoreImageForState:(struct PBUIRenderState )arg0 ;
-(NSUInteger)pixelFormatForBSIOSurfaceOptions:(NSUInteger)arg0 ;
-(id)CIContext;
-(id)init;
-(id)initWithColorSpace:(struct CGColorSpace *)arg0 ;
-(id)initWithDevice:(id)arg0 colorSpace:(struct CGColorSpace *)arg1 ;
-(id)initWithDevice:(id)arg0 commmandQueue:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 ;
-(id)newCommandBufferWithCompletion:(id)arg0 ;
-(id)newSurfaceWithSize:(struct CGSize )arg0 colorSpace:(struct CGColorSpace *)arg1 outOptions:(*NSUInteger)arg2 ;
-(id)newTextureWithSize:(struct CGSize )arg0 colorSpace:(struct CGColorSpace *)arg1 ;
-(id)nextFrameHandlerWithCompletion:(id)arg0 ;
-(id)renderCIImage:(id)arg0 toSurface:(id)arg1 completionHandler:(id)arg2 ;
// -(id)renderFrameToTexture:(id)arg0 configureWithTransaction:(id)arg1 completionHandler:(unk)arg2  ;
-(id)renderRequest:(id)arg0 error:(*id)arg1 ;
-(id)renderState:(struct PBUIRenderState )arg0 error:(*id)arg1 ;
-(id)rendererForDestination:(id)arg0 ;
-(void)configureWithTransaction:(id)arg0 ;
-(void)dealloc;
-(void)renderRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)renderState:(struct PBUIRenderState )arg0 completionHandler:(id)arg1 ;
-(void)resetState;
-(void)setRenderState:(struct PBUIRenderState )arg0 ;
-(void)updateStateWithTransaction:(struct PBUIRenderState )arg0 ;


@end


#endif