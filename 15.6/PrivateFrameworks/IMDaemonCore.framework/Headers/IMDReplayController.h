// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDREPLAYCONTROLLER_H
#define IMDREPLAYCONTROLLER_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "IMDReplayStorageController.h"
#import "IMDReplayStorageIterationContext.h"

@interface IMDReplayController : NSObject {
    IMDReplayStorageController *_suspendedStorageController;
}


@property (copy, nonatomic) id *automationCompletionBlock; // ivar: _automationCompletionBlock
@property (retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext; // ivar: _heldDeletionContext
@property (readonly, nonatomic) BOOL isRecordingReplayDB; // ivar: _isRecordingReplayDB
@property (retain, nonatomic) IMDReplayStorageController *storageController; // ivar: _storageController
@property (retain, nonatomic) NSDictionary *syncTaskByServiceName; // ivar: _syncTaskByServiceName


+(NSInteger)batchSize;
+(id)sharedInstance;
-(BOOL)storeMessage:(id)arg0 type:(unsigned char)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithStorageController:(id)arg0 ;
-(void)_fetchNexBatchOfMessagesAndReplay;
-(void)_processBatch:(id)arg0 ;
-(void)dealloc;
-(void)deleteReplayDBIfNotUnderFirstUnlock;
-(void)endRecordingReplayDatabase;
-(void)overrideStorageControllerWithDatabaseFromPath:(id)arg0 ;
-(void)replayMessages;
-(void)replayMessagesWithCompletion:(id)arg0 ;
-(void)restoreDefaultStoreControllerInstance;
-(void)scheduleSyncTaskForServices:(id)arg0 ;
-(void)startRecordingReplayDatabase;


@end


#endif