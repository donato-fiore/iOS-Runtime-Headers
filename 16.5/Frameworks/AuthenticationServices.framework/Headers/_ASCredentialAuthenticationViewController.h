// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASCREDENTIALAUTHENTICATIONVIEWCONTROLLER_H
#define _ASCREDENTIALAUTHENTICATIONVIEWCONTROLLER_H

@class ASExtensionViewController, NSString;
@protocol _ASCredentialProviderExtensionHostContextDelegate, _ASCredentialAuthenticationViewControllerDelegate;


#import "ASPasswordCredentialIdentity.h"

@interface _ASCredentialAuthenticationViewController : ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate>

 {
    ASPasswordCredentialIdentity *_credentialIdentity;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_ASCredentialAuthenticationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithExtension:(id)arg0 credentialIdentity:(id)arg1 ;
-(void)_finishWithCredential:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_nonUIRequestDidRequireUserInteraction;
-(void)_requestDidFailWithError:(id)arg0 completion:(id)arg1 ;
-(void)prepareToCompleteRequestWithHostContext:(id)arg0 credential:(id)arg1 completion:(id)arg2 ;


@end


#endif