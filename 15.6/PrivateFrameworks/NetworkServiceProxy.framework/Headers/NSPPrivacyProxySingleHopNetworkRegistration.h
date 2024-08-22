// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYSINGLEHOPNETWORKREGISTRATION_H
#define NSPPRIVACYPROXYSINGLEHOPNETWORKREGISTRATION_H



#import "NSPPrivacyProxyNetworkRegistration.h"

@interface NSPPrivacyProxySingleHopNetworkRegistration : NSPPrivacyProxyNetworkRegistration



-(BOOL)setProxyAgentConfiguration:(id)arg0 proxyKeyArray:(id)arg1 tokenAgentUUID:(id)arg2 fallbackAgentUUID:(id)arg3 shouldFailOpen:(BOOL)arg4 fallbackProxyConfigHash:(id)arg5 ;
-(id)initWithAgentUUID:(id)arg0 delegate:(id)arg1 ;


@end


#endif