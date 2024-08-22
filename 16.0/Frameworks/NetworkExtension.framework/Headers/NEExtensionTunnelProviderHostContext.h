// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEEXTENSIONTUNNELPROVIDERHOSTCONTEXT_H
#define NEEXTENSIONTUNNELPROVIDERHOSTCONTEXT_H

@class NSString;
@protocol NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol;


#import "NEExtensionProviderHostContext.h"

@interface NEExtensionTunnelProviderHostContext : NEExtensionProviderHostContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)didSetReasserting:(BOOL)arg0 ;
-(void)establishIPCWithCompletionHandler:(id)arg0 ;
-(void)handleIPCDetached;
-(void)setTunnelConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif