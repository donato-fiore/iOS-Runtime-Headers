// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTSERVER_H
#define RTTSERVER_H

@class HCServer, NSLock, NSMutableDictionary;
@protocol OS_dispatch_queue;



@interface RTTServer : HCServer {
    NSLock *_dataResponseBlocksLock;
    NSMutableDictionary *_databaseResponseBlocks;
    NSObject<OS_dispatch_queue> *_commonRequestQueue;
}


@property (copy, nonatomic) id *actionCompletionBlock; // ivar: _actionCompletionBlock


+(id)sharedInstance;
-(BOOL)contactIsTTYContact:(id)arg0 ;
-(BOOL)deleteConversationWithCallUID:(id)arg0 ;
-(BOOL)isEmergencyNumber:(id)arg0 ;
-(BOOL)shouldRestartOnInterruption;
-(id)init;
-(id)valueForTTYSetting:(id)arg0 ;
-(void)_managerAXPIDState:(BOOL)arg0 ;
-(void)_registerForServerSettingsUpdates;
-(void)_takeStackshot;
-(void)cancelCallPromptDisplay;
-(void)dealloc;
-(void)displayCallPromptForContact:(id)arg0 withCompletion:(id)arg1 ;
-(void)findConversationForCallUID:(id)arg0 andResult:(id)arg1 ;
-(void)handleMessageError:(id)arg0 destructive:(BOOL)arg1 ;
-(void)handleMessageWithPayload:(id)arg0 forIdentifier:(NSUInteger)arg1 ;
-(void)primeRTTServer;
// -(void)registerForRemoteUpdates:(id)arg0 forCallUID:(unk)arg1  ;
// -(void)registerForServiceUpdates:(id)arg0 forCallUID:(unk)arg1  ;
// -(void)registerForUpdates:(id)arg0 forCallUID:(unk)arg1  ;
// -(void)registerResponseBlock:(id)arg0 forUUID:(unk)arg1  ;
-(void)resetConnection;
-(void)sendString:(id)arg0 forCallUID:(id)arg1 ;
-(void)setShouldSuppressIncomingNotification:(BOOL)arg0 ;
-(void)setSystemOutputAudioMuted:(BOOL)arg0 withCallID:(id)arg1 ;
-(void)setTTYDictionaryAvailability:(BOOL)arg0 ;
-(void)setViewControllerIsVisible:(BOOL)arg0 withCallID:(id)arg1 ;
-(void)terminateConnectionAndNotify:(BOOL)arg0 ;


@end


#endif