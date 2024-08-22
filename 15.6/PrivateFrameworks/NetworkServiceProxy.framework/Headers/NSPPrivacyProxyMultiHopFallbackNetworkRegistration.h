// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYMULTIHOPFALLBACKNETWORKREGISTRATION_H
#define NSPPRIVACYPROXYMULTIHOPFALLBACKNETWORKREGISTRATION_H



#import "NSPPrivacyProxyNetworkRegistration.h"

@interface NSPPrivacyProxyMultiHopFallbackNetworkRegistration : NSPPrivacyProxyNetworkRegistration



-(BOOL)setProxyAgentConfiguration:(id)arg0 secondProxyHopURL:(id)arg1 firstProxyHopKeyArray:(id)arg2 secondProxyHopKeyArray:(id)arg3 ingressTokenAgentUUID:(id)arg4 egressTokenAgentUUID:(id)arg5 shouldFailOpen:(BOOL)arg6 allowGeohash:(BOOL)arg7 geohashOverride:(id)arg8 enableDNSFilteringHint:(BOOL)arg9 ;
-(id)initWithAgentUUID:(id)arg0 delegate:(id)arg1 ;


@end


#endif