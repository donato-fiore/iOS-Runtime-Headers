// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMACCOUNTSTORAGE_H
#define REMACCOUNTSTORAGE_H

@class NSString, NSData, NSSet;
@protocol NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMAccountTypeHost.h"
#import "REMCRMergeableOrderedSet.h"
#import "REMObjectID.h"
#import "REMManualOrdering.h"
#import "REMResolutionTokenMap.h"

@interface REMAccountStorage : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding, REMExternalSyncMetadataWritableProviding, REMObjectStorageSupportedVersionProviding>

 {
    REMAccountTypeHost *_accountTypeHost;
    NSUInteger _storeGeneration;
    NSUInteger _copyGeneration;
    os_unfair_lock_s _lock;
    REMCRMergeableOrderedSet *_listIDsMergeableOrdering;
    BOOL _isAddingExtraPrimaryCKAccountForTesting;
    NSInteger minimumSupportedVersion;
    NSInteger effectiveMinimumSupportedVersion;
}


@property (nonatomic) BOOL daAllowsCalendarAddDeleteModify; // ivar: _daAllowsCalendarAddDeleteModify
@property (copy, nonatomic) NSString *daConstraintsDescriptionPath; // ivar: _daConstraintsDescriptionPath
@property (copy, nonatomic) NSString *daPushKey; // ivar: daPushKey
@property (nonatomic) BOOL daSupportsSharedCalendars; // ivar: _daSupportsSharedCalendars
@property (copy, nonatomic) NSString *daSyncToken; // ivar: daSyncToken
@property (nonatomic) BOOL daWasMigrated; // ivar: _daWasMigrated
@property (nonatomic) BOOL debugSyncDisabled; // ivar: _debugSyncDisabled
@property (nonatomic) BOOL didChooseToMigrate; // ivar: _didChooseToMigrate
@property (nonatomic) BOOL didChooseToMigrateLocally; // ivar: _didChooseToMigrateLocally
@property (nonatomic) BOOL didFinishMigration; // ivar: _didFinishMigration
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (copy, nonatomic) NSString *externalIdentifier; // ivar: externalIdentifier
@property (copy, nonatomic) NSString *externalModificationTag; // ivar: externalModificationTag
@property (nonatomic) BOOL inactive; // ivar: _inactive
@property (retain, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (retain, nonatomic) NSData *listIDsMergeableOrderingData; // ivar: _listIDsMergeableOrderingData
@property (retain, nonatomic) NSSet *listIDsToUndelete; // ivar: _listIDsToUndelete
@property (nonatomic) BOOL listsDADisplayOrderChanged; // ivar: _listsDADisplayOrderChanged
@property (nonatomic) BOOL markedForRemoval; // ivar: _markedForRemoval
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (nonatomic) NSInteger persistenceCloudSchemaVersion; // ivar: _persistenceCloudSchemaVersion
@property (copy, nonatomic) NSString *personID; // ivar: _personID
@property (copy, nonatomic) NSData *personIDSalt; // ivar: _personIDSalt
@property (retain, nonatomic) REMManualOrdering *pinnedListsManualOrdering; // ivar: _pinnedListsManualOrdering
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap; // ivar: _resolutionTokenMap
@property (retain, nonatomic) NSData *resolutionTokenMapData; // ivar: _resolutionTokenMapData
@property (retain, nonatomic) NSSet *smartListIDsToUndelete; // ivar: _smartListIDsToUndelete
@property (retain, nonatomic) REMManualOrdering *templatesManualOrdering; // ivar: _templatesManualOrdering
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)listIDsMergeableOrderingReplicaIDSourceWithAccountID:(id)arg0 ;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)_isAddingExtraPrimaryCKAccountForTesting;
-(BOOL)hasDeserializedListIDsMergeableOrdering;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(NSUInteger)hash;
-(NSUInteger)storeGeneration;
-(id)accountTypeHost;
-(id)cdKeyToStorageKeyMap;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 type:(NSInteger)arg1 name:(id)arg2 ;
-(id)initWithObjectID:(id)arg0 type:(NSInteger)arg1 name:(id)arg2 listIDsMergeableOrdering:(id)arg3 ;
-(id)initWithObjectID:(id)arg0 type:(NSInteger)arg1 name:(id)arg2 nullableListIDsMergeableOrdering:(id)arg3 ;
-(id)optionalObjectID;
-(id)serializedListIDsMergeableOrdering;
-(void)_setIsAddingExtraPrimaryCKAccountForTesting:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setStoreGenerationIfNeeded:(NSUInteger)arg0 ;


@end


#endif