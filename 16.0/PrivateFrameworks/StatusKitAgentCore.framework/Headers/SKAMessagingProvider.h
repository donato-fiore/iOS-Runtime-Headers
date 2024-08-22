// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKAMESSAGINGPROVIDER_H
#define SKAMESSAGINGPROVIDER_H

@class NSString, IDSService;
@protocol IDSServiceDelegate, SKAMessagingProviding, SKAMessagingProvidingDelegate, SKAPushManaging;

#import <Foundation/Foundation.h>


@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAMessagingProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<SKAPushManaging> *pushManager; // ivar: _pushManager
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly) Class superclass;


+(id)_noValidIDSDetintationError;
+(id)logger;
-(BOOL)_keysharingIsDisabledByServer;
-(BOOL)isHandleAvailableToMessageFrom:(id)arg0 ;
-(BOOL)sendMessage:(id)arg0 toHandle:(id)arg1 fromHandle:(id)arg2 limitToPresenceCapable:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)sendMessage:(id)arg0 toHandles:(id)arg1 fromHandle:(id)arg2 limitToPresenceCapable:(BOOL)arg3 error:(*id)arg4 ;
-(id)deviceToken;
-(id)deviceTokenForTokenURI:(id)arg0 ;
-(id)handleForTokenURI:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 serviceIdentifier:(id)arg1 pushManager:(id)arg2 queue:(id)arg3 ;
-(id)resolveSenderHandleWithPreferredSenderHandle:(id)arg0 ;
-(id)tokenURI;
-(void)isHandleMessageable:(id)arg0 completion:(id)arg1 ;
-(void)isHandleMessageableForPresence:(id)arg0 completion:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 didHintCheckingTransportLogWithReason:(NSInteger)arg1 ;
-(void)signPayload:(id)arg0 completion:(id)arg1 ;
-(void)verifySignedPayload:(id)arg0 matchesPayload:(id)arg1 fromTokenURI:(id)arg2 completion:(id)arg3 ;


@end


#endif