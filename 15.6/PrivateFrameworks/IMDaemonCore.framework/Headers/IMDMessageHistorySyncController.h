// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDMESSAGEHISTORYSYNCCONTROLLER_H
#define IMDMESSAGEHISTORYSYNCCONTROLLER_H

@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

#import <Foundation/Foundation.h>


@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) BOOL ckChatSyncControllerNeedsSync; // ivar: _ckChatSyncControllerNeedsSync
@property (retain, nonatomic) NSObject<IMDMessageHistorySyncTask> *currentlyExecutingSyncTask; // ivar: _currentlyExecutingSyncTask
@property (nonatomic) BOOL idsTransportLogNeedsSync; // ivar: _idsTransportLogNeedsSync
@property (nonatomic) BOOL replayControllerNeedsSync; // ivar: _replayControllerNeedsSync
@property (retain, nonatomic) NSObject<IMDMessageHistorySyncTaskFactory> *syncTaskFactory; // ivar: _syncTaskFactory


-(id)initWithMessageHistorySyncTaskFactory:(id)arg0 ;
-(void)IDSTransportLogWantsToSync;
-(void)_evaluateStateAndActIfNeeded;
-(void)_scheduleNextEvaluation;
-(void)ckChatSyncControllerWantsToSync;
-(void)dealloc;
-(void)replayControllerWantsToSync;


@end


#endif