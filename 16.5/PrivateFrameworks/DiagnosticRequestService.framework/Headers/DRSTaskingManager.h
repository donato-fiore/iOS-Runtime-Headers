// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSTASKINGMANAGER_H
#define DRSTASKINGMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DRSTaskingCloudKitHelper.h"
#import "DRSTaskingDecisionMaker.h"
#import "DRSTaskingMessageChannel.h"

@interface DRSTaskingManager : NSObject

@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper; // ivar: _cloudKitHelper
@property (readonly, nonatomic) id *configStateChangeBlock; // ivar: _configStateChangeBlock
@property (readonly, nonatomic) DRSTaskingDecisionMaker *decisionMaker; // ivar: _decisionMaker
@property (readonly, nonatomic) BOOL isTaskingEnabled;
@property (retain, nonatomic) DRSTaskingMessageChannel *taskingMessageChannel; // ivar: _taskingMessageChannel
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)checkConfigsForInvalidation:(*id)arg0 ;
-(BOOL)clearTaskingHistoryWithErrorOut:(*id)arg0 ;
-(BOOL)processTaskingSystemMessage:(id)arg0 cloudChannelConfig:(id)arg1 transaction:(id)arg2 shouldEmitCATelemetry:(BOOL)arg3 ;
-(BOOL)processTaskingSystemMessageJSONData:(id)arg0 transaction:(id)arg1 shouldEmitCATelemetry:(BOOL)arg2 ;
-(BOOL)processTaskingSystemMessageJSONDict:(id)arg0 cloudChannelConfig:(id)arg1 transaction:(id)arg2 shouldEmitCATelemetry:(BOOL)arg3 ;
-(BOOL)subscribeToChannelWithConfig:(id)arg0 errorOut:(*id)arg1 ;
-(BOOL)unsubscribeFromSubscribedChannelWithErrorOut:(*id)arg0 ;
-(BOOL)updatePersistedChannelConfig:(id)arg0 errorOut:(*id)arg1 ;
-(id)initWithDecisionMaker:(id)arg0 cloudKitHelper:(id)arg1 configStateChangeBlock:(id)arg2 ;
-(id)initWithDecisionMaker:(id)arg0 configStateChangeBlock:(id)arg1 ;
-(id)metadataForConfigUUID:(id)arg0 teamID:(id)arg1 errorOut:(*id)arg2 ;
-(id)persistedCloudChannelConfig;
-(void)_bestEffortLogMessageReceiptTelemetry:(id)arg0 transaction:(id)arg1 cloudChannelConfig:(id)arg2 ;
-(void)_emitTaskingSystemMessageTelemetry:(id)arg0 messageType:(id)arg1 dateBroadcast:(id)arg2 dateReceived:(id)arg3 transaction:(id)arg4 cloudChannelConfig:(id)arg5 ;
-(void)_emitTelemetryForLoggableMesssage:(id)arg0 transaction:(id)arg1 cloudChannelConfig:(id)arg2 ;
-(void)clientCompletedConfigUUID:(id)arg0 teamID:(id)arg1 ;
-(void)clientRejectsConfigUUID:(id)arg0 teamID:(id)arg1 ;
-(void)processCancelMessage:(id)arg0 cloudChannelConfig:(id)arg1 transaction:(id)arg2 shouldEmitCATelemetry:(BOOL)arg3 ;
-(void)processPingMessage:(id)arg0 cloudChannelConfig:(id)arg1 transaction:(id)arg2 shouldEmitCATelemetry:(BOOL)arg3 ;
-(void)processTaskingMessage:(id)arg0 cloudChannelConfig:(id)arg1 transaction:(id)arg2 shouldEmitCATelemetry:(BOOL)arg3 ;


@end


#endif