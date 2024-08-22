// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXHEARDCONTROLLER_H
#define AXHEARDCONTROLLER_H

@class AXDispatchTimer, HCXPCMessage, NSArray, NSString, NSDictionary;
@protocol HCHeardControllerProtocol, UNUserNotificationCenterDelegate, OS_xpc_object, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXHeardController : NSObject <HCHeardControllerProtocol, UNUserNotificationCenterDelegate>

 {
    AXDispatchTimer *_transparencyHysteresisTimer;
    AXDispatchTimer *_shutdownTimer;
    BOOL _shouldShutdown;
    NSObject<OS_xpc_object> *_service;
    BOOL _finishedSetup;
}


@property (retain, nonatomic) HCXPCMessage *boostMessage; // ivar: _boostMessage
@property (retain, nonatomic) NSArray *clients; // ivar: _clients
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *handlers; // ivar: _handlers
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *personalAudioQueue; // ivar: _personalAudioQueue
@property (readonly) Class superclass;


+(id)entitlementsForMessageID:(NSUInteger)arg0 ;
+(id)sharedServer;
-(BOOL)connection:(id)arg0 hasEntitlementForMessage:(NSUInteger)arg1 ;
-(BOOL)sendMessage:(id)arg0 withError:(*id)arg1 ;
-(NSUInteger)countOfClientsListeningForIdentifier:(NSUInteger)arg0 ;
-(id)boostPriority:(id)arg0 ;
-(id)init;
// -(void)addHandler:(id)arg0 andBlock:(id)arg1 forMessageIdentifier:(unk)arg2  ;
-(void)continueSetup;
-(void)dealloc;
-(void)handleMessage:(id)arg0 forIdentifier:(NSUInteger)arg1 ;
-(void)handleNewConnection:(id)arg0 ;
-(void)registerFakeClient:(id)arg0 ;
-(void)sendClientsMessageWithPayload:(id)arg0 excluding:(id)arg1 ;
-(void)sendUpdateMessage:(id)arg0 forIdentifier:(NSUInteger)arg1 ;
-(void)shutdownIfPossible;
-(void)startServer;
-(void)updateAnalytics;
-(void)updateHearingControlCenterModule;
-(void)updatePersonalAudioSettingsOnAccessories;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif