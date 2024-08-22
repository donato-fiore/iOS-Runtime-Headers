// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDMESSAGEHISTORYFIRSTUNLOCKREPLAYSYNCTASK_H
#define IMDMESSAGEHISTORYFIRSTUNLOCKREPLAYSYNCTASK_H



#import "IMDMessageHistoryIDSTransactionLogSyncTask.h"
#import "IMDReplayController.h"

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {
    IMDReplayController *_replayController;
}




-(NSUInteger)syncTaskType;
-(id)initWithReplayController:(id)arg0 accountController:(id)arg1 ;
-(void)_setupAndBeginSync;
-(void)dealloc;


@end


#endif