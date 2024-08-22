// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GCDEVICEPHYSICALINPUT_H
#define _GCDEVICEPHYSICALINPUT_H

@class GCDevicePhysicalInputBase, NSMutableArray;
@protocol OS_dispatch_queue;


#import "_GCDevicePhysicalInputTransaction.h"

@interface _GCDevicePhysicalInput : GCDevicePhysicalInputBase {
    NSObject<OS_dispatch_queue> *_clientQueue;
    id *_elementValueDidChangeHandler;
    id *_inputStateAvailableHandler;
    NSMutableArray *_allTransactions;
    _GCDevicePhysicalInputTransaction *_currentTransaction;
    _GCDevicePhysicalInputTransaction *_pendingTransaction;
    NSMutableArray *_bufferedTransactions;
    NSUInteger _bufferedTransactionsQueueDepth;
}




-(BOOL)isSnapshot;
-(CGFloat)lastEventTimestamp;
-(id)initWithFacade:(id)arg0 elements:(id)arg1 ;
-(id)popTransaction;
-(void)dealloc;
-(void)setDevice:(id)arg0 ;


@end


#endif