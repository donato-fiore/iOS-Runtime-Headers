// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVTASKCOALESCENCEMANAGER_H
#define CKVTASKCOALESCENCEMANAGER_H

@class NSString, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "CKVConcurrentDictionary.h"

@interface CKVTaskCoalescenceManager : NSObject {
    NSString *_managerName;
    uint8_t _eventIdCounter;
    NSMutableDictionary *_taskRegistry;
    CKVConcurrentDictionary *_eventRegistry;
    unsigned int _transactionCounter;
    CGFloat _coalescenceInterval;
    CGFloat _coalescenceDelay;
    NSObject<OS_dispatch_queue> *_taskRegistryQueue;
    NSObject<OS_dispatch_queue> *_taskExecutionQueue;
}


@property (readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(BOOL)_isNowInCoalescingWindowWithLastTask:(id)arg0 ;
-(BOOL)_shouldCoalesceWithLastTask:(id)arg0 ;
-(id)init;
-(id)initWithManagerName:(id)arg0 coalescenceInterval:(CGFloat)arg1 coalescenceDelay:(CGFloat)arg2 dispatchQoS:(unsigned int)arg3 ;
-(void)_beginTransaction;
-(void)_endTransaction;
// -(void)submitTaskWithId:(unsigned short)arg0 taskBlock:(id)arg1 completion:(unk)arg2  ;


@end


#endif