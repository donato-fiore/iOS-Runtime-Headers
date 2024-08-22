// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEAGENTAPPPROXYEXTENSION_H
#define NEAGENTAPPPROXYEXTENSION_H

@class NSString;
@protocol NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver;


#import "NEAgentTunnelExtension.h"

@interface NEAgentAppProxyExtension : NEAgentTunnelExtension <NEExtensionAppProxyProviderHostDelegate, NEFlowDivertPluginDriver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)driverInterface;
-(id)managerInterface;
-(void)connectWithParameters:(id)arg0 ;
-(void)extension:(id)arg0 didRequestFlowDivertControlSocketWithCompletionHandler:(id)arg1 ;
-(void)setDelegateInterface:(unsigned int)arg0 ;


@end


#endif