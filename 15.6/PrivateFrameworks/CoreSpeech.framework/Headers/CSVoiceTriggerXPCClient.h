// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGERXPCCLIENT_H
#define CSVOICETRIGGERXPCCLIENT_H

@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerXPCClient : NSObject

@property (weak, nonatomic) NSObject<CSVoiceTriggerXPCClientDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // ivar: _xpcConnection


-(id)fetchVoiceTriggerStats;
-(id)init;
-(void)_handleListenerDisconnectedError:(id)arg0 ;
-(void)_handleListenerError:(id)arg0 ;
-(void)_handleListenerEvent:(id)arg0 ;
-(void)_sendMessage:(id)arg0 connection:(id)arg1 completion:(id)arg2 ;
-(void)connect;
-(void)dealloc;
-(void)enableVoiceTrigger:(BOOL)arg0 withAssertion:(id)arg1 timestamp:(CGFloat)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)setPhraseSpotterBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;


@end


#endif