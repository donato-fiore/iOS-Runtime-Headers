// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDAEMONCONTROLLER_H
#define IMDAEMONCONTROLLER_H

@class IMRemoteObject<IMRemoteDaemonProtocol>, NSMutableDictionary, IMLocalObject, NSMutableArray, NSProtocolChecker, NSRecursiveLock, NSLock, NSString, NSArray;
@protocol OS_dispatch_queue, IMRemoteDaemonProtocol;

#import <Foundation/Foundation.h>

#import "IMDaemonListener.h"
#import "IMDaemonQueryController.h"

@interface IMDaemonController : NSObject {
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    os_unfair_recursive_lock_s _remoteDaemonLock;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_daemonConnectionQueue;
    NSRecursiveLock *_connectionLock;
    *__CFRunLoopSource _runLoopSource;
    NSLock *_blockingLock;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _inBlockingConnect;
    BOOL _acquiringDaemonConnection;
    BOOL _hasBeenSuspended;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
}


@property (setter=_setAutoReconnect:) BOOL _autoReconnect; // ivar: _autoReconnect
@property (nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume; // ivar: _blocksConnectionAtResume
@property (setter=__setCapabilities:) unsigned int _capabilities; // ivar: _gMyFZListenerCapabilities
@property (retain, nonatomic, setter=_setListenerID:) NSString *_listenerID; // ivar: _listenerID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // ivar: _remoteMessageQueue
@property (retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // ivar: _servicesToAllow
@property (retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // ivar: _servicesToDeny
@property (readonly, nonatomic) unsigned int capabilities;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) IMDaemonListener *listener; // ivar: _daemonListener
@property (copy, nonatomic) id *prewarmingBlock; // ivar: _prewarmingBlock
@property (readonly, nonatomic) IMDaemonQueryController *queryController; // ivar: _queryController
@property (readonly, nonatomic) NSObject<IMRemoteDaemonProtocol> *replyingRemoteDaemon; // ivar: _replyingRemoteDaemon
@property (retain, nonatomic) NSMutableDictionary *requestQOSClassCompletionBlocks; // ivar: _requestQOSClassCompletionBlocks
@property (readonly, nonatomic, getter=isRequestingConnection) BOOL requestingConnection; // ivar: _requestingConnection
@property (readonly, nonatomic) NSObject<IMRemoteDaemonProtocol> *synchronousReplyingRemoteDaemon; // ivar: _synchronousReplyingRemoteDaemon


+(BOOL)_applicationWillTerminate;
+(id)sharedController;
+(id)sharedInstance;
+(void)_blockUntilSendQueueIsEmpty;
+(void)_setApplicationWillTerminate;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg0 ;
-(BOOL)__isRemoteObjectValid;
-(BOOL)_acquiringDaemonConnection;
-(BOOL)_makeConnectionWithLaunch:(BOOL)arg0 completionBlock:(id)arg1 ;
-(BOOL)addListenerID:(id)arg0 capabilities:(unsigned int)arg1 ;
-(BOOL)connectToDaemon;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 blockUntilConnected:(BOOL)arg2 ;
-(BOOL)consumeQueryContext:(id)arg0 ;
-(BOOL)hasListenerForID:(id)arg0 ;
-(BOOL)localObjectExists;
-(BOOL)remoteObjectExists;
-(BOOL)removeListenerID:(id)arg0 ;
-(CGFloat)_connectionTimeout;
-(id)_remoteObject;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(unsigned int)capabilitiesForListenerID:(id)arg0 ;
-(void)_addressBookChanged:(id)arg0 ;
-(void)_agentDidLaunchNotification:(id)arg0 ;
-(void)_blockUntilSendQueueIsEmpty;
-(void)_connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 ;
-(void)_disconnectFromDaemonWithForce:(BOOL)arg0 ;
-(void)_handleDaemonException:(id)arg0 ;
-(void)_handleReceivedQOSClassWhileServicingRequestsNotification:(id)arg0 ;
-(void)_localObjectCleanup;
-(void)_noteSetupComplete;
-(void)_remoteObjectCleanup;
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
-(void)requestQOSClassOfAgentWhileServicingRequests:(id)arg0 ;
-(void)sendABInformationToDaemon;
-(void)sendQueryWithReply:(BOOL)arg0 query:(id)arg1 ;
-(void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg0 ;
-(void)setDaemonTerminatesWithoutListeners:(BOOL)arg0 ;
-(void)setMyPicture:(id)arg0 smallPictureData:(id)arg1 ;
-(void)setMyStatus:(NSUInteger)arg0 message:(id)arg1 ;
-(void)setMyStatus:(NSUInteger)arg0 message:(id)arg1 forAccount:(id)arg2 ;
-(void)setQueryContext:(id)arg0 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationWillEnterForeground;
-(void)unsetQueryContext:(id)arg0 ;


@end


#endif