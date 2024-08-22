// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKENTITLEMENTS_H
#define CKENTITLEMENTS_H

@class NSString, NSDictionary, NSError, NSArray;
@protocol CKSQLiteItem;

#import <Foundation/Foundation.h>


@interface CKEntitlements : NSObject <CKSQLiteItem>

 {
    int _pid;
    NSString *_cachedApplicationBundleID;
    NSDictionary *_entitlementsDict;
    NSError *_secEntitlementsError;
    NSString *_procName;
}


@property (readonly) NSString *applicationBundleID;
@property (readonly, nonatomic) NSString *apsEnvironmentEntitlement;
@property (readonly, nonatomic) NSString *associatedApplicationBundleID;
@property (readonly, nonatomic) NSString *clientPrefixEntitlement;
@property (readonly, nonatomic) NSArray *cloudServices;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByContainerAndServiceEntitlement;
@property (readonly, nonatomic) NSDictionary *codeServiceURLByServiceEntitlement;
@property (readonly, nonatomic) NSString *codeServiceURLEntitlement;
@property (readonly, nonatomic) NSInteger containerEnvironment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *developmentContainerEnvironmentOverrides;
@property (readonly, nonatomic) BOOL hasAllowAccessDuringBuddyEntitlement;
@property (readonly, nonatomic) BOOL hasAllowFakeEntitlementsEntitlement;
@property (readonly, nonatomic) BOOL hasAllowOnDeviceAssetStreamingEntitlement;
@property (readonly, nonatomic) BOOL hasAllowPackagesEntitlement;
@property (readonly, nonatomic) BOOL hasAllowRealTimeOperationsEntitlement;
@property (readonly, nonatomic) BOOL hasAllowUnverifiedAccountEntitlement;
@property (readonly, nonatomic) BOOL hasAlwaysAllowPublishAssetsEntitlement;
@property (readonly, nonatomic) BOOL hasCloudKitSupportServiceEntitlement;
@property (readonly, nonatomic) BOOL hasCloudKitSystemServiceEntitlement;
@property (readonly, nonatomic) BOOL hasCustomAccountsEntitlement;
@property (readonly, nonatomic) BOOL hasDarkWakeNetworkReachabilityEnabledEntitlement;
@property (readonly, nonatomic) BOOL hasDeviceIdentifierEntitlement;
@property (readonly, nonatomic) BOOL hasDisplaysSystemAcceptPromptEntitlement;
@property (readonly, nonatomic) BOOL hasEnvironmentEntitlement;
@property (readonly, nonatomic) BOOL hasExplicitCodeOperationURLEntitlement;
@property (readonly, nonatomic) BOOL hasLightweightPCSEntitlement;
@property (readonly, nonatomic) BOOL hasMasqueradingEntitlement;
@property (readonly, nonatomic) BOOL hasNonLegacyShareURLEntitlement;
@property (readonly, nonatomic) BOOL hasOutOfProcessUIEntitlement;
@property (readonly, nonatomic) BOOL hasParticipantPIIEntitlement;
@property (readonly, nonatomic) BOOL hasProtectionDataEntitlement;
@property (readonly, nonatomic) BOOL hasSPIEntitlement;
@property (readonly, nonatomic) BOOL hasSystemLaunchDaemonEntitlement;
@property (readonly, nonatomic) BOOL hasVFSOpenByIDEntitlement;
@property (readonly, nonatomic) BOOL hasZoneProtectionDataEntitlement;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBackgroundAssetsExtension;
@property (readonly, nonatomic) NSDictionary *serviceNameForContainerIdentifierMapEntitlement;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)validateEntitlementsWithSDKVersion:(unsigned int)arg0 error:(*id)arg1 ;
-(id)entitlementsByAddingOverlay:(id)arg0 ;
-(id)initWithAuditToken:(struct ? )arg0 pid:(int)arg1 ;
-(id)initWithCurrentProcess;
-(id)initWithEntitlementsDict:(id)arg0 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)sqliteRepresentation;
-(void)ck_bindInStatement:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif