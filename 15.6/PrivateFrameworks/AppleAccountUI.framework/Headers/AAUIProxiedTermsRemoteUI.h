// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAUIPROXIEDTERMSREMOTEUI_H
#define AAUIPROXIEDTERMSREMOTEUI_H

@class AKDevice, NSString;


#import "AAUIGenericTermsRemoteUI.h"

@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI {
    AKDevice *_proxiedDevice;
    NSString *_appProvidedContext;
}




-(id)_authContextForRenewCredentials;
-(id)initWithAuthResults:(id)arg0 ;
-(id)initWithAuthResults:(id)arg0 proxiedDevice:(id)arg1 appProvidedContext:(id)arg2 ;
-(id)sessionConfigurationForLoader:(id)arg0 ;
-(void)_addHeadersToRequest:(id)arg0 ;
-(void)_agreeToTermsWithURLString:(id)arg0 preferPassword:(BOOL)arg1 completion:(id)arg2 ;
-(void)_sendAcceptedTermsInfo:(id)arg0 ;


@end


#endif