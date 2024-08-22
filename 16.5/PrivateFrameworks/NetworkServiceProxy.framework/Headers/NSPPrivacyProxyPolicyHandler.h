// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPPRIVACYPROXYPOLICYHANDLER_H
#define NSPPRIVACYPROXYPOLICYHANDLER_H

@class NEPolicySession, NEFlowDivertFileHandle, NSString, NSArray, NSMutableArray, NSMutableSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyPolicy.h"

@interface NSPPrivacyProxyPolicyHandler : NSObject {
    BOOL _wifiDisabled;
    BOOL _cellularDisabled;
    NSPPrivacyProxyPolicy *_policy;
    NEPolicySession *_session;
    NEFlowDivertFileHandle *_flowDivertHandle;
    NSString *_ingressProxyURL;
    NSString *_ingressFallbackProxyURL;
    NSArray *_captivePluginBundleIDs;
    NSMutableArray *_mainPolicyIDs;
    NSMutableSet *_disabledInterfaces;
    NSMutableArray *_interfacePolicyIDs;
    NSMutableArray *_safariTechnologyPreviewPolicyIDs;
    NSMutableArray *_safariBundlePolicyIDs;
    NSMutableArray *_mailAppPolicyIDs;
    NSMutableArray *_probePolicyIDs;
    NSMutableDictionary *_domainFilterPolicyIDs;
    NSMutableDictionary *_domainFilterIDs;
    NSMutableDictionary *_obliviousAgentPolicyIDs;
    NSMutableArray *_mptcpProxyPolicyIDs;
    NSMutableArray *_networkToolProxyPolicyIDs;
}




+(id)sharedHandler;
-(BOOL)addPoliciesForMPTCPConverterProxy:(id)arg0 ;
-(BOOL)addPoliciesForProbing;
-(BOOL)set:(id)arg0 flowDivertHandle:(id)arg1 ingressProxyURL:(id)arg2 ingressFallbackProxyURL:(id)arg3 captivePluginBundleIDs:(id)arg4 ;
-(id)currentPolicy;
-(id)init;
-(void)addObliviousProxyAgent:(id)arg0 hostname:(id)arg1 ;
-(void)addPreferredProxy:(id)arg0 agentUUID:(id)arg1 withDomainFilter:(id)arg2 ;
-(void)cellularDisabled:(BOOL)arg0 ;
-(void)handleAppInstallation:(id)arg0 ;
-(void)handleAppUninstallation:(id)arg0 ;
-(void)interface:(id)arg0 disabled:(BOOL)arg1 ;
-(void)remove:(BOOL)arg0 ;
-(void)removeObliviousProxyAgentForHostname:(id)arg0 apply:(BOOL)arg1 ;
-(void)removePoliciesForMPTCPConverterProxy:(BOOL)arg0 ;
-(void)removePreferredProxy:(id)arg0 apply:(BOOL)arg1 ;
-(void)replaceDisabledInterfaces:(id)arg0 ;
-(void)wifiDisabled:(BOOL)arg0 ;


@end


#endif