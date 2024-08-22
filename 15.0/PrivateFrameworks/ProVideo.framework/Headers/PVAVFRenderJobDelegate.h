// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVAVFRENDERJOBDELEGATE_H
#define PVAVFRENDERJOBDELEGATE_H

@class AVAsynchronousVideoCompositionRequest, NSString;
@protocol PVRenderJobDelegate;

#import <Foundation/Foundation.h>

#import "PVVideoCompositing.h"
#import "PVVideoCompositionInstruction.h"
#import "PVTaskToken.h"
#import "PVVideoCompositingContext.h"

@interface PVAVFRenderJobDelegate : NSObject <PVRenderJobDelegate>

 {
    PVVideoCompositing *m_compositor;
    AVAsynchronousVideoCompositionRequest *m_request;
    PVVideoCompositionInstruction *m_instruction;
    ? m_compositionTime;
    BOOL m_thumbnailCompositing;
    *__CVBuffer m_destinationPixelBuffer;
    PerfTimer m_timer;
    *void m_hgCVGLTextureFactory;
    HGRef<PVRenderManager> m_renderManager;
    HGRef<PVInstructionGraphContext> m_instructionGraphContext;
}


@property unsigned int childCode; // ivar: m_childCode
@property (readonly) PVVideoCompositionInstruction *compositionInstruction;
@property (readonly) AVAsynchronousVideoCompositionRequest *compositionRequest;
@property (readonly) ? compositionTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int jobTypeTag;
@property unsigned int minimumRequestCompletionTimeMS; // ivar: m_minimumRequestCompletionTimeMS
@property unsigned int parentCode; // ivar: m_parentCode
@property (readonly) Class superclass;
@property (retain) PVTaskToken *token; // ivar: _token
@property (readonly) PVVideoCompositingContext *videoCompositingContext;


-(NSUInteger)packedFamilyCode;
-(id)initWithCompositor:(id)arg0 request:(id)arg1 compositionTime:(struct ? )arg2 thumbnailCompositing:(BOOL)arg3 ;
-(int)jobPriority;
-(int)renderContextPriority;
-(int)renderThreadPriority;
-(void)_buildGraph:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 outputNodes:(*void)arg3 ;
-(void)_setupGLTextureFactory:(*void)arg0 ;
-(void)_setupInputs:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 ;
-(void)buildGraph:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 ;
-(void)finishCancelledJob;
-(void)finishCompletedJob;
-(void)renderJobFinished:(struct HGRef<PVRenderJob> )arg0 ;
-(void)setupDestinationBuffers:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 ;


@end


#endif