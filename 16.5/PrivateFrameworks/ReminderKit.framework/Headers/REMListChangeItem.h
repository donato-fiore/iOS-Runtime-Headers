// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMLISTCHANGEITEM_H
#define REMLISTCHANGEITEM_H

@class NSString, NSArray, NSSet, NSDictionary, NSDate, NSUUID, NSOrderedSet, NSData;
@protocol REMConflictResolving, REMSaveRequestTrackedValue, REMMergeableOrderingNode, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating;

#import <Foundation/Foundation.h>

#import "REMAccountCapabilities.h"
#import "REMObjectID.h"
#import "REMListAppearanceContextChangeItem.h"
#import "REMListCalDAVNotificationContextChangeItem.h"
#import "REMChangedKeysObserver.h"
#import "REMColor.h"
#import "REMAccount.h"
#import "REMResolutionTokenMap.h"
#import "REMSaveRequest.h"
#import "REMListShareeContextChangeItem.h"
#import "REMListStorage.h"
#import "REMListSublistContextChangeItem.h"

@interface REMListChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMMergeableOrderingNode, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating>



@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMListAppearanceContextChangeItem *appearanceContext;
@property (retain, nonatomic) NSString *badgeEmblem;
@property (readonly, nonatomic) REMListCalDAVNotificationContextChangeItem *calDAVNotificationContext;
@property (retain, nonatomic) NSArray *calDAVNotifications;
@property (readonly, nonatomic) BOOL canBeIncludedInGroup;
@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // ivar: _changedKeysObserver
@property (retain, nonatomic) NSSet *childListIDsToUndelete;
@property (retain, nonatomic) NSSet *childSmartListIDsToUndelete;
@property (retain, nonatomic) REMColor *color;
@property (readonly, nonatomic) NSString *currentUserShareParticipantID;
@property (retain, nonatomic) NSDictionary *daBulkRequests;
@property (nonatomic) NSInteger daDisplayOrder;
@property (retain, nonatomic) NSString *daExternalIdentificationTag;
@property (nonatomic) BOOL daIsEventOnlyContainer;
@property (nonatomic) BOOL daIsImmutable;
@property (nonatomic) BOOL daIsNotificationsCollection;
@property (nonatomic) BOOL daIsReadOnly;
@property (copy, nonatomic) NSString *daPushKey;
@property (copy, nonatomic) NSString *daSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isGroup;
@property (readonly, nonatomic) BOOL isOwnedByMe;
@property (nonatomic) BOOL isPinned;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isShared;
@property (readonly, nonatomic) BOOL isSharedToMe;
@property (copy, nonatomic) NSDate *lastUserAccessDate;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (readonly, nonatomic) NSUUID *mostRecentTargetTemplateIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMAccount *parentAccount; // ivar: _parentAccount
@property (retain, nonatomic) REMObjectID *parentAccountID;
@property (retain, nonatomic) REMObjectID *parentListID;
@property (retain, nonatomic) REMObjectID *parentOwnerID;
@property (retain, nonatomic) REMObjectID *parentSubContainerID;
@property (copy, nonatomic) NSDate *pinnedDate;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) NSOrderedSet *reminderIDsMergeableOrdering;
@property (readonly, nonatomic) NSData *reminderIDsMergeableOrderingData;
@property (retain, nonatomic) NSDictionary *reminderIDsOrderingHints;
@property (retain, nonatomic) NSSet *reminderIDsToUndelete;
@property (nonatomic) BOOL remindersICSDisplayOrderChanged;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMSaveRequest *saveRequest; // ivar: _saveRequest
@property (copy, nonatomic) NSString *sharedOwnerAddress;
@property (retain, nonatomic) REMObjectID *sharedOwnerID;
@property (copy, nonatomic) NSString *sharedOwnerName;
@property (readonly, nonatomic) REMListShareeContextChangeItem *shareeContext;
@property (retain, nonatomic) NSArray *sharees;
@property (nonatomic) NSInteger sharingStatus;
@property (nonatomic) BOOL showingLargeAttachments;
@property (copy, nonatomic) NSString *sortingStyle;
@property (readonly, copy, nonatomic) REMListStorage *storage; // ivar: _storage
@property (readonly, nonatomic) REMListSublistContextChangeItem *sublistContext;
@property (readonly) Class superclass;
@property (retain, nonatomic) REMObjectID *templateID;


+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
+(void)initialize;
-(BOOL)_lowLevelAddReminderIDToOrdering:(id)arg0 relativeToSiblingID:(id)arg1 isAfter:(BOOL)arg2 ;
-(BOOL)isSubContainer;
-(BOOL)isUnsupported;
-(BOOL)optimisticallyInsertReminderIDToOrderingForReminderChangeItemBeingSaved:(id)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_testingOnly_listShareeContextChangeItem;
-(id)changedKeys;
-(id)ekColor;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 insertIntoAccountChangeItem:(id)arg2 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 insertIntoAccountChangeItem:(id)arg2 isGroup:(BOOL)arg3 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 insertIntoAccountChangeItem:(id)arg2 isGroup:(BOOL)arg3 withParentList:(id)arg4 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 insertIntoListSublistContextChangeItem:(id)arg2 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 accountCapabilities:(id)arg2 changedKeysObserver:(id)arg3 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 accountCapabilities:(id)arg2 observeInitialValues:(BOOL)arg3 ;
-(id)lowLevelRemoveReminderIDFromOrdering:(id)arg0 ;
-(id)removeFromAccountAllowingUndo;
-(id)removeFromParentAllowingUndo;
-(id)resolutionTokenKeyForChangedKey:(id)arg0 ;
-(id)shallowCopyWithSaveRequest:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_editReminderIDsOrderingUsingBlock:(id)arg0 ;
-(void)_lowLevelAddReminderChangeItemToOrdering:(id)arg0 atIndexOfSibling:(id)arg1 isAfter:(BOOL)arg2 withParent:(id)arg3 ;
-(void)_lowLevelApplyUndoToOrdering:(id)arg0 ;
-(void)_reassignReminderChangeItem:(id)arg0 withParentReminderChangeItem:(id)arg1 ;
-(void)_testingOnly_setReminderIDsMergeableOrder:(id)arg0 ;
-(void)addReminderChangeItem:(id)arg0 ;
-(void)copyListDataFrom:(id)arg0 ;
-(void)insertReminderChangeItem:(id)arg0 adjacentToReminderChangeItem:(id)arg1 isAfter:(BOOL)arg2 withParentReminderChangeItem:(id)arg3 ;
-(void)insertReminderChangeItem:(id)arg0 afterReminderChangeItem:(id)arg1 ;
-(void)insertReminderChangeItem:(id)arg0 beforeReminderChangeItem:(id)arg1 ;
-(void)lowLevelAddReminderIDToOrdering:(id)arg0 withParentReminderChangeItem:(id)arg1 ;
-(void)removeFromParent;
-(void)removeFromParentWithAccountChangeItem:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)undeleteReminderWithID:(id)arg0 usingUndo:(id)arg1 ;
-(void)undeleteRemindersWithoutUndoWithIDs:(id)arg0 isCalDAV:(BOOL)arg1 ;


@end


#endif