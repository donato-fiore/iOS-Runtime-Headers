// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMENTITLEMENTS_H
#define MCMENTITLEMENTS_H

@class NSDictionary, NSSet, NSString;
@protocol MCMEntitlements;

#import <Foundation/Foundation.h>


@interface MCMEntitlements : NSObject <MCMEntitlements>

 {
    NSDictionary *_sanitizedLookup;
    NSSet *_sanitizedWipe;
    BOOL _isSimulatorTestClient;
}


@property (readonly, nonatomic) BOOL allowed;
@property (readonly, nonatomic) BOOL canControlCaches;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canDeleteContainerContent;
@property (readonly, nonatomic) BOOL canManageUserManagedAssets;
@property (readonly, nonatomic) BOOL canPerformDataMigration;
@property (readonly, nonatomic) BOOL canReadReferences;
@property (readonly, nonatomic) BOOL canReadWriteReferences;
@property (readonly, nonatomic) BOOL canRepair;
@property (readonly, nonatomic) BOOL canStageSharedContent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSystemContainer;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSDictionary *lookup; // ivar: _lookup
@property (readonly, nonatomic) BOOL otherIDLookup;
@property (readonly, nonatomic) BOOL privileged; // ivar: _privileged
@property (readonly, nonatomic) BOOL proxyAllowed;
@property (retain, nonatomic) NSDictionary *rawEntitlements; // ivar: _rawEntitlements
@property (readonly, nonatomic) BOOL requestsNoContainer;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL testabilityAllowed;


+(id)appGroupIdentifiersForIdentifier:(id)arg0 entitlements:(id)arg1 ;
+(id)copyGroupEntitlementForIdentifier:(id)arg0 entitlements:(id)arg1 groupKey:(id)arg2 ;
+(id)entitlementForGroupContainerClass:(NSUInteger)arg0 ;
+(id)systemGroupIdentifiersForIdentifier:(id)arg0 entitlements:(id)arg1 ;
-(BOOL)isAllowedToAccessCodesignMapping;
-(BOOL)isAllowedToAccessInfoMetadata;
-(BOOL)isAllowedToAccessUserAssets;
-(BOOL)isAllowedToChangeReferences;
-(BOOL)isAllowedToControlCaches;
-(BOOL)isAllowedToDelete;
-(BOOL)isAllowedToLookupAllContainersOfClass:(NSUInteger)arg0 ;
-(BOOL)isAllowedToLookupContainerIdentity:(id)arg0 ;
-(BOOL)isAllowedToLookupGroupContainersOfClass:(NSUInteger)arg0 ownedByIdentifier:(id)arg1 ;
-(BOOL)isAllowedToReadReferences;
-(BOOL)isAllowedToRecreateContainerStructure;
-(BOOL)isAllowedToRegenerateDirectoryUUIDs;
-(BOOL)isAllowedToReplaceContainers;
-(BOOL)isAllowedToRestoreContainer;
-(BOOL)isAllowedToSetDataProtection;
-(BOOL)isAllowedToStageSharedContent;
-(BOOL)isAllowedToStartDataMigration;
-(BOOL)isAllowedToStartUserDataMigration;
-(BOOL)isAllowedToTest;
-(BOOL)isAllowedToWipeAnyDataContainer;
-(BOOL)isAllowedToWipePlugInDataContainerWithIdentifier:(id)arg0 ;
-(BOOL)isEntitledForLookupWithClass:(NSUInteger)arg0 identifier:(id)arg1 ;
-(BOOL)isOwnerOfContainerWithClass:(NSUInteger)arg0 identifier:(id)arg1 ;
-(id)_setOfStringsFromArray:(id)arg0 ;
-(id)appGroupIdentifiers;
-(id)containerRequiredIdentifier;
-(id)copyEntitlementsDictionaryByAddingGroupContainerOfClass:(NSUInteger)arg0 groupIdentifier:(id)arg1 ;
-(id)copyEntitlementsDictionaryByRemovingGroupContainerOfClass:(NSUInteger)arg0 groupIdentifier:(id)arg1 ;
-(id)initForPrivilegedAnonymous;
-(id)initWithEntitlements:(id)arg0 clientIdentifier:(id)arg1 ;
-(id)lookupForContainerClass:(NSUInteger)arg0 ;
-(id)systemGroupIdentifiers;
-(int)intendedDataProtectionClass;
-(void)prune;


@end


#endif