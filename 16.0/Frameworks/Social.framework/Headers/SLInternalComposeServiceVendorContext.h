// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLINTERNALCOMPOSESERVICEVENDORCONTEXT_H
#define SLINTERNALCOMPOSESERVICEVENDORCONTEXT_H

@class NSExtensionContext;
@protocol SLInternalComposeServiceHostProtocol, SLInternalComposeServiceVendorProtocol;



@interface SLInternalComposeServiceVendorContext : NSExtensionContext <SLInternalComposeServiceHostProtocol, SLInternalComposeServiceVendorProtocol>





+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)shouldShowNetworkActivityIndicator:(id)arg0 ;


@end


#endif