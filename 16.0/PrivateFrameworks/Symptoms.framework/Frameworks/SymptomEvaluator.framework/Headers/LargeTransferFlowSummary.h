// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LARGETRANSFERFLOWSUMMARY_H
#define LARGETRANSFERFLOWSUMMARY_H


#import <Foundation/Foundation.h>

#import "FlowLedger.h"

@interface LargeTransferFlowSummary : NSObject

@property (nonatomic) CGFloat lastSeenAt; // ivar: _lastSeenAt
@property (retain, nonatomic) FlowLedger *ledger; // ivar: _ledger
@property (nonatomic) unsigned int state; // ivar: _state
@property (nonatomic) CGFloat stateEntryTimestamp; // ivar: _stateEntryTimestamp




@end


#endif