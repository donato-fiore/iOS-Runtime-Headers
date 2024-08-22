// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEEXTENSIONAPPPROXYPROVIDERCONTEXT_H
#define NEEXTENSIONAPPPROXYPROVIDERCONTEXT_H

@class NSString;
@protocol NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol, OS_dispatch_queue;


#import "NEExtensionTunnelProviderContext.h"

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol>



@property (readonly, copy) NSString *debugDescription;
@property unsigned int delegateInterfaceIndex; // ivar: _delegateInterfaceIndex
@property (readonly, copy) NSString *description;
@property *_NEFlowDirector director; // ivar: _director
@property (retain) NSObject<OS_dispatch_queue> *flowQueue; // ivar: _flowQueue
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)cancelWithError:(id)arg0 ;
-(void)flowDivertMatchAppRulesWithFlow:(unsigned int)arg0 auditToken:(struct __CFData *)arg1 signingIdentifier:(struct __CFString *)arg2 realSigningIdentifier:(struct __CFString *)arg3 realAuditToken:(struct __CFData *)arg4 ;
-(void)flowDivertNewFlow:(struct _NEFlow *)arg0 completionHandler:(id)arg1 ;
-(void)flowDivertOpenControlSocket;
-(void)openFlowDivertControlSocketWithCompletionHandler:(id)arg0 ;
-(void)setDelegateInterface:(unsigned int)arg0 ;
-(void)setInitialFlowDivertControlSocket:(id)arg0 ;
-(void)setInitialFlowDivertControlSocket:(id)arg0 extraValidation:(BOOL)arg1 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;


@end


#endif