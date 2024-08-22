// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDTRANSACTIONARCHIVEREPLAYLOGEVENT_H
#define HMDTRANSACTIONARCHIVEREPLAYLOGEVENT_H



#import "HMDLaunchTimingEvent.h"

@interface HMDTransactionArchiveReplayLogEvent : HMDLaunchTimingEvent

@property (readonly) NSInteger numUncommittedAndPushedRecords; // ivar: _numUncommittedAndPushedRecords
@property (readonly) NSInteger numUncommittedRecords; // ivar: _numUncommittedRecords


-(id)initWithNumUncommittedRecords:(NSInteger)arg0 numUncommittedAndPushedRecords:(NSInteger)arg1 ;


@end


#endif