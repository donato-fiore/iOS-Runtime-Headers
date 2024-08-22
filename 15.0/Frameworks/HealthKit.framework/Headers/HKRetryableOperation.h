// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKRETRYABLEOPERATION_H
#define HKRETRYABLEOPERATION_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HKRetryableOperation : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _retryCount;
    NSMutableArray *_pendingOperations;
}


@property (readonly, copy, nonatomic) NSMutableArray *pendingOperations;


-(id)initWithQueue:(id)arg0 retryCount:(int)arg1 ;
-(void)_queue_performPendingOperation:(id)arg0 ;
// -(void)_queue_performRetryableOperation:(id)arg0 completion:(unk)arg1  ;


@end


#endif