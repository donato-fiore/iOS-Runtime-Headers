// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDNETWORKROUTERHOMEKITONLYFIREWALLCONFIGURATION_H
#define HMDNETWORKROUTERHOMEKITONLYFIREWALLCONFIGURATION_H



#import "HMDNetworkRouterFirewallRuleConfiguration.h"

@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {
    BOOL _isFiltered;
    BOOL _useFallbackForRTP;
    BOOL _useFallbackForHDS;
    BOOL _useFallbackForAirPlay2;
}




+(BOOL)isAirplayRule:(id)arg0 ;
+(id)fallbackConfigurationForRuleset:(id)arg0 ;
+(id)fallbackIdentifier;
-(id)description;
-(id)initWithAccessory:(id)arg0 sourceConfiguration:(id)arg1 ;


@end


#endif