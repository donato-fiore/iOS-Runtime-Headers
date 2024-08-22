// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPPRIVACYPROXYPOLICYHANDLER_H
#define NSPPRIVACYPROXYPOLICYHANDLER_H

@class NSArray, NSMutableSet, NSMutableDictionary, NEFlowDivertFileHandle, NSString, NSMutableArray, NEPolicySession;

#import <Foundation/Foundation.h>

#import "NSPPrivacyProxyPolicy.h"

@interface NSPPrivacyProxyPolicyHandler : NSObject

@property (retain, nonatomic) NSArray *captivePluginBundleIDs; // ivar: _captivePluginBundleIDs
@property (nonatomic) BOOL cellularDisabled; // ivar: _cellularDisabled
@property (retain, nonatomic) NSMutableSet *disabledInterfaces; // ivar: _disabledInterfaces
@property (retain, nonatomic) NSMutableDictionary *domainFilterIDs; // ivar: _domainFilterIDs
@property (retain, nonatomic) NSMutableDictionary *domainFilterPolicyIDs; // ivar: _domainFilterPolicyIDs
@property (retain, nonatomic) NEFlowDivertFileHandle *flowDivertHandle; // ivar: _flowDivertHandle
@property (retain, nonatomic) NSString *ingressFallbackProxyURL; // ivar: _ingressFallbackProxyURL
@property (retain, nonatomic) NSString *ingressProxyURL; // ivar: _ingressProxyURL
@property (retain, nonatomic) NSMutableArray *interfacePolicyIDs; // ivar: _interfacePolicyIDs
@property (retain, nonatomic) NSMutableArray *mailAppPolicyIDs; // ivar: _mailAppPolicyIDs
@property (retain, nonatomic) NSMutableArray *mainPolicyIDs; // ivar: _mainPolicyIDs
@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy; // ivar: _policy
@property (retain, nonatomic) NSMutableArray *probePolicyIDs; // ivar: _probePolicyIDs
@property (retain, nonatomic) NSMutableArray *safariBundlePolicyIDs; // ivar: _safariBundlePolicyIDs
@property (retain, nonatomic) NSMutableArray *safariTechnologyPreviewPolicyIDs; // ivar: _safariTechnologyPreviewPolicyIDs
@property (retain, nonatomic) NEPolicySession *session; // ivar: _session
@property (nonatomic) BOOL wifiDisabled; // ivar: _wifiDisabled


+(id)sharedHandler;
-(BOOL)addPolicies;
-(BOOL)addPoliciesForMailApp;
-(BOOL)addPoliciesForProbing;
-(BOOL)addPoliciesForSafariAppBundle;
-(BOOL)addPoliciesForSafariTechPreviewApp;
-(BOOL)isAppInstalled:(id)arg0 ;
-(BOOL)removePoliciesForMailApp;
-(BOOL)set:(id)arg0 flowDivertHandle:(id)arg1 ingressProxyURL:(id)arg2 ingressFallbackProxyURL:(id)arg3 captivePluginBundleIDs:(id)arg4 ;
-(id)createPolicySession;
-(id)currentPolicy;
-(id)init;
-(id)machOUUIDsForBundleIdentifiers:(id)arg0 ;
-(void)addPreferredProxy:(id)arg0 agentUUID:(id)arg1 withDomainFilter:(id)arg2 ;
-(void)cellularDisabled:(BOOL)arg0 ;
-(void)destroyPolicySession;
-(void)handleAppInstallation:(id)arg0 ;
-(void)handleAppUninstallation:(id)arg0 ;
-(void)interface:(id)arg0 disabled:(BOOL)arg1 ;
-(void)invalidate;
-(void)remove;
-(void)removeDomainFilters;
-(void)removeMainPolicies;
-(void)removePoliciesForProbing;
-(void)removePoliciesForSafariAppBundle;
-(void)removePoliciesForSafariTechPreviewApp;
-(void)removePreferredProxy:(id)arg0 apply:(BOOL)arg1 ;
-(void)replaceDisabledInterfaces:(id)arg0 ;
-(void)resetExceptionInterfacePolicy;
-(void)wifiDisabled:(BOOL)arg0 ;


@end


#endif