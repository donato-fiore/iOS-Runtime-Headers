// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEEXTENSIONAPPPROXYPROVIDERCONTEXT_H
#define NEEXTENSIONAPPPROXYPROVIDERCONTEXT_H

@class NSString;
@protocol NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol, OS_dispatch_queue;


#import "NEExtensionTunnelProviderContext.h"

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol>

 {
    unsigned int _delegateInterfaceIndex;
    NSObject<OS_dispatch_queue> *_flowQueue;
    *_NEFlowDirector _director;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(Class)requiredProviderSuperClass;
-(id)extensionPoint;
-(void)cancelWithError:(id)arg0 ;
-(void)openFlowDivertControlSocketWithCompletionHandler:(id)arg0 ;
-(void)setDelegateInterface:(unsigned int)arg0 ;
-(void)setInitialFlowDivertControlSocket:(id)arg0 ;
-(void)startWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithReason:(int)arg0 ;


@end


#endif