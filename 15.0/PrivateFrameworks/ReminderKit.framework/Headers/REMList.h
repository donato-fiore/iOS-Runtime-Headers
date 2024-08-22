// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMLIST_H
#define REMLIST_H

@class NSString, NSArray, NSSet, NSDictionary, NSDate, NSOrderedSet, NSData;
@protocol REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMAccount.h"
#import "REMObjectID.h"
#import "REMListAppearanceContext.h"
#import "REMListCalDAVNotificationContext.h"
#import "REMColor.h"
#import "REMList.h"
#import "REMResolutionTokenMap.h"
#import "REMListShareeContext.h"
#import "REMListStorage.h"
#import "REMStore.h"
#import "REMListSublistContext.h"

@interface REMList : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>



@property (readonly, nonatomic) REMAccount *account; // ivar: _account
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMListAppearanceContext *appearanceContext;
@property (readonly, nonatomic) NSString *badgeEmblem;
@property (readonly, nonatomic) REMListCalDAVNotificationContext *calDAVNotificationContext;
@property (readonly, nonatomic) NSArray *calDAVNotifications;
@property (readonly, nonatomic) BOOL canBeIncludedInGroup;
@property (readonly, nonatomic) BOOL canBeShared;
@property (readonly, nonatomic) NSSet *childListIDsToUndelete;
@property (readonly, nonatomic) NSSet *childSmartListIDsToUndelete;
@property (readonly, nonatomic) REMColor *color;
@property (readonly, nonatomic) NSString *currentUserShareParticipantID;
@property (readonly, nonatomic) NSDictionary *daBulkRequests;
@property (readonly, nonatomic) NSInteger daDisplayOrder;
@property (readonly, nonatomic) NSString *daExternalIdentificationTag;
@property (readonly, nonatomic) BOOL daIsEventOnlyContainer;
@property (readonly, nonatomic) BOOL daIsImmutable;
@property (readonly, nonatomic) BOOL daIsNotificationsCollection;
@property (readonly, nonatomic) BOOL daIsReadOnly;
@property (readonly, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) NSString *daSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly, nonatomic) NSString *externalModificationTag;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL isOwnedByMe;
@property (nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedToMe;
@property (readonly, copy, nonatomic) NSDate *lastUserAccessDate;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMList *parentList; // ivar: _parentList
@property (readonly, nonatomic) REMObjectID *parentListID;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering;
@property (readonly, nonatomic) NSData *reminderIDsMergeableOrderingData;
@property (readonly, nonatomic) NSOrderedSet *reminderIDsOrdering;
@property (readonly, nonatomic) NSDictionary *reminderIDsOrderingHints;
@property (readonly, nonatomic) NSSet *reminderIDsToUndelete;
@property (readonly, nonatomic) BOOL remindersICSDisplayOrderChanged;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) NSString *sharedOwnerAddress;
@property (readonly, nonatomic) REMObjectID *sharedOwnerID;
@property (readonly, nonatomic) NSString *sharedOwnerName;
@property (readonly, nonatomic) REMListShareeContext *shareeContext;
@property (readonly, nonatomic) NSArray *sharees;
@property (readonly, nonatomic) NSInteger sharingStatus;
@property (readonly, nonatomic) BOOL showingLargeAttachments;
@property (readonly, nonatomic) NSString *sortingStyle;
@property (copy, nonatomic) REMListStorage *storage; // ivar: _storage
@property (readonly, nonatomic) REMStore *store; // ivar: _store
@property (readonly, nonatomic) REMListSublistContext *sublistContext;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)isChangeTrackableFetchableModel;
+(BOOL)isChangeTrackableModel;
+(BOOL)isOwnedByMeWithSharingStatus:(NSInteger)arg0 ;
+(BOOL)isSharedWithShareeCount:(NSUInteger)arg0 sharingStatus:(NSInteger)arg1 ;
+(BOOL)rem_DA_supportsConcealedObjects;
+(BOOL)rem_DA_supportsFetching;
+(id)cdEntityName;
+(id)fetchRequestWithPredicateDescriptor:(id)arg0 sortDescriptors:(id)arg1 ;
+(id)localAccountDefaultListID;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
+(id)rem_DA_deletedKeyFromConcealedModelObjectBlock:(SEL)arg0 ;
+(id)rem_DA_deletedKeyFromTombstoneBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDsBlock:(SEL)arg0 ;
+(id)rem_DA_propertiesAffectingIsConcealed;
+(id)siriFoundInAppsListID;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldUseExternalIdentifierAsDeletionKey;
-(id)ekColor;
-(id)fetchReminderWithExternalIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)fetchRemindersAndSubtasksWithError:(*id)arg0 ;
-(id)fetchRemindersCountWithError:(*id)arg0 ;
-(id)fetchRemindersWithError:(*id)arg0 ;
-(id)fetchRemindersWithExternalIdentifiers:(id)arg0 error:(*id)arg1 ;
-(id)formattedSharedOwnerName;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithStore:(id)arg0 account:(id)arg1 storage:(id)arg2 ;
-(id)optionalObjectID;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)hack_overrideReminderIDsOrderingWithOrderedObjectIDs:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif