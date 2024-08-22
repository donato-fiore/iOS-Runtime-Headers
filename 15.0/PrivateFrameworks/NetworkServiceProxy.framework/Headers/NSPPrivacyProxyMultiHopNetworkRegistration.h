// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSPPRIVACYPROXYMULTIHOPNETWORKREGISTRATION_H
#define NSPPRIVACYPROXYMULTIHOPNETWORKREGISTRATION_H



#import "NSPPrivacyProxyNetworkRegistration.h"

@interface NSPPrivacyProxyMultiHopNetworkRegistration : NSPPrivacyProxyNetworkRegistration



-(BOOL)setProxyAgentConfiguration:(id)arg0 secondProxyHopURL:(id)arg1 firstProxyHopKeyArray:(id)arg2 secondProxyHopKeyArray:(id)arg3 ingressTokenAgentUUID:(id)arg4 egressTokenAgentUUID:(id)arg5 fallbackAgentUUID:(id)arg6 shouldFailOpen:(BOOL)arg7 allowGeohash:(BOOL)arg8 enableDNSFilteringHint:(BOOL)arg9 fallbackProxyConfigHash:(id)arg10 ;
-(id)initWithAgentUUID:(id)arg0 delegate:(id)arg1 ;


@end


#endif