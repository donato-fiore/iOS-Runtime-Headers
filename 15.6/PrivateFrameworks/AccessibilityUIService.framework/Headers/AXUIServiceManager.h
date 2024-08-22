// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUISERVICEMANAGER_H
#define AXUISERVICEMANAGER_H

@class BSProcessDeathWatcher, NSString, NSMutableDictionary, AXAccessQueue, AXUIMessageSender, NSMutableArray;
@protocol AXUIMessageSenderDelegate;

#import <Foundation/Foundation.h>

#import "AXUIDisplayManager.h"

@interface AXUIServiceManager : NSObject <AXUIMessageSenderDelegate>

 {
    BSProcessDeathWatcher *_springBoardReaper;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXUIDisplayManager *displayManager; // ivar: _displayManager
@property (retain, nonatomic) NSMutableDictionary *entitlementsCheckers; // ivar: _entitlementsCheckers
@property (retain, nonatomic) AXAccessQueue *entitlementsCheckersAccessQueue; // ivar: _entitlementsCheckersAccessQueue
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger lastUsedServiceIdentifier; // ivar: _lastUsedServiceIdentifier
@property (retain, nonatomic) AXUIMessageSender *messageSender; // ivar: _messageSender
@property (retain, nonatomic) NSMutableArray *pausedConnections; // ivar: _pausedConnections
@property (retain, nonatomic) AXAccessQueue *resumingConnectionsQueue; // ivar: _resumingConnectionsQueue
@property (retain, nonatomic) NSMutableArray *serviceContexts; // ivar: _serviceContexts
@property (retain, nonatomic) AXAccessQueue *servicesAccessQueue; // ivar: _servicesAccessQueue
@property (nonatomic) BOOL shouldAllowServicesToProcessMessages; // ivar: _shouldAllowServicesToProcessMessages
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableDictionary *transactions; // ivar: _transactions


+(id)sharedServiceManager;
+(void)_releaseSharedServiceManager;
-(BOOL)_registerClientWithIdentifier:(id)arg0 connection:(id)arg1 serviceBundleName:(id)arg2 initiatingMessageIdentifier:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)_serviceWithClass:(Class)arg0 canProcessMessageWithIdentifier:(NSUInteger)arg1 fromClientWithConnection:(id)arg2 possibleRequiredEntitlements:(*id)arg3 ;
-(BOOL)_start;
-(id)_clientMessengerWithIdentifier:(id)arg0 ;
-(id)_sendSynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 toClientWithMessenger:(id)arg2 error:(*id)arg3 ;
-(id)_serviceContextForClientWithIdentifier:(id)arg0 ;
-(id)_serviceContextForService:(id)arg0 ;
-(id)_servicesForUniqueIdentifiers:(id)arg0 ;
-(id)_uniqueIdentifierForService:(id)arg0 ;
-(id)init;
-(void)_applicationDidFinishLaunching;
-(void)_applicationDidReceiveMemoryWarning:(id)arg0 ;
-(void)_handleConnection:(id)arg0 ;
-(void)_registerForSystemAppDeath;
-(void)_sendAsynchronousMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 toClientWithMessenger:(id)arg2 targetAccessQueue:(id)arg3 completionRequiresWritingBlock:(BOOL)arg4 completion:(id)arg5 ;
-(void)_unregisterAllClientsWithConnection:(id)arg0 ;
-(void)beginTransactionWithIdentifier:(id)arg0 forService:(id)arg1 ;
-(void)dealloc;
-(void)endTransactionWithIdentifier:(id)arg0 forService:(id)arg1 ;
-(void)messageSender:(id)arg0 accessXPCConnectionForMessageWithContext:(*void)arg1 usingBlock:(id)arg2 ;
-(void)messageSender:(id)arg0 willSendXPCMessage:(id)arg1 context:(*void)arg2 ;


@end


#endif