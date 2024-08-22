// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASYNCHRONOUSVIDEOCOMPOSITIONREQUEST_H
#define AVASYNCHRONOUSVIDEOCOMPOSITIONREQUEST_H

@class NSArray;
@protocol NSCopying, AVVideoCompositionInstruction;

#import <Foundation/Foundation.h>

#import "AVAsynchronousVideoCompositionRequestInternal.h"
#import "AVVideoCompositionRenderContext.h"

@interface AVAsynchronousVideoCompositionRequest : NSObject <NSCopying>

 {
    AVAsynchronousVideoCompositionRequestInternal *_internal;
}


@property (readonly, nonatomic) ? compositionTime;
@property (readonly, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (readonly, nonatomic) NSArray *sourceSampleDataTrackIDs;
@property (readonly, nonatomic) NSArray *sourceTrackIDs;
@property (readonly, nonatomic) NSObject<AVVideoCompositionInstruction> *videoCompositionInstruction;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initUsingSession:(id)arg0 withRenderContext:(id)arg1 compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg2 atTime:(struct ? )arg3 usingSources:(id)arg4 instruction:(id)arg5 withSampleBuffers:(id)arg6 ;
-(id)sourceTimedMetadataByTrackID:(int)arg0 ;
-(struct OpaqueFigVideoCompositorFrame *)compositionFrame;
-(struct __CVBuffer *)sourceFrameByTrackID:(int)arg0 ;
-(struct opaqueCMSampleBuffer *)sourceSampleBufferByTrackID:(int)arg0 ;
-(void)_willDeallocOrFinalize;
-(void)dealloc;
-(void)finishCancelledRequest;
-(void)finishWithComposedVideoFrame:(struct __CVBuffer *)arg0 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif