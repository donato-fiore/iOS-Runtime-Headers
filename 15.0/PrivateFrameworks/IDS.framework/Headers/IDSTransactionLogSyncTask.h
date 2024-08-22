// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSTRANSACTIONLOGSYNCTASK_H
#define IDSTRANSACTIONLOGSYNCTASK_H



#import "IDSTransactionLogTask.h"

@interface IDSTransactionLogSyncTask : IDSTransactionLogTask

@property (copy, nonatomic) id *batchProcessingBlock; // ivar: _batchProcessingBlock
@property (copy, nonatomic) id *knownRecordIDsFromList; // ivar: _knownRecordIDsFromList
@property (nonatomic) BOOL shouldContinueFromLastSyncPoint; // ivar: _shouldContinueFromLastSyncPoint




@end


#endif