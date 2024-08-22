// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHIMAGEIODECODER_H
#define PHIMAGEIODECODER_H

@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "PHImageDecoder.h"

@interface PHImageIODecoder : PHImageDecoder {
    NSObject<OS_dispatch_queue> *_pendingRequestQueue;
    NSObject<OS_dispatch_queue> *_activeRequestQueue;
    NSObject<OS_dispatch_semaphore> *_concurrentRequestSemaphore;
}




+(NSInteger)maxConcurrentDecodeCount;
+(id)sharedDecoder;
+(void)setMaxConcurrentDecodeCount:(NSInteger)arg0 ;
-(id)decodeImageFromData:(id)arg0 orFileURL:(id)arg1 options:(id)arg2 completion:(id)arg3 ;
-(id)decodeImageFromData:(id)arg0 orFileURL:(id)arg1 options:(id)arg2 existingRequestHandle:(id)arg3 completion:(id)arg4 ;
-(id)init;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg0 ;


@end


#endif