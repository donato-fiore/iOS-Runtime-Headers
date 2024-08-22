// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUVIDEOCOMPOSITOR_H
#define NUVIDEOCOMPOSITOR_H

@class NSMutableSet, NSString, NSDictionary;
@protocol AVVideoCompositing, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NUVideoCompositor : NSObject <AVVideoCompositing>

 {
    uint8_t _requestCounter;
    NSObject<OS_dispatch_queue> *_renderingQueue;
    NSMutableSet *_pendingRequests;
    os_unfair_lock_s _pendingRequestsLock;
    os_unfair_lock_s _renderingQueueInitializeLock;
}


@property (readonly, nonatomic) BOOL canConformColorOfSourceFrames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *requiredPixelBufferAttributesForRenderContext;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsHDRSourceFrames;
@property (readonly, nonatomic) BOOL supportsWideColorSourceFrames;


-(BOOL)testAndSetVideoCompositionRequestFinished:(id)arg0 ;
-(id)hdrPixelFormats:(NSInteger)arg0 ;
-(id)init;
-(id)standardPixelFormats:(NSInteger)arg0 ;
-(id)videoFramesFromRequest:(id)arg0 ;
-(id)videoMetadataSamplesFromRequest:(id)arg0 ;
-(void)cancelAllPendingVideoCompositionRequests;
-(void)failVideoCompositionRequest:(id)arg0 error:(id)arg1 ;
-(void)finishCompositionRequest:(id)arg0 withComposedVideoFrame:(struct __CVBuffer *)arg1 ;
-(void)fulfillVideoCompositionRequest:(id)arg0 ;
-(void)renderContextChanged:(id)arg0 ;
-(void)setColorSpaceOfDestinationBuffer:(struct __CVBuffer *)arg0 fromPrimarySourceBufferOfRequest:(id)arg1 ;
-(void)startVideoCompositionRequest:(id)arg0 ;


@end


#endif