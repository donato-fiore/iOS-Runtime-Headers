// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ASCREDENTIALPROVIDEREXTENSIONHOSTCONTEXT_H
#define _ASCREDENTIALPROVIDEREXTENSIONHOSTCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _ASCredentialProviderExtensionHostContextProtocol, _ASExtensionHostContext, _ASCredentialProviderExtensionHostContextDelegate;



@interface _ASCredentialProviderExtensionHostContext : NSExtensionContext <_ASCredentialProviderExtensionHostContextProtocol, _ASExtensionHostContext>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_ASCredentialProviderExtensionHostContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)prepareToCancelRequestWithError:(id)arg0 completion:(id)arg1 ;
-(void)prepareToCompleteExtensionConfigurationRequestWithCompletion:(id)arg0 ;
-(void)prepareToCompleteRequestWithSelectedCredential:(id)arg0 completion:(id)arg1 ;


@end


#endif