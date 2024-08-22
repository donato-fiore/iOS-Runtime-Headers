// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCREDENTIALPROVIDEREXTENSIONCONTEXT_H
#define ASCREDENTIALPROVIDEREXTENSIONCONTEXT_H

@class NSExtensionContext, NSString;
@protocol _ASCredentialProviderExtensionContextProtocol;



@interface ASCredentialProviderExtensionContext : NSExtensionContext <_ASCredentialProviderExtensionContextProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)cancelRequestWithError:(id)arg0 ;
-(void)completeExtensionConfigurationRequest;
-(void)completeRequestWithSelectedCredential:(id)arg0 completionHandler:(id)arg1 ;
-(void)prepareCredentialListForServiceIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
-(void)prepareInterfaceForExtensionConfiguration;
-(void)prepareInterfaceToProvideCredentialForIdentity:(id)arg0 completionHandler:(id)arg1 ;
-(void)provideCredentialWithoutUserInteractionForIdentity:(id)arg0 ;


@end


#endif