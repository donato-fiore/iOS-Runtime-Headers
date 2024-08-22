// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWCOREIMAGEFILTERRENDERER_H
#define BWCOREIMAGEFILTERRENDERER_H

@class NSString, CIContext;
@protocol BWFilterRenderer, OS_dispatch_queue, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface BWCoreImageFilterRenderer : NSObject <BWFilterRenderer>

 {
    int _portraitRenderQuality;
    float _inputRenderQuality;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<MTLCommandQueue> *_metalCommandQueue;
}


@property (readonly, nonatomic) BOOL adjustsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CIContext *renderingQueueContext; // ivar: _renderingQueueContext
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAnimation;
@property (readonly, nonatomic) short type;
@property (readonly, nonatomic) BOOL usingDepth; // ivar: _usingDepth


+(id)context:(BOOL)arg0 err:(*int)arg1 ;
+(void)_prewarmCoreImagePortraitFilterV1;
+(void)initialize;
+(void)prewarmPortraitFilterVersion:(unsigned int)arg0 semanticStyleFilters:(BOOL)arg1 ;
-(id)_visionKitFaceObservationToCoreImageDictionary:(id)arg0 orientation:(id)arg1 ;
-(id)coreImageArrayRepresentationForRegion:(id)arg0 ;
-(id)init;
-(id)initForRenderingWithDepth:(BOOL)arg0 context:(id)arg1 portraitRenderQuality:(int)arg2 metalCommandQueue:(id)arg3 ;
-(int)prepareForRenderingWithParameters:(id)arg0 inputVideoFormat:(id)arg1 inputDepthFormat:(id)arg2 ;
-(void)_renderUsingParameters:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 originalPixelBuffer:(struct __CVBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 prewarming:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)adjustMetadataOfSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)renderUsingParameters:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 inputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 originalPixelBuffer:(struct __CVBuffer *)arg3 processedPixelBuffer:(struct __CVBuffer *)arg4 completionHandler:(id)arg5 ;


@end


#endif