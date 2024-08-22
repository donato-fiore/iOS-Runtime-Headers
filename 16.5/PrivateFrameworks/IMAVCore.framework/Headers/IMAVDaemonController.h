// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAVDAEMONCONTROLLER_H
#define IMAVDAEMONCONTROLLER_H

@class IMRemoteObject<IMAVDaemonProtocol>, IMLocalObject, NSString, NSMutableArray, NSLock;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "IMAVDaemonListener.h"

@interface IMAVDaemonController : NSObject {
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    *__CFRunLoopSource _runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}


@property (readonly, nonatomic) IMAVDaemonListener *listener;


+(id)sharedInstance;
-(BOOL)__isLocalObjectValidOnQueue:(id)arg0 ;
-(BOOL)__isRemoteObjectValidOnQueue:(id)arg0 ;
-(BOOL)_makeConnectionWithCompletionBlock:(id)arg0 ;
-(BOOL)addListenerID:(id)arg0 ;
-(BOOL)hasListenerForID:(id)arg0 ;
-(BOOL)isConnected;
-(BOOL)isConnecting;
-(BOOL)localObjectExists;
-(BOOL)remoteObjectExists;
-(BOOL)removeListenerID:(id)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_cleanUpConnection;
-(void)_connectToDaemon;
-(void)_disconnectFromDaemon;
-(void)_localObjectCleanup;
-(void)_localObjectDiedNotification:(id)arg0 ;
-(void)_noteSetupComplete;
-(void)_remoteObjectCleanup;
-(void)_remoteObjectDiedNotification:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)localObjectDiedNotification:(id)arg0 ;
-(void)remoteObjectDiedNotification:(id)arg0 ;


@end


#endif