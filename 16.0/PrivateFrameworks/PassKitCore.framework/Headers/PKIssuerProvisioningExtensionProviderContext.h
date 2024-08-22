// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKISSUERPROVISIONINGEXTENSIONPROVIDERCONTEXT_H
#define PKISSUERPROVISIONINGEXTENSIONPROVIDERCONTEXT_H

@class NSExtensionContext, NSString;
@protocol PKIssuerProvisioningExtensionProviderContextExportedInterface;


#import "PKIssuerProvisioningExtensionHandler.h"

@interface PKIssuerProvisioningExtensionProviderContext : NSExtensionContext <PKIssuerProvisioningExtensionProviderContextExportedInterface>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKIssuerProvisioningExtensionHandler *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id)remoteObjectProxyWithErrorHandler:(id)arg0 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(id)arg0 ;
-(void)connect;
-(void)generateRequestWithEntryIdentifier:(id)arg0 configuration:(id)arg1 certificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(id)arg5 ;
-(void)passEntriesWithCompletion:(id)arg0 ;
-(void)remotePassEntriesWithCompletion:(id)arg0 ;
-(void)statusWithCompletion:(id)arg0 ;


@end


#endif