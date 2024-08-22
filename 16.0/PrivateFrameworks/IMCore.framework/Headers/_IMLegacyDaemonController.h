// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IMLEGACYDAEMONCONTROLLER_H
#define _IMLEGACYDAEMONCONTROLLER_H

@class NSArray, NSLock, NSRecursiveLock, NSString, NSMutableDictionary, IMLocalObject, NSProtocolChecker, IMRemoteObject<IMDaemonProtocol>, NSMutableArray;
@protocol IMDaemonControlling, IMDaemonControlling_Private, OS_dispatch_queue, IMDaemonProtocol;

#import <Foundation/Foundation.h>

#import "IMDaemonListener.h"
#import "IMDaemonQueryController.h"

@interface _IMLegacyDaemonController : NSObject <IMDaemonControlling, IMDaemonControlling_Private>



@property (setter=_setAutoReconnect:) BOOL _autoReconnect; // ivar: __autoReconnect
@property (nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume; // ivar: __blocksConnectionAtResume
@property (setter=__setCapabilities:) unsigned int _capabilities; // ivar: __capabilities
@property (retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // ivar: __servicesToAllow
@property (retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // ivar: __servicesToDeny
@property (nonatomic) BOOL acquiringDaemonConnection; // ivar: _acquiringDaemonConnection
@property (retain, nonatomic) NSLock *blockingLock; // ivar: _blockingLock
@property (nonatomic) unsigned int cachedCapabilities; // ivar: _cachedCapabilities
@property (readonly, nonatomic) unsigned int capabilities;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (retain, nonatomic) NSRecursiveLock *connectionLock; // ivar: _connectionLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *daemonConnectionQueue; // ivar: _daemonConnectionQueue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int gMyFZListenerCapabilities; // ivar: _gMyFZListenerCapabilities
@property (nonatomic) BOOL hasBeenSuspended; // ivar: _hasBeenSuspended
@property (nonatomic) BOOL hasCheckedForDaemon; // ivar: _hasCheckedForDaemon
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inBlockingConnect; // ivar: _inBlockingConnect
@property (readonly, nonatomic) BOOL isConnecting;
@property (nonatomic) unsigned int lastUpdatedCapabilities; // ivar: _lastUpdatedCapabilities
@property (retain, nonatomic) IMDaemonListener *listener; // ivar: _daemonListener
@property (retain, nonatomic, setter=_setListenerID:) NSString *listenerID; // ivar: _listenerID
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *listenerLockQueue; // ivar: _listenerLockQueue
@property (retain, nonatomic) NSMutableDictionary *listenerMap; // ivar: _listenerMap
@property (retain, nonatomic) IMLocalObject *localObject; // ivar: _localObject
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localObjectLockQueue; // ivar: _localObjectLockQueue
@property (nonatomic) BOOL preventReconnect; // ivar: _preventReconnect
@property (retain, nonatomic) NSProtocolChecker *protocol; // ivar: _protocol
@property (readonly, nonatomic) IMDaemonQueryController *queryController; // ivar: _queryController
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *remoteDaemon;
@property (nonatomic) os_unfair_recursive_lock_s remoteDaemonLock; // ivar: _remoteDaemonLock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *remoteMessageQueue; // ivar: _remoteMessageQueue
@property (retain, nonatomic) IMRemoteObject<IMDaemonProtocol> *remoteObject; // ivar: _remoteObject
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *replyingRemoteDaemon; // ivar: _replyingRemoteDaemon
@property (readonly, nonatomic, getter=isRequestingConnection) BOOL requestingConnection; // ivar: _requestingConnection
@property (nonatomic) *__CFRunLoopSource runLoopSource; // ivar: _runLoopSource
@property (retain, nonatomic) NSMutableArray *services; // ivar: _services
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *synchronousRemoteDaemon;
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *synchronousReplyingRemoteDaemon; // ivar: _synchronousReplyingRemoteDaemon


+(BOOL)_applicationWillTerminate;
+(void)_blockUntilSendQueueIsEmpty;
+(void)_setApplicationWillTerminate;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg0 ;
-(BOOL)__isRemoteObjectValid;
-(BOOL)_makeConnectionWithLaunch:(BOOL)arg0 completionBlock:(id)arg1 ;
-(BOOL)addListenerID:(id)arg0 capabilities:(unsigned int)arg1 ;
-(BOOL)connectToDaemon;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 blockUntilConnected:(BOOL)arg2 ;
-(BOOL)consumeQueryContext:(id)arg0 ;
-(BOOL)hasListenerForID:(id)arg0 ;
-(BOOL)removeListenerID:(id)arg0 ;
-(CGFloat)_connectionTimeout;
-(NSUInteger)processCapabilities;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(unsigned int)capabilitiesForListenerID:(id)arg0 ;
-(void)_agentDidLaunchNotification:(id)arg0 ;
-(void)_blockUntilSendQueueIsEmpty;
-(void)_connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 ;
-(void)_disconnectFromDaemonWithForce:(BOOL)arg0 ;
-(void)_handleDaemonException:(id)arg0 ;
-(void)_noteSetupComplete;
-(void)blockUntilConnected;
-(void)dealloc;
-(void)disconnectFromDaemon;
-(void)disconnectFromDaemonWithForce:(BOOL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)killDaemon;
-(void)listener:(id)arg0 setValue:(id)arg1 ofPersistentProperty:(id)arg2 ;
-(void)listener:(id)arg0 setValue:(id)arg1 ofProperty:(id)arg2 ;
-(void)localObjectDiedNotification:(id)arg0 ;
-(void)remoteObjectDiedNotification:(id)arg0 ;
-(void)sendQueryWithReply:(BOOL)arg0 query:(id)arg1 ;
-(void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg0 ;
-(void)setDaemonTerminatesWithoutListeners:(BOOL)arg0 ;
-(void)setQueryContext:(id)arg0 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationWillEnterForeground;
-(void)unsetQueryContext:(id)arg0 ;


@end


#endif