// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIPROXIEDTERMSREMOTEUI_H
#define AAUIPROXIEDTERMSREMOTEUI_H

@class AKDevice, NSString;
@protocol AKAnisetteServiceProtocol;


#import "AAUIGenericTermsRemoteUI.h"

@interface AAUIProxiedTermsRemoteUI : AAUIGenericTermsRemoteUI {
    AKDevice *_proxiedDevice;
    NSString *_appProvidedContext;
    id<AKAnisetteServiceProtocol> *_anisetteDataProvider;
}




-(id)_authContextForRenewCredentials;
-(id)_sessionConfiguration;
-(id)initWithAuthResults:(id)arg0 ;
-(id)initWithAuthResults:(id)arg0 proxiedDevice:(id)arg1 anisetteDataProvider:(id)arg2 appProvidedContext:(id)arg3 termsEntries:(id)arg4 ;
-(id)initWithAuthResults:(id)arg0 proxiedDevice:(id)arg1 appProvidedContext:(id)arg2 ;
-(void)_addHeadersToRequest:(id)arg0 ;
-(void)_agreeToTermsWithURLString:(id)arg0 preferPassword:(BOOL)arg1 completion:(id)arg2 ;
-(void)_sendAcceptedTermsInfo:(id)arg0 ;


@end


#endif