// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCUSTOMVIDEOCOMPOSITORSESSION_H
#define AVCUSTOMVIDEOCOMPOSITORSESSION_H

@class NSDictionary, NSError;
@protocol OS_dispatch_queue, AVVideoCompositing;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"
#import "AVVideoComposition.h"
#import "AVVideoCompositionRenderContext.h"

@interface AVCustomVideoCompositorSession : NSObject {
    *OpaqueFigVideoCompositor _figCustomCompositor;
    BOOL _hasRegisteredFigCustomCompositorCallbacks;
    NSDictionary *_clientRequiredPixelBufferAttributes;
    AVWeakReference *_weakSelf;
    *void _callbackContextToken;
    NSObject<OS_dispatch_queue> *_videoCompositionQ;
    AVVideoComposition *_videoComposition;
    BOOL _videoCompositionDidChange;
    NSObject<OS_dispatch_queue> *_clientCustomCompositorQ;
    id<AVVideoCompositing> *_clientCustomCompositor;
    NSObject<OS_dispatch_queue> *_clientErrorQ;
    NSError *_clientError;
    NSObject<OS_dispatch_queue> *_renderContextQ;
    AVVideoCompositionRenderContext *_renderContext;
    NSObject<OS_dispatch_queue> *_finishedRequestQ;
}


@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;


+(BOOL)_colorPropertiesAreSetInVideoComposition:(id)arg0 ;
+(id)sessionWithVideoComposition:(id)arg0 recyclingSession:(id)arg1 ;
-(BOOL)_validateRequiredPixelBufferAttributesForRenderContext:(id)arg0 andReturnException:(*id)arg1 ;
-(BOOL)_validateSourcePixelBufferAttributes:(id)arg0 andReturnException:(*id)arg1 ;
-(BOOL)commitCustomVideoCompositorPropertiesAndReturnError:(*id)arg0 ;
-(id)customVideoCompositor;
-(id)getAndClearClientError;
-(id)initWithVideoComposition:(id)arg0 ;
-(int)_compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg0 atTime:(struct ? )arg1 requiresRenderUsingSources:(id)arg2 requiresSampleBuffersUsingSources:(id)arg3 withInstruction:(*void)arg4 ;
-(int)_customCompositorShouldAnticipateRenderingFromTime:(struct ? )arg0 toTime:(struct ? )arg1 andThenFromTime:(struct ? )arg2 toTime:(struct ? )arg3 ;
-(int)_customCompositorShouldCancelPendingFrames;
-(int)_customCompositorShouldPrerollForRenderingFromTime:(struct ? )arg0 toTime:(struct ? )arg1 andThenFromTime:(struct ? )arg2 toTime:(struct ? )arg3 requestID:(NSInteger)arg4 ;
-(int)_setupFigCallbacks;
-(struct OpaqueFigVideoCompositor *)_copyFigVideoCompositor;
-(void)_cleanupFigCallbacks;
-(void)_customCompositorFigPropertyDidChange;
-(void)_willDeallocOrFinalize;
-(void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg0 didFinishWithComposedPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)compositionFrame:(struct OpaqueFigVideoCompositorFrame *)arg0 didFinishWithError:(id)arg1 ;
-(void)compositionFrameDidCancel:(struct OpaqueFigVideoCompositorFrame *)arg0 ;
-(void)dealloc;
-(void)detachVideoComposition;
-(void)setVideoComposition:(id)arg0 ;


@end


#endif