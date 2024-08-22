// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSAUTHENTICATIONSERVICESAGENTPROXY_H
#define WBSAUTHENTICATIONSERVICESAGENTPROXY_H

@class NSXPCConnection;
@protocol WBSAuthenticationServicesAgentDelegate, WBSAuthenticationServicesAgentInterface;

#import <Foundation/Foundation.h>


@interface WBSAuthenticationServicesAgentProxy : NSObject <WBSAuthenticationServicesAgentDelegate, WBSAuthenticationServicesAgentInterface>

 {
    NSXPCConnection *_connection;
}


@property (weak, nonatomic) NSObject<WBSAuthenticationServicesAgentDelegate> *delegate; // ivar: _delegate


-(id)connection;
-(id)init;
-(void)_setUpConnection:(id)arg0 ;
-(void)dealloc;
-(void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)newPasskeysAvailableForApplicationIdentifier:(id)arg0 ;
-(void)test_createPasskeyWithUserName:(id)arg0 displayName:(id)arg1 relyingPartyIdentifier:(id)arg2 userHandle:(id)arg3 completionHandler:(id)arg4 ;
-(void)userSelectedAutoFillNearbyDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)userSelectedAutoFillPasskey:(id)arg0 authenticatedLAContext:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif