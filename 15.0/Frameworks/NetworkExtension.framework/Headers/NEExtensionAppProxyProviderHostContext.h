// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEEXTENSIONAPPPROXYPROVIDERHOSTCONTEXT_H
#define NEEXTENSIONAPPPROXYPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol;


#import "NEExtensionTunnelProviderHostContext.h"

@interface NEExtensionAppProxyProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(int)requiredEntitlement;
-(void)openFlowDivertControlSocketWithCompletionHandler:(id)arg0 ;
-(void)setDelegateInterface:(unsigned int)arg0 ;
-(void)setInitialFlowDivertControlSocket:(id)arg0 ;


@end


#endif