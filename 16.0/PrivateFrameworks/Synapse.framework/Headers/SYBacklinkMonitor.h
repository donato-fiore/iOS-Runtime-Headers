// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYBACKLINKMONITOR_H
#define SYBACKLINKMONITOR_H

@class NSDate, NSString;
@protocol SYBacklinkMonitorOperationDelegate, OS_dispatch_queue, SYBacklinkMonitorDelegate, SYBacklinkMonitorTestingDelegate;

#import <Foundation/Foundation.h>

#import "SYBacklinkMonitorOperation.h"

@interface SYBacklinkMonitor : NSObject <SYBacklinkMonitorOperationDelegate>



@property (retain, nonatomic) SYBacklinkMonitorOperation *_activeOperation; // ivar: __activeOperation
@property (copy, nonatomic) id *_delayedChangeEvaluationBlock; // ivar: __delayedChangeEvaluationBlock
@property (retain, nonatomic) NSDate *_lastOperationStartTime; // ivar: __lastOperationStartTime
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_monitorQueue; // ivar: __monitorQueue
@property (nonatomic) BOOL _needsActivityUpdate; // ivar: __needsActivityUpdate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SYBacklinkMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<SYBacklinkMonitorTestingDelegate> *testingDelegate; // ivar: _testingDelegate
@property (nonatomic) CGFloat testingOperationCoalescingInterval; // ivar: _testingOperationCoalescingInterval


-(id)init;
-(void)_beginNewOperation;
-(void)_evaluatePendingRequests;
-(void)backlinkMonitorOperationDidFinish:(id)arg0 ;
-(void)userActivityDidChange;


@end


#endif