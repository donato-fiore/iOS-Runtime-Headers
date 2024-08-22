// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDAUTHENTICATIONDIALOGMANAGER_H
#define ACDAUTHENTICATIONDIALOGMANAGER_H

@class NSXPCListener, NSString;
@protocol ACDAuthenticationDialogManagerProtocol;

#import <Foundation/Foundation.h>

#import "ACDQueueDictionary.h"

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol>

 {
    NSXPCListener *_authenticationDialogListener;
    ACDQueueDictionary *_dialogRequestQueues;
    NSString *_activeAccountID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg0 ;
-(id)init;
-(void)_launchDialogContainerAppForAccount:(id)arg0 shouldConfirm:(BOOL)arg1 completion:(id)arg2 ;
-(void)authenticationDialogCrashed;
-(void)authenticationDialogDidFinishWithSuccess:(BOOL)arg0 response:(id)arg1 ;
-(void)contextForAuthenticationDialog:(id)arg0 ;
-(void)openAuthenticationURL:(id)arg0 forAccount:(id)arg1 shouldConfirm:(BOOL)arg2 completion:(id)arg3 ;
-(void)openAuthenticationURLForAccount:(id)arg0 withDelegateClassName:(id)arg1 fromBundleAtPath:(id)arg2 shouldConfirm:(BOOL)arg3 completion:(id)arg4 ;


@end


#endif