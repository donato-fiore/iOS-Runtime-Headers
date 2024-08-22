// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDUIENDPOINTPAIRINGSESSION_H
#define DDUIENDPOINTPAIRINGSESSION_H

@class NSString, NSUUID, NSDictionary;
@protocol DDUIEndpointPairingInitiatorSession, DDUIEndpointPairingReceiverSession, OS_dispatch_group, DDUIDevice, DDUIEndpointPairingTransportSession;

#import <Foundation/Foundation.h>


@interface DDUIEndpointPairingSession : NSObject <DDUIEndpointPairingInitiatorSession, DDUIEndpointPairingReceiverSession>



@property (retain, nonatomic) NSObject<OS_dispatch_group> *activateGroup; // ivar: _activateGroup
@property (nonatomic) BOOL activated; // ivar: _activated
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSObject<DDUIDevice> *remoteDevice;
@property (retain, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (retain, nonatomic) NSDictionary *startUserInfo; // ivar: _startUserInfo
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<DDUIEndpointPairingTransportSession> *transportSession; // ivar: _transportSession


-(BOOL)_handleIncomingMessage:(id)arg0 ;
-(id)initWithTransportSession:(id)arg0 mode:(NSUInteger)arg1 ;
-(id)processInitialMessage:(id)arg0 ;
// -(void)_activateWithErrorHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)_clearBlocks;
-(void)_failPairing;
-(void)_pairWithInfo:(id)arg0 ;
-(void)_sendPairingWithInfo:(id)arg0 ;
// -(void)activateWithErrorHandler:(id)arg0 completionHandler:(unk)arg1  ;
-(void)cancelWithMessage:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)pairWithMessage:(id)arg0 ;
// -(void)pairWithMessage:(id)arg0 errorHandler:(id)arg1 completionHandler:(unk)arg2  ;


@end


#endif