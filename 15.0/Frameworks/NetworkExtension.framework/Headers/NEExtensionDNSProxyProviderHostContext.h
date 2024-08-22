// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEEXTENSIONDNSPROXYPROVIDERHOSTCONTEXT_H
#define NEEXTENSIONDNSPROXYPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEExtensionDNSProxyProviderProtocol;


#import "NEExtensionAppProxyProviderHostContext.h"

@interface NEExtensionDNSProxyProviderHostContext : NEExtensionAppProxyProviderHostContext <NEExtensionDNSProxyProviderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryVendorProtocol;
-(int)requiredEntitlement;
-(void)setSystemDNSSettings:(id)arg0 ;


@end


#endif