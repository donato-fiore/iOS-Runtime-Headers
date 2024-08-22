// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSDAEMONCONTROLLER_H
#define IDSDAEMONCONTROLLER_H

@class IMLocalObject, NSProtocolChecker, NSMutableDictionary, NSSet, NSMutableSet, NSString, IMRemoteObject<IDSDaemonProtocol>;
@protocol IDSDaemonProtocol, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "IDSDaemonControllerForwarder.h"
#import "IDSDaemonListener.h"

@interface IDSDaemonController : NSObject <IDSDaemonProtocol>

 {
    IDSDaemonControllerForwarder *_forwarder;
    IMLocalObject *_localObject;
    NSProtocolChecker *_protocol;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_group> *_daemonConnectedGroup;
    NSUInteger _connectionID;
    NSMutableDictionary *_listenerServices;
    NSSet *_services;
    NSSet *_cachedServices;
    NSMutableDictionary *_listenerCommands;
    NSSet *_commands;
    NSSet *_cachedCommands;
    NSMutableDictionary *_listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _acquiringDaemonConnection;
    BOOL _hasBeenSuspended;
    BOOL _fatalErrorOccured;
    NSMutableSet *_notificationServices;
}


@property (setter=_setAutoReconnect:) BOOL _autoReconnect; // ivar: _autoReconnect
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // ivar: _remoteMessageQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectingQueue; // ivar: _connectingQueue
@property (nonatomic) int curXPCMessagePriority; // ivar: _curXPCMessagePriority
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) IDSDaemonListener *listener; // ivar: _daemonListener
@property (readonly, nonatomic) NSString *listenerID; // ivar: _listenerID
@property (retain, nonatomic) IMRemoteObject<IDSDaemonProtocol> *remoteObject; // ivar: _remoteObject
@property (readonly) Class superclass;


+(BOOL)_applicationWillTerminate;
+(id)sharedInstance;
+(void)_blockUntilSendQueueIsEmpty;
+(void)_setApplicationWillTerminate;
-(BOOL)_makeConnectionWithLaunch:(BOOL)arg0 completionBlock:(id)arg1 ;
-(BOOL)_setCapabilities:(unsigned int)arg0 ;
-(BOOL)_setCommands:(id)arg0 ;
-(BOOL)_setServices:(id)arg0 ;
-(BOOL)addListenerID:(id)arg0 services:(id)arg1 ;
-(BOOL)addListenerID:(id)arg0 services:(id)arg1 commands:(id)arg2 ;
-(BOOL)connectToDaemon;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 services:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3 ;
-(BOOL)consumeQueryContext:(id)arg0 ;
-(BOOL)hasListenerForID:(id)arg0 ;
-(BOOL)isConnected;
-(BOOL)localObjectExists;
-(BOOL)setCapabilities:(unsigned int)arg0 forListenerID:(id)arg1 shouldLog:(BOOL)arg2 ;
-(BOOL)setCommands:(id)arg0 forListenerID:(id)arg1 ;
-(BOOL)setServices:(id)arg0 forListenerID:(id)arg1 ;
-(id)commands;
-(id)commandsForListenerID:(id)arg0 ;
-(id)forwarderWithCompletion:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)init;
-(id)localObject;
-(id)services;
-(id)servicesForListenerID:(id)arg0 ;
-(unsigned int)capabilities;
-(unsigned int)capabilitiesForListenerID:(id)arg0 ;
-(void)_agentDidLaunchNotification:(id)arg0 ;
-(void)_blockUntilSendQueueIsEmpty;
-(void)_connectToDaemonWithLaunch:(BOOL)arg0 services:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3 ;
-(void)_disconnectFromDaemonWithForce:(BOOL)arg0 ;
-(void)_handleDaemonException:(id)arg0 ;
-(void)_localObjectCleanup;
-(void)_noteDisconnected;
-(void)_noteSetupComplete;
-(void)_performBlock:(id)arg0 ;
// -(void)_performBlock:(id)arg0 wait:(unk)arg1  ;
-(void)_setServices:(id)arg0 commands:(id)arg1 capabilities:(unsigned int)arg2 ;
-(void)addedDelegateForService:(id)arg0 withCompletion:(id)arg1 ;
-(void)blockUntilConnected;
-(void)dealloc;
-(void)disconnectFromDaemon;
-(void)localObjectDiedNotification:(id)arg0 ;
-(void)remoteObjectDiedNotification:(id)arg0 ;
-(void)removeListenerID:(id)arg0 ;
-(void)sendQueryWithReply:(BOOL)arg0 query:(id)arg1 ;
-(void)sendXPCObject:(id)arg0 objectContext:(id)arg1 ;
-(void)setQueryContext:(id)arg0 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationWillEnterForeground;
-(void)unsetQueryContext:(id)arg0 ;


@end


#endif