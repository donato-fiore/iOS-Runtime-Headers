// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOAUTHORIZATION_H
#define SOAUTHORIZATION_H

@class SOAuthorizationCore, SOUIAuthorizationViewController, NSDictionary, NSString;
@protocol SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate, SOAuthorizationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SOExtension.h"
#import "SORemoteExtensionViewController.h"

@interface SOAuthorization : NSObject <SOExtensionDelegate, SOUIAuthorizationViewControllerDelegate>

 {
    SOAuthorizationCore *_authorizationCore;
    SOExtension *_extension;
    SORemoteExtensionViewController *_extensionViewController;
    SOUIAuthorizationViewController *_authorizationViewController;
    id *_pendingFinishAuthorizationBlock;
}


@property (retain, nonatomic) NSDictionary *authorizationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<SOAuthorizationDelegate> *delegate; // ivar: _delegate
@property (retain) NSObject<OS_dispatch_queue> *delegateDispatchQueue;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableEmbeddedAuthorizationViewController; // ivar: _enableEmbeddedAuthorizationViewController
@property (nonatomic, getter=isUserInteractionEnabled) BOOL enableUserInteraction;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 callerBundleIdentifier:(id)arg2 useInternalExtensions:(BOOL)arg3 ;
+(BOOL)canPerformAuthorizationWithURL:(id)arg0 responseCode:(NSInteger)arg1 useInternalExtensions:(BOOL)arg2 ;
+(id)originatorBundleIdentifier;
+(void)isExtensionProcessWithAuditToken:(struct ? )arg0 completion:(id)arg1 ;
+(void)setOriginatorBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)kerberosProfiles;
-(id)realms;
-(void)_applicationActivationWithTimeout:(BOOL)arg0 ;
-(void)_cancelAuthorization;
-(void)_extensionCleanup;
-(void)_finishAuthorizationWithCompletion:(id)arg0 ;
-(void)_finishAuthorizationWithCredential:(id)arg0 error:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)authorizationDidCompleteWithCredential:(id)arg0 error:(id)arg1 ;
-(void)beginAuthorizationWithOperation:(id)arg0 url:(id)arg1 httpHeaders:(id)arg2 httpBody:(id)arg3 ;
-(void)beginAuthorizationWithParameters:(id)arg0 ;
-(void)beginAuthorizationWithURL:(id)arg0 httpHeaders:(id)arg1 httpBody:(id)arg2 ;
-(void)cancelAuthorization;
-(void)dealloc;
-(void)debugHintsWithCompletion:(id)arg0 ;
-(void)getAuthorizationHintsWithURL:(id)arg0 responseCode:(NSInteger)arg1 completion:(id)arg2 ;
-(void)presentAuthorizationViewControllerWithHints:(id)arg0 completion:(id)arg1 ;
-(void)viewControllerDidCancel:(id)arg0 ;


@end


#endif