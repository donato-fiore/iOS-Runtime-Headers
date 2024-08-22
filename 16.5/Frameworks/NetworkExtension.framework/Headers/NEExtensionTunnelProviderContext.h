// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEEXTENSIONTUNNELPROVIDERCONTEXT_H
#define NEEXTENSIONTUNNELPROVIDERCONTEXT_H

@class NSString;
@protocol NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol, OS_dispatch_source;


#import "NEExtensionProviderContext.h"
#import "NEIPC.h"

@interface NEExtensionTunnelProviderContext : NEExtensionProviderContext <NEExtensionTunnelProviderProtocol, NEExtensionTunnelProviderHostProtocol>

 {
    NEIPC *_ipc;
    NSObject<OS_dispatch_source> *_ipcIdleTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(void)cancelWithError:(id)arg0 ;
-(void)didSetReasserting:(BOOL)arg0 ;
-(void)establishIPCWithCompletionHandler:(id)arg0 ;
-(void)handleIPCDetached;
-(void)setConfiguration:(id)arg0 extensionIdentifier:(id)arg1 ;
-(void)setTunnelConfiguration:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif