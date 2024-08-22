// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCONCRETEPASSCODEPROVIDERSERVICE_H
#define STCONCRETEPASSCODEPROVIDERSERVICE_H

@class NSXPCListenerEndpoint;
@protocol STPasscodeReceiverInterface, STPasscodeProviderService;

#import <Foundation/Foundation.h>


@interface STConcretePasscodeProviderService : NSObject <STPasscodeReceiverInterface, STPasscodeProviderService>



@property (readonly) NSXPCListenerEndpoint *clientListenerEndpoint; // ivar: _clientListenerEndpoint
@property (copy) id *pendingProvidePasscodeCompletionHandler; // ivar: _pendingProvidePasscodeCompletionHandler


-(id)description;
-(id)initWithClientListenerEndpoint:(id)arg0 ;
-(void)collectPasscodeWithSetupServiceProxy:(id)arg0 completionHandler:(id)arg1 ;
-(void)receivePasscode:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif