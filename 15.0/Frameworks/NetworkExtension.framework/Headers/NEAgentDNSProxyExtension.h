// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEAGENTDNSPROXYEXTENSION_H
#define NEAGENTDNSPROXYEXTENSION_H

@protocol NEDNSProxyPluginDriver;


#import "NEAgentAppProxyExtension.h"

@interface NEAgentDNSProxyExtension : NEAgentAppProxyExtension <NEDNSProxyPluginDriver>





-(id)driverInterface;
-(void)setSystemDNSSettings:(id)arg0 ;


@end


#endif