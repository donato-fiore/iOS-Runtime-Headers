// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCONCRETEPASSCODEAUTHENTICATIONPROVIDERSERVICE_H
#define STCONCRETEPASSCODEAUTHENTICATIONPROVIDERSERVICE_H

@class NSXPCListenerEndpoint;
@protocol STPasscodeAuthenticationResultReceiverInterface, STPasscodeAuthenticationProviderService;

#import <Foundation/Foundation.h>


@interface STConcretePasscodeAuthenticationProviderService : NSObject <STPasscodeAuthenticationResultReceiverInterface, STPasscodeAuthenticationProviderService>



@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint; // ivar: _clientListenerEndpoint
@property (copy) id *pendingAuthenticationCompletionHandler; // ivar: _pendingAuthenticationCompletionHandler


-(id)description;
-(id)initWithClientListenerEndpoint:(id)arg0 ;
-(void)authenticatePasscodeWithCommunicationServiceProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)receivePasscodeAuthenticationResult:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif