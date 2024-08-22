// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEEXTENSIONDNSPROXYPROVIDERCONTEXT_H
#define NEEXTENSIONDNSPROXYPROVIDERCONTEXT_H

@class NSString;
@protocol NEExtensionDNSProxyProviderProtocol;


#import "NEExtensionAppProxyProviderContext.h"

@interface NEExtensionDNSProxyProviderContext : NEExtensionAppProxyProviderContext <NEExtensionDNSProxyProviderProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)setSystemDNSSettings:(id)arg0 ;


@end


#endif