// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEEXTENSIONPACKETTUNNELPROVIDERCONTEXT_H
#define NEEXTENSIONPACKETTUNNELPROVIDERCONTEXT_H

@class NSString;
@protocol NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol;


#import "NEExtensionTunnelProviderContext.h"

@interface NEExtensionPacketTunnelProviderContext : NEExtensionTunnelProviderContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) BOOL testDisconnectAndDisposeTimeout; // ivar: _testDisconnectAndDisposeTimeout


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)completeSession;
-(void)fetchVirtualInterfaceTypeWithCompletionHandler:(id)arg0 ;
-(void)requestSocket:(BOOL)arg0 interface:(id)arg1 local:(id)arg2 remote:(id)arg3 completionHandler:(id)arg4 ;
-(void)setAppUUIDMap:(id)arg0 ;
-(void)setTunnelConfiguration:(id)arg0 completionHandler:(id)arg1 ;
-(void)setVirtualInterfaceSocket:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;


@end


#endif