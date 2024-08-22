// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PVRENDERREQUESTJOBDELEGATE_H
#define PVRENDERREQUESTJOBDELEGATE_H

@class NSString;
@protocol PVRenderJobDelegate;

#import <Foundation/Foundation.h>

#import "PVRenderer.h"
#import "PVRenderRequest.h"
#import "PVVideoCompositingContext.h"

@interface PVRenderRequestJobDelegate : NSObject <PVRenderJobDelegate>

 {
    PVRenderer *m_pvRenderer;
    PVRenderRequest *m_request;
    HGRef<PVRenderManager> m_renderManager;
    id *m_completionHandler;
    *void m_destinationBitmaps;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int jobTypeTag;
@property (readonly) Class superclass;
@property (readonly) PVVideoCompositingContext *videoCompositingContext;


-(NSUInteger)packedFamilyCode;
// -(id)initWithRequest:(id)arg0 completionHandler:(id)arg1 pvRenderer:(unk)arg2  ;
-(int)graphBuildThreadPriority;
-(int)jobPriority;
-(int)renderContextPriority;
-(int)renderThreadPriority;
-(unsigned int)outputCVPixelBufferFormat;
-(void)buildGraph:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 ;
-(void)dealloc;
-(void)finishCancelledJob;
-(void)finishCompletedJob;
-(void)renderJobFinished:(struct HGRef<PVRenderJob> )arg0 ;
-(void)setupDestinationBuffers:(*void)arg0 renderContext:(*void)arg1 frameStats:(*void)arg2 ;


@end


#endif