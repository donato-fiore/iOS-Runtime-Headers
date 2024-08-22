// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PTRENDERPIPELINE_H
#define PTRENDERPIPELINE_H

@class NSString;
@protocol RenderingIntegration, MTLDeviceSPI, MTLLibrary, MTLPipelineLibrary, MTLHeap, OS_os_log;

#import <Foundation/Foundation.h>

#import "PTRenderDebugLayer.h"
#import "PTUtil.h"
#import "PTDisparityUpscale.h"

@interface PTRenderPipeline : NSObject {
    NSInteger _debugRendering;
    PTRenderDebugLayer *_debugLayer;
    id<RenderingIntegration> *_renderIntegration;
    id<MTLDeviceSPI> *_device;
    id<MTLLibrary> *_library;
    id<MTLPipelineLibrary> *_pipelineLibrary;
    id<MTLHeap> *_resourceHeap;
    BOOL _inputOutputUseRGBA;
    PTUtil *_util;
    CGSize _colorInputSize;
    CGSize _colorOutputSizeFinal;
    CGSize _colorOutputSizeCropped;
    PTDisparityUpscale *_disparityUpscale;
    NSString *_description;
    NSObject<OS_os_log> *_log;
    NSUInteger _sid;
}


@property (readonly) NSUInteger activeVersion; // ivar: _activeVersion


+(BOOL)isMetalDeviceSupported:(id)arg0 ;
+(Class)classForVersion:(NSUInteger)arg0 ;
+(NSUInteger)latestVersion;
+(int)prewarmForMediaserverd;
+(int)prewarmWithDescriptor:(id)arg0 ;
-(NSUInteger)minimumResourceHeapSize;
-(id)createRenderStateWithQuality:(int)arg0 ;
-(id)debugLayer;
-(id)description;
-(id)initWithDescriptor:(id)arg0 ;
-(int)encodeRenderTo:(id)arg0 withRenderRequest:(id)arg1 ;
-(void)adjustScissorRect:(id)arg0 ;
-(void)prewarm;
-(void)setInternalResourceHeap;
-(void)setResourceHeap:(id)arg0 ;
-(void)updateDescription;


@end


#endif