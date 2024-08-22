// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRSETUPHANDLER_H
#define TRSETUPHANDLER_H

@protocol TRSetupHandlerDelegate;

#import <Foundation/Foundation.h>


@interface TRSetupHandler : NSObject

@property (weak, nonatomic) NSObject<TRSetupHandlerDelegate> *delegate; // ivar: _delegate


-(id)initWithDelegate:(id)arg0 ;
-(void)_handleActivationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleCompanionAuthenticationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleCompletionRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleConfigurationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleHandshakeRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleNetworkRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleProxyAuthenticationRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)_handleProxyDeviceRequest:(id)arg0 withResponseHandler:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg0 ;


@end


#endif