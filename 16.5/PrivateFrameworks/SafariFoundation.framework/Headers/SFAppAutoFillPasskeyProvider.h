// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAPPAUTOFILLPASSKEYPROVIDER_H
#define SFAPPAUTOFILLPASSKEYPROVIDER_H

@class WBSAuthenticationServicesAgentProxy;

#import <Foundation/Foundation.h>


@interface SFAppAutoFillPasskeyProvider : NSObject {
    WBSAuthenticationServicesAgentProxy *_proxy;
}




-(id)init;
-(void)getAvailablePasskeysForAppWithAuditToken:(struct ? )arg0 withCompletionHandler:(id)arg1 ;
-(void)getAvailablePasskeysForApplicationIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)getAvailablePasskeysForWebPageIdentifier:(id)arg0 frameID:(id)arg1 completionHandler:(id)arg2 ;
-(void)userSelectedPasskey:(id)arg0 authenticatedLAContext:(id)arg1 ;
-(void)userSelectedPasskeyWithUserHandle:(id)arg0 authenticatedLAContext:(id)arg1 ;


@end


#endif