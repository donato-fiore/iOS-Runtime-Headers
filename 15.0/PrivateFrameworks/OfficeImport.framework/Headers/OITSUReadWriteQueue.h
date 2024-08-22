// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OITSUREADWRITEQUEUE_H
#define OITSUREADWRITEQUEUE_H

@protocol OS_dispatch_semaphore, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface OITSUReadWriteQueue : NSObject {
    NSObject<OS_dispatch_semaphore> *mCanEnqueueReaders;
    NSObject<OS_dispatch_queue> *mGlobalQueue;
    NSObject<OS_dispatch_group> *mInFlightReaders;
    NSObject<OS_dispatch_group> *mInFlightWriters;
}




-(id)initWithIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)performAsyncWrite:(id)arg0 ;
-(void)performSyncRead:(id)arg0 ;
-(void)performSyncWrite:(id)arg0 ;
-(void)waitOnInFlightWriters;


@end


#endif