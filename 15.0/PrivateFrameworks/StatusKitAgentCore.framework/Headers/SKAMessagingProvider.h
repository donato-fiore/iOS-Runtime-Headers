// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKAMESSAGINGPROVIDER_H
#define SKAMESSAGINGPROVIDER_H

@class NSString, IDSService;
@protocol IDSServiceDelegate, SKAMessagingProviding, SKAMessagingProvidingDelegate;

#import <Foundation/Foundation.h>


@interface SKAMessagingProvider : NSObject <IDSServiceDelegate, SKAMessagingProviding>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKAMessagingProvidingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSService *service; // ivar: _service
@property (retain, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (readonly) Class superclass;


+(id)_noValidIDSDetintationError;
+(id)logger;
-(BOOL)_keysharingIsDisabledByServer;
-(BOOL)isHandleAvailableToMessageFrom:(id)arg0 ;
-(BOOL)sendMessage:(id)arg0 toHandle:(id)arg1 fromHandle:(id)arg2 error:(*id)arg3 ;
-(BOOL)sendMessage:(id)arg0 toHandles:(id)arg1 fromHandle:(id)arg2 error:(*id)arg3 ;
-(id)initWithDelegate:(id)arg0 serviceIdentifier:(id)arg1 queue:(id)arg2 ;
-(id)resolveSenderHandleWithPreferredSenderHandle:(id)arg0 ;
-(void)isHandleMessageable:(id)arg0 completion:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 incomingMessage:(id)arg2 fromID:(id)arg3 context:(id)arg4 ;
-(void)service:(id)arg0 didHintCheckingTransportLogWithReason:(NSInteger)arg1 ;


@end


#endif