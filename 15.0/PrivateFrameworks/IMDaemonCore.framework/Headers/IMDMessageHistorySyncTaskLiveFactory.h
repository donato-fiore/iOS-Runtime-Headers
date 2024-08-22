// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDMESSAGEHISTORYSYNCTASKLIVEFACTORY_H
#define IMDMESSAGEHISTORYSYNCTASKLIVEFACTORY_H

@class NSString;
@protocol IMDMessageHistorySyncTaskFactory;

#import <Foundation/Foundation.h>

#import "IMDCKSyncController.h"
#import "IMDAccountController.h"
#import "IMDReplayController.h"

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory>

 {
    IMDCKSyncController *_ckSyncController;
    IMDAccountController *_accountController;
    IMDReplayController *_replayController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithCKSyncController:(id)arg0 accountController:(id)arg1 replayController:(id)arg2 ;
-(id)_newFirstUnlockReplaySyncTask;
-(id)_newIDSTransactionLogSyncTask;
-(id)_newKChatSyncTask;
-(id)init;
-(id)newSyncTaskForType:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif