// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVEFFECTPREVIEWRENDERJOBDELEGATE_H
#define PVEFFECTPREVIEWRENDERJOBDELEGATE_H

@class NSString;
@protocol PVRenderJobDelegate;

#import <Foundation/Foundation.h>

#import "PVEffect.h"
#import "PVRendererBase.h"
#import "PVVideoCompositingContext.h"

@interface PVEffectPreviewRenderJobDelegate : NSObject <PVRenderJobDelegate>

 {
    PVEffect *m_effect;
    ? m_time;
    *CGImage m_input;
    HGRef<HGNode> m_inputHGNode;
    CGSize m_outputSize;
    id *m_completionHandler;
    PVRendererBase *m_pvRenderer;
    HGRef<HGCVBitmap> m_outputCVBitmap;
    PVImageProperties m_imageCreationProperties;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) Class superclass;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;


+(void)cleanupCaches;
-(NSUInteger)packedFamilyCode;
// -(id)initWEffect:(id)arg0 atTime:(struct ? )arg1 inputImage:(struct CGImage *)arg2 outputSize:(struct CGSize )arg3 completionHandler:(id)arg4 pvRenderer:(unk)arg5  ;
-(int)jobPriority;
-(int)renderThreadPriority;
-(struct CGImage *)_makeResultImage;
-(void)_setupInputHGNode:(*void)arg0 frameStats:(*void)arg1 ;
-(void)buildGraph:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 ;
-(void)dealloc;
-(void)finishCancelledJob;
-(void)finishCompletedJob;
-(void)renderJobFinished:(struct HGRef<PVRenderJob> )arg0 ;
-(void)setupDestinationBuffers:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 ;


@end


#endif