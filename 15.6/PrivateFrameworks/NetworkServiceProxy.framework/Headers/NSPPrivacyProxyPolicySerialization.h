// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYPOLICYSERIALIZATION_H
#define NSPPRIVACYPROXYPOLICYSERIALIZATION_H


#import <Foundation/Foundation.h>


@interface NSPPrivacyProxyPolicySerialization : NSObject



+(id)createAccountIDBasedPolicies:(id)arg0 accountIdentifier:(id)arg1 platformBinary:(BOOL)arg2 uidRequired:(BOOL)arg3 ;
+(id)createAllPolicies:(id)arg0 machOUUIDs:(id)arg1 exceptionAccount:(id)arg2 ;
+(id)createBootstrapDNSPoliciesForProxyHostnames:(id)arg0 ;
+(id)createDNSPolicies:(id)arg0 proxyHostnames:(id)arg1 ;
+(id)createHTTPPolicies:(id)arg0 skipUnencrypted:(BOOL)arg1 machOUUIDs:(id)arg2 ;
+(id)createPoliciesFromPolicyMask:(int)arg0 flowDivertHandle:(id)arg1 ingressProxyURL:(id)arg2 ingressFallbackProxyURL:(id)arg3 captivePluginBundleIDs:(id)arg4 ;
+(id)createPolicyWithOrder:(unsigned int)arg0 policyResult:(id)arg1 machOUUID:(id)arg2 remotePort:(unsigned short)arg3 protocol:(unsigned short)arg4 otherPolicyConditions:(id)arg5 uidRequired:(BOOL)arg6 ;
+(id)createRemovalPoliciesForCaptivePlugins:(id)arg0 ;
+(id)createRemovalPoliciesForSystemComponents;
+(id)createTrackerPolicies:(id)arg0 webContent:(BOOL)arg1 machOUUIDs:(id)arg2 ;
+(id)createUnencryptedPolicies:(id)arg0 machOUUIDs:(id)arg1 ;
+(id)machoUUIDFromSigningID:(id)arg0 ;
+(id)policiesForMailApp:(id)arg0 ;
+(id)policiesForSafariAppBundles:(id)arg0 safariBundleMachOUUIDs:(id)arg1 ;
+(id)policiesForSafariTechnologyPreview:(id)arg0 ;
+(id)policiesWithProtoBuf:(id)arg0 flowDivertHandle:(id)arg1 ingressProxyURL:(id)arg2 ingressFallbackProxyURL:(id)arg3 captivePluginBundleIDs:(id)arg4 ;
+(id)policyExceptionsForWiFi:(BOOL)arg0 cellular:(BOOL)arg1 interfaceNames:(id)arg2 ;
+(id)preferredProxyPoliciesForAgent:(id)arg0 domainFilter:(NSUInteger)arg1 ;
+(id)probePolicies;
+(id)propertyListWithProtoBuf:(id)arg0 ;
+(id)protoBufWithPropertyList:(id)arg0 ;
+(id)safariBundleMachOUUIDsToInstall:(id)arg0 ;
+(int)policyMaskFromProxyPolicy:(id)arg0 ;
+(void)addDNSPolicyWithOrder:(unsigned int)arg0 toArray:(id)arg1 machOUUID:(id)arg2 ;


@end


#endif