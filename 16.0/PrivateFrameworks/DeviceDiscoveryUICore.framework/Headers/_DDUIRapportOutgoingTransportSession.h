// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DDUIRAPPORTOUTGOINGTRANSPORTSESSION_H
#define _DDUIRAPPORTOUTGOINGTRANSPORTSESSION_H

@class RPCompanionLinkClient, NSString;
@protocol DDUIEndpointPairingTransportSession, DDUIDevice;

#import <Foundation/Foundation.h>


@interface _DDUIRapportOutgoingTransportSession : NSObject <DDUIEndpointPairingTransportSession>



@property (retain, nonatomic) RPCompanionLinkClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *messageHandler; // ivar: _messageHandler
@property (readonly, nonatomic) NSObject<DDUIDevice> *remoteDevice;
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


-(id)initWithServiceIdentifier:(id)arg0 ;
// -(void)activateWithErrorHandler:(id)arg0 messageHandler:(unk)arg1 completion:(id)arg2  ;
-(void)generateNetworkEndpointIdentifierForRemoteDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg0 withMessageID:(id)arg1 ;
-(void)invalidate;
-(void)sendMessage:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendMessage:(id)arg0 withTimeout:(CGFloat)arg1 completion:(id)arg2 ;


@end


#endif