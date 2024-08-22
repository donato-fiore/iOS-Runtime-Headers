// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ASCREDENTIALPROVIDEREXTENSIONCONFIGURATIONVIEWCONTROLLER_H
#define _ASCREDENTIALPROVIDEREXTENSIONCONFIGURATIONVIEWCONTROLLER_H

@class ASExtensionViewController, NSString;
@protocol _ASCredentialProviderExtensionHostContextDelegate, _ASCredentialProviderExtensionConfigurationViewControllerDelegate;



@interface _ASCredentialProviderExtensionConfigurationViewController : ASExtensionViewController <_ASCredentialProviderExtensionHostContextDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_ASCredentialProviderExtensionConfigurationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_finishWithSuccess:(BOOL)arg0 completion:(id)arg1 ;
-(void)_requestDidFailWithError:(id)arg0 completion:(id)arg1 ;
-(void)beginConfiguringExtension;
-(void)prepareToCompleteExtensionConfigurationRequestWithHost:(id)arg0 completion:(id)arg1 ;


@end


#endif