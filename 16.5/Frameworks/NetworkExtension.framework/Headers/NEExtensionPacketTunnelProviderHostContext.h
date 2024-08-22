// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEEXTENSIONPACKETTUNNELPROVIDERHOSTCONTEXT_H
#define NEEXTENSIONPACKETTUNNELPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol;


#import "NEExtensionTunnelProviderHostContext.h"

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(int)requiredEntitlement;
-(void)fetchVirtualInterfaceTypeWithCompletionHandler:(id)arg0 ;
-(void)requestSocket:(BOOL)arg0 interface:(id)arg1 local:(id)arg2 remote:(id)arg3 completionHandler:(id)arg4 ;
-(void)setAppUUIDMap:(id)arg0 ;
-(void)setupVirtualInterface:(id)arg0 ;
-(void)validateWithCompletionHandler:(id)arg0 ;


@end


#endif