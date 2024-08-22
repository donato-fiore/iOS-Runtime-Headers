// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDMESSAGEHISTORYIDSTRANSACTIONLOGSYNCTASK_H
#define IMDMESSAGEHISTORYIDSTRANSACTIONLOGSYNCTASK_H

@class NSString, NSMutableDictionary;
@protocol IMDMessageHistorySyncTask;

#import <Foundation/Foundation.h>

#import "IMDAccountController.h"

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject <IMDMessageHistorySyncTask>

 {
    NSString *_className;
}


@property (retain, nonatomic) IMDAccountController *accountController; // ivar: _accountController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *syncTaskCompletionBlock; // ivar: _syncTaskCompletionBlock
@property (retain, nonatomic) NSMutableDictionary *taskGroupedByServiceName; // ivar: _taskGroupedByServiceName


-(NSUInteger)syncTaskType;
-(id)_createKnownRecordBlock:(SEL)arg0 ;
-(id)_createProcessBatchBlockWithServiceSession:(SEL)arg0 ;
-(id)_createSyncCompletionBlockForServiceSession:(SEL)arg0 ;
-(id)initWithAccountController:(id)arg0 ;
-(void)_setupAndBeginSync;
-(void)dealloc;
-(void)startSyncTask:(id)arg0 ;


@end


#endif