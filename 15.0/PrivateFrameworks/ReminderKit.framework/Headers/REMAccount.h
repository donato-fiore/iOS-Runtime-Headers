// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMACCOUNT_H
#define REMACCOUNT_H

@class NSString, NSOrderedSet, NSSet, NSData;
@protocol REMPersonIDProviding, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMAccountCapabilities.h"
#import "REMAccountGroupContext.h"
#import "REMCRMergeableOrderedSet.h"
#import "REMObjectID.h"
#import "REMResolutionTokenMap.h"
#import "REMAccountStorage.h"
#import "REMStore.h"

@interface REMAccount : NSObject <REMPersonIDProviding, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>



@property (retain, nonatomic) REMAccountCapabilities *capabilities; // ivar: _capabilities
@property (readonly, nonatomic) BOOL daAllowsCalendarAddDeleteModify;
@property (readonly, nonatomic) NSString *daConstraintsDescriptionPath;
@property (readonly, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) BOOL daSupportsPhoneNumbers;
@property (readonly, nonatomic) BOOL daSupportsSharedCalendars;
@property (readonly, nonatomic) NSString *daSyncToken;
@property (readonly, nonatomic) BOOL daWasMigrated;
@property (readonly, nonatomic) BOOL didChooseToMigrate;
@property (readonly, nonatomic) BOOL didChooseToMigrateLocally;
@property (readonly, nonatomic) BOOL didFinishMigration;
@property (retain, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) REMAccountGroupContext *groupContext;
@property (readonly, nonatomic) BOOL inactive;
@property (readonly, nonatomic) REMCRMergeableOrderedSet *listIDsMergeableOrdering;
@property (readonly, nonatomic) NSOrderedSet *listIDsOrdering;
@property (readonly, nonatomic) NSSet *listIDsToUndelete;
@property (readonly, nonatomic) BOOL listsDADisplayOrderChanged;
@property (nonatomic) BOOL markedForRemoval; // ivar: _markedForRemoval
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) NSInteger persistenceCloudSchemaVersion;
@property (copy, nonatomic) NSString *personID;
@property (copy, nonatomic) NSData *personIDSalt;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) NSSet *smartListIDsToUndelete;
@property (readonly, copy, nonatomic) REMAccountStorage *storage; // ivar: _storage
@property (retain, nonatomic) REMStore *store; // ivar: _store
@property (readonly, nonatomic) BOOL supportsSharingLists;
@property (readonly, nonatomic) NSInteger type;


+(id)_accountTypeMaskWithBitMask:(NSInteger)arg0 ;
+(id)cdEntityName;
+(id)localAccountID;
+(id)localInternalAccountID;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)MCIsManagedWithResultPtr:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)canCopyReminderLosslesslyToAccount:(id)arg0 ;
-(BOOL)isConsideredEmptyWithResultPtr:(*BOOL)arg0 withError:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldUseExternalIdentifierAsDeletionKey;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)fetchCustomSmartListsWithError:(*id)arg0 ;
-(id)fetchListIncludingSpecialContainerWithExternalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchListsIncludingSpecialContainersWithError:(*id)arg0 ;
-(id)fetchListsWithError:(*id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithStore:(id)arg0 storage:(id)arg1 ;
-(id)optionalObjectID;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif