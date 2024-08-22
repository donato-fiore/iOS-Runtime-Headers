// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WACLIENT_H
#define WACLIENT_H

@class NSMutableDictionary, NSXPCConnection, NSString, NSMutableArray, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WAClient : NSObject {
    NSMutableDictionary *_interestedMessageIdentifiers;
    NSMutableDictionary *_configuredMessageIdentifiers;
}


@property (nonatomic) unsigned char blockDaemonConnection; // ivar: _blockDaemonConnection
@property (retain, nonatomic) NSMutableDictionary *configChangeDelegatesPerGroupType; // ivar: _configChangeDelegatesPerGroupType
@property (retain, nonatomic) NSMutableDictionary *configuredMessageIdentifiers;
@property (retain, nonatomic) NSXPCConnection *conn; // ivar: _conn
@property (nonatomic) CGFloat connectionRecoveryStartTime; // ivar: _connectionRecoveryStartTime
@property (nonatomic) unsigned char daemonConnectionValid; // ivar: _daemonConnectionValid
@property (retain, nonatomic) NSString *identifierForThisClient; // ivar: _identifierForThisClient
@property (retain, nonatomic) NSMutableDictionary *interestedMessageIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // ivar: _propertyQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queryableQueue; // ivar: _queryableQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *queuedInvocations; // ivar: _queuedInvocations
@property (copy, nonatomic) id *recoveryTickBlock; // ivar: _recoveryTickBlock
@property (retain, nonatomic) NSMutableSet *registeredGroupTypes; // ivar: _registeredGroupTypes
@property (retain, nonatomic) NSMutableDictionary *registeredQueryableHandlerBlocks; // ivar: _registeredQueryableHandlerBlocks
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *replyQueue; // ivar: _replyQueue
@property (retain, nonatomic) NSString *tokenForThisClient; // ivar: _tokenForThisClient


+(id)sharedClient;
+(id)sharedClientWithIdentifier:(id)arg0 ;
-(id)_getConnectionIssueHandlerBlock:(SEL)arg0 ;
-(id)_initPrivate;
-(id)init;
// -(void)_clearMessageStoreAndReply:(id)arg0 queuedInvocation:(unk)arg1  ;
-(void)_dequeueInvocation:(id)arg0 ;
-(void)_establishDaemonConnection;
// -(void)_getDeviceAnalyticsConfigurationAndReply:(id)arg0 queuedInvocation:(unk)arg1  ;
// -(void)_getDpsStatsandReply:(id)arg0 queuedInvocation:(unk)arg1  ;
// -(void)_getMessageForUUID:(id)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
// -(void)_getMessagesModelForGroupType:(NSInteger)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
// -(void)_getNewMessageForKey:(id)arg0 groupType:(NSInteger)arg1 withCopy:(id)arg2 andReply:(id)arg3 queuedInvocation:(unk)arg4  ;
// -(void)_ingestMessage:(id)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
// -(void)_killDaemonAndReply:(id)arg0 queuedInvocation:(unk)arg1  ;
// -(void)_lqmCrashTracerNotifyForInterfaceWithName:(id)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
// -(void)_lqmCrashTracerReceiveBlock:(id)arg0 forInterfaceWithName:(id)arg1 andReply:(id)arg2 queuedInvocation:(unk)arg3  ;
// -(void)_registerForQueryableMessageWithIdentifierDict:(id)arg0 groupType:(NSInteger)arg1 withHandlerBlock:(id)arg2 andReply:(unk)arg3 queuedInvocation:(id)arg4  ;
// -(void)_registerMessageGroup:(NSInteger)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
-(void)_removeAllQueuedInvocations;
-(void)_replyAllWithTimeoutErrorAndRemove;
-(void)_reregister;
// -(void)_sendMemoryPressureRequestAndReply:(id)arg0 queuedInvocation:(unk)arg1  ;
-(void)_setConfigChangeDelegateForGroupType:(NSInteger)arg0 queuedInvocation:(id)arg1 ;
// -(void)_setDeviceAnalyticsConfiguration:(id)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
-(void)_startConnectionRecovery;
// -(void)_submitMessage:(id)arg0 groupType:(NSInteger)arg1 andReply:(id)arg2 queuedInvocation:(unk)arg3  ;
// -(void)_submitWiFiAnalyticsMessage:(id)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
// -(void)_trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
// -(void)_trigger11axPerfStudyAndReply:(id)arg0 queuedInvocation:(unk)arg1  ;
// -(void)_triggerDatapathDiagnosticsAndCollectUpdates:(NSInteger)arg0 waMessage:(id)arg1 andReply:(id)arg2 queuedInvocation:(unk)arg3  ;
// -(void)_triggerDeviceAnalyticsStoreMigrationAndReply:(id)arg0 queuedInvocation:(unk)arg1  ;
// -(void)_triggerQueryForNWActivity:(NSInteger)arg0 andReply:(id)arg1 queuedInvocation:(unk)arg2  ;
-(void)_wakeUpNotificationForThisClientReceived:(id)arg0 ;
-(void)clearMessageStoreAndReply:(id)arg0 ;
-(void)configuredMessagesDidChange:(id)arg0 andInterestedMessageIDs:(id)arg1 forGroupType:(NSInteger)arg2 ;
-(void)convertWiFiStatsIntoPercentile:(id)arg0 analysisGroup:(NSInteger)arg1 groupTarget:(id)arg2 andReply:(id)arg3 ;
// -(void)convertWiFiStatsIntoPercentile:(id)arg0 analysisGroup:(NSInteger)arg1 groupTarget:(id)arg2 andReply:(id)arg3 queuedInvocation:(unk)arg4  ;
-(void)dealloc;
-(void)fakeDaemonConnectionDead:(unsigned char)arg0 ;
-(void)getDeviceAnalyticsConfigurationAndReply:(id)arg0 ;
-(void)getDpsStatsandReply:(id)arg0 ;
-(void)getMessageForUUID:(id)arg0 andReply:(id)arg1 ;
-(void)getMessagesModelForGroupType:(NSInteger)arg0 andReply:(id)arg1 ;
-(void)getNewMessageForKey:(id)arg0 groupType:(NSInteger)arg1 andReply:(id)arg2 ;
-(void)getNewMessageForKey:(id)arg0 groupType:(NSInteger)arg1 withCopy:(id)arg2 andReply:(id)arg3 ;
-(void)ingestMessage:(id)arg0 andReply:(id)arg1 ;
-(void)killDaemonAndReply:(id)arg0 ;
-(void)lqmCrashTracerNotifyForInterfaceWithName:(id)arg0 andReply:(id)arg1 ;
-(void)lqmCrashTracerReceiveBlock:(id)arg0 forInterfaceWithName:(id)arg1 andReply:(id)arg2 ;
// -(void)registerForQueryableMessageWithIdentifierDict:(id)arg0 groupType:(NSInteger)arg1 withHandlerBlock:(id)arg2 andReply:(unk)arg3  ;
-(void)registerMessageGroup:(NSInteger)arg0 andReply:(id)arg1 ;
-(void)sendMemoryPressureRequestAndReply:(id)arg0 ;
-(void)setConfigChangedDelegate:(id)arg0 forGroupType:(NSInteger)arg1 andReply:(id)arg2 ;
-(void)setDeviceAnalyticsConfiguration:(id)arg0 andReply:(id)arg1 ;
-(void)submitMessage:(id)arg0 groupType:(NSInteger)arg1 andReply:(id)arg2 ;
-(void)submitQueriedMetricWithIdentifierDict:(id)arg0 groupType:(NSInteger)arg1 andReply:(id)arg2 ;
-(void)submitWiFiAnalyticsMessage:(id)arg0 andReply:(id)arg1 ;
-(void)summarizeDeviceAnalyticsForNetwork:(id)arg0 maxAgeInDays:(NSUInteger)arg1 andReply:(id)arg2 ;
// -(void)summarizeDeviceAnalyticsForNetwork:(id)arg0 maxAgeInDays:(NSUInteger)arg1 andReply:(id)arg2 queuedInvocation:(unk)arg3  ;
-(void)trapCrashMiniTracerDumpReadyForInterfaceWithName:(id)arg0 andReply:(id)arg1 ;
-(void)trigger11axPerfStudyAndReply:(id)arg0 ;
-(void)triggerDatapathDiagnosticsAndCollectUpdates:(NSInteger)arg0 waMessage:(id)arg1 andReply:(id)arg2 ;
-(void)triggerDeviceAnalyticsStoreMigrationAndReply:(id)arg0 ;
-(void)triggerQueryForNWActivity:(NSInteger)arg0 andReply:(id)arg1 ;


@end


#endif