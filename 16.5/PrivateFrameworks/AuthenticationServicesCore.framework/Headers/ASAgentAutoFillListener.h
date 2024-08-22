// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASAGENTAUTOFILLLISTENER_H
#define ASAGENTAUTOFILLLISTENER_H

@class NSXPCListener, NSHashTable, NSString;
@protocol NSXPCListenerDelegate, WBSAuthenticationServicesAgentInterface, ASPasskeyAutoFillManagerDelegate, ASPublicKeyCredentialManagerInterface;

#import <Foundation/Foundation.h>


@interface ASAgentAutoFillListener : NSObject <NSXPCListenerDelegate, WBSAuthenticationServicesAgentInterface, ASPasskeyAutoFillManagerDelegate>

 {
    NSXPCListener *_listener;
    id<ASPublicKeyCredentialManagerInterface> *_publicKeyCredentialManager;
    NSHashTable *_weakActiveConnections;
    os_unfair_lock_s _internalLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithPublicKeyCredentialManager:(id)arg0 ;
-(void)getPasskeysForRunningAssertionWithApplicationIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)getPasskeysForRunningAssertionWithWebFrameIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)newPasskeysAvailableForApplicationIdentifier:(id)arg0 ;
-(void)test_createPasskeyWithUserName:(id)arg0 displayName:(id)arg1 relyingPartyIdentifier:(id)arg2 userHandle:(id)arg3 completionHandler:(id)arg4 ;
-(void)userSelectedAutoFillNearbyDevice:(id)arg0 completionHandler:(id)arg1 ;
-(void)userSelectedAutoFillPasskey:(id)arg0 authenticatedLAContext:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif