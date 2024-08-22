// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APSCONNECTION_H
#define APSCONNECTION_H

@class CUTWeakReference, NSString, NSData, NSMutableDictionary, NSMutableArray, NSArray;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_xpc_object, APSConnectionDelegate;

#import <Foundation/Foundation.h>


@interface APSConnection : NSObject {
    CUTWeakReference *_delegateReference;
    NSString *_environmentName;
    NSData *_publicToken;
    NSUInteger _messageSize;
    NSUInteger _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    BOOL _usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    NSUInteger _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
    NSString *_processName;
    CGFloat _reconnectDelay;
    BOOL _isReconnectScheduled;
    BOOL _isDisconnected;
    BOOL _isDeallocing;
}


@property (nonatomic) NSObject<APSConnectionDelegate> *delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (retain, nonatomic, setter=_setEnabledTopics:) NSArray *enabledTopics; // ivar: _enabledTopics
@property (retain, nonatomic, setter=_setIgnoredTopics:) NSArray *ignoredTopics; // ivar: _ignoredTopics
@property (readonly, nonatomic) BOOL isShutdown; // ivar: _isShutdown
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // ivar: _ivarQueue
@property (nonatomic) NSUInteger largeMessageSize;
@property (nonatomic) NSUInteger messageSize;
@property (retain, nonatomic, setter=_setNonWakingTopics:) NSArray *nonWakingTopics; // ivar: _nonWakingTopics
@property (retain, nonatomic, setter=_setOpportunisticTopics:) NSArray *opportunisticTopics; // ivar: _opportunisticTopics
@property (readonly, retain, nonatomic) NSData *publicToken;
@property (nonatomic) BOOL usesAppLaunchStats;


+(BOOL)isValidEnvironment:(id)arg0 ;
+(CGFloat)keepAliveIntervalForEnvironmentName:(id)arg0 ;
+(CGFloat)serverTime;
+(NSUInteger)serverTimeInNanoSeconds;
+(id)_createXPCConnectionWithQueueName:(char *)arg0 ;
+(id)connectionsDebuggingState;
+(id)geoRegion;
+(struct __SecIdentity *)copyIdentity;
// +(void)_blockingXPCCallWithArgumentBlock:(id)arg0 resultHandler:(unk)arg1  ;
+(void)_flushIdentityCache;
+(void)_safelyCancelAndReleaseConnection:(id)arg0 ;
+(void)_setTokenState;
+(void)invalidateDeviceIdentity;
+(void)notifySafeToSendFilter;
+(void)requestCourierConnection;
-(BOOL)hasIdentity;
-(BOOL)isConnected;
-(id)_initWithEnvironmentName:(id)arg0 namedDelegatePort:(id)arg1 enablePushDuringSleep:(BOOL)arg2 queue:(id)arg3 ;
-(id)_listForIdentifierOnIvarQueue:(NSUInteger)arg0 ;
-(id)_topicListNameForLogging:(NSUInteger)arg0 ;
-(id)initWithEnvironmentName:(id)arg0 ;
-(id)initWithEnvironmentName:(id)arg0 namedDelegatePort:(id)arg1 ;
-(id)initWithEnvironmentName:(id)arg0 namedDelegatePort:(id)arg1 queue:(id)arg2 ;
-(id)initWithEnvironmentName:(id)arg0 queue:(id)arg1 ;
-(id)registeredChannelsForTopic:(id)arg0 error:(*id)arg1 ;
-(void)_addEnableCriticalReliabilityToXPCMessage:(id)arg0 ;
-(void)_addEnableStatusNotificationsToXPCMessage:(id)arg0 ;
-(void)_addUsesAppLaunchStatsToXPCMessage:(id)arg0 ;
-(void)_asyncOnDelegateQueueWithBlock:(id)arg0 ;
// -(void)_asyncOnDelegateQueueWithBlock:(id)arg0 requiresDelegate:(unk)arg1  ;
-(void)_cancelConnection;
-(void)_cancelConnectionOnIvarQueue;
-(void)_connectIfNecessary;
-(void)_connectIfNecessaryOnIvarQueue;
-(void)_deliverConnectionStatusChange:(BOOL)arg0 ;
-(void)_deliverConnectionStatusFromDealloc:(BOOL)arg0 ;
-(void)_deliverDidReconnectOnIvarQueue;
-(void)_deliverFailedChannelSubscriptions:(id)arg0 onTopic:(id)arg1 ;
-(void)_deliverMessage:(id)arg0 ;
-(void)_deliverOutgoingMessageResultWithID:(NSUInteger)arg0 error:(id)arg1 sendRTT:(NSUInteger)arg2 ;
-(void)_deliverOutgoingMessageResultWithID:(NSUInteger)arg0 error:(id)arg1 sendRTT:(NSUInteger)arg2 ackTimestamp:(NSUInteger)arg3 ;
-(void)_deliverPublicToken:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_deliverPublicTokenOnIvarQueue:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_deliverToken:(id)arg0 forTopic:(id)arg1 identifier:(id)arg2 ;
-(void)_disconnect;
-(void)_disconnectFromDealloc;
-(void)_disconnectOnIvarQueue;
-(void)_dispatch_async_to_ivarQueue:(id)arg0 ;
// -(void)_dispatch_async_to_ivarQueue:(id)arg0 shutdownBlock:(unk)arg1  ;
// -(void)_dispatch_sync_to_ivarQueue:(id)arg0 shutdownBlock:(unk)arg1  ;
-(void)_handleEvent:(id)arg0 withHandler:(id)arg1 ;
// -(void)_handleEvent:(id)arg0 withHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(void)_noteDisconnectedFromDaemonOnIvarQueue;
-(void)_reconnectIfNecessaryOnIvarQueueAfterDelay;
-(void)_sendOutgoingMessage:(id)arg0 fake:(BOOL)arg1 ;
-(void)_setEnableCriticalReliability:(BOOL)arg0 sendToDaemon:(BOOL)arg1 ;
-(void)_setEnableStatusNotifications:(BOOL)arg0 sendToDaemon:(BOOL)arg1 ;
-(void)_shutdownFromDealloc;
-(void)_shutdownOnIvarQueue;
-(void)cancelOutgoingMessage:(id)arg0 ;
-(void)confirmReceiptForMessage:(id)arg0 ;
-(void)dealloc;
-(void)getRegisteredChannelsForTopic:(id)arg0 completion:(id)arg1 ;
-(void)getRegisteredChannelsForTopic:(id)arg0 withCompletion:(id)arg1 ;
-(void)invalidateTokenForTopic:(id)arg0 identifier:(id)arg1 ;
-(void)moveTopic:(id)arg0 fromList:(NSUInteger)arg1 toList:(NSUInteger)arg2 ;
-(void)removeFromRunLoop;
-(void)requestKeepAlive;
-(void)requestTokenForTopic:(id)arg0 identifier:(id)arg1 ;
-(void)scheduleInRunLoop:(id)arg0 ;
-(void)sendFakeMessage:(id)arg0 ;
-(void)sendOutgoingMessage:(id)arg0 ;
-(void)setEnableCriticalReliability:(BOOL)arg0 ;
-(void)setEnableStatusNotifications:(BOOL)arg0 ;
-(void)setEnabledTopics:(id)arg0 ;
-(void)setEnabledTopics:(id)arg0 ignoredTopics:(id)arg1 ;
-(void)setEnabledTopics:(id)arg0 ignoredTopics:(id)arg1 opportunisticTopics:(id)arg2 ;
-(void)setEnabledTopics:(id)arg0 ignoredTopics:(id)arg1 opportunisticTopics:(id)arg2 nonWakingTopics:(id)arg3 ;
-(void)setEnabledTopics:(id)arg0 ignoredTopics:(id)arg1 opportunisticTopics:(id)arg2 nonWakingTopics:(id)arg3 completion:(id)arg4 ;
-(void)setIgnoredTopics:(id)arg0 ;
-(void)setNonWakingTopics:(id)arg0 ;
-(void)setOpportunisticTopics:(id)arg0 ;
-(void)shutdown;
-(void)subscribeToChannel:(id)arg0 forTopic:(id)arg1 ;
-(void)subscribeToChannels:(id)arg0 forTopic:(id)arg1 ;
-(void)unsubscribeFromChannel:(id)arg0 forTopic:(id)arg1 ;
-(void)unsubscribeFromChannels:(id)arg0 forTopic:(id)arg1 ;


@end


#endif