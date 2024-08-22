// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDATABASECOALESCEDWRITEPOOL_H
#define HDDATABASECOALESCEDWRITEPOOL_H

@class NSString, _HKDelayedOperation, NSLock, NSMutableArray;
@protocol OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDDatabaseCoalescedWritePool : NSObject {
    NSString *_name;
    NSObject<OS_os_log> *_loggingCategory;
    NSObject<OS_dispatch_queue> *_writeQueue;
    _HKDelayedOperation *_pendingWriteOperation;
    NSLock *_pendingWriteLock;
    NSMutableArray *_pendingWriteQueue;
}


@property (readonly, weak, nonatomic) HDProfile *profile; // ivar: _profile


-(id)init;
-(id)initWithProfile:(id)arg0 name:(id)arg1 loggingCategory:(id)arg2 ;
-(void)flushPendingWriteQueueWithCompletion:(id)arg0 ;
// -(void)performWriteWithMaximumLatency:(CGFloat)arg0 block:(id)arg1 completion:(unk)arg2  ;


@end


#endif