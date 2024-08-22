// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMREMINDER_H
#define REMREMINDER_H

@class NSArray, NSSet, NSDate, NSString, NSDateComponents, NSURL, NSData, NSAttributedString;
@protocol REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding;

#import <Foundation/Foundation.h>

#import "REMAccount.h"
#import "REMObjectID.h"
#import "REMReminderAssignmentContext.h"
#import "REMReminderAttachmentContext.h"
#import "REMContactRepresentation.h"
#import "REMDisplayDate.h"
#import "REMReminderFlaggedContext.h"
#import "REMReminderHashtagContext.h"
#import "REMList.h"
#import "REMCRMergeableStringDocument.h"
#import "REMReminder.h"
#import "REMResolutionTokenMap.h"
#import "REMReminderStorage.h"
#import "REMStore.h"
#import "REMReminderSubtaskContext.h"
#import "REMUserActivity.h"

@interface REMReminder : NSObject <REMDAChangeTrackableFetchableModel, REMDAChangedModelObjectResult, _REMDAChangeTrackableModel, REMObjectIDProviding, REMExternalSyncMetadataProviding, REMSupportedVersionProviding>



@property (readonly, nonatomic) REMAccount *account; // ivar: _account
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) REMReminderAssignmentContext *assignmentContext;
@property (readonly, nonatomic) NSSet *assignments;
@property (readonly, nonatomic) REMReminderAttachmentContext *attachmentContext;
@property (readonly, nonatomic) NSArray *attachments;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, copy, nonatomic) NSDate *completionDate;
@property (readonly, nonatomic) REMContactRepresentation *contactHandles;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *daCalendarItemUniqueIdentifier;
@property (readonly, nonatomic) NSString *daPushKey;
@property (readonly, nonatomic) NSString *daSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) REMDisplayDate *displayDate;
@property (readonly, copy, nonatomic) NSDateComponents *dueDateComponents;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (readonly, nonatomic) NSString *externalIdentifier;
@property (readonly, nonatomic) NSString *externalIdentifierForMarkedForDeletionObject;
@property (readonly, nonatomic) NSString *externalModificationTag;
@property (readonly, nonatomic) NSInteger flagged;
@property (readonly, nonatomic) REMReminderFlaggedContext *flaggedContext;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) REMReminderHashtagContext *hashtagContext;
@property (readonly, nonatomic) NSSet *hashtagIDsToUndelete;
@property (readonly, nonatomic) NSSet *hashtags;
@property (readonly, nonatomic) NSUInteger icsDisplayOrder;
@property (readonly, nonatomic) NSURL *icsUrl;
@property (readonly, nonatomic) NSData *importedICSData;
@property (readonly, nonatomic) BOOL isOverdue;
@property (readonly, nonatomic) BOOL isRecurrent;
@property (readonly, nonatomic) NSDate *lastBannerPresentationDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSString *legacyNotificationIdentifier;
@property (readonly, nonatomic) REMList *list; // ivar: _list
@property (retain, nonatomic) REMObjectID *listID;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (readonly, copy, nonatomic) NSAttributedString *notes;
@property (readonly, nonatomic) NSString *notesAsString;
@property (readonly, nonatomic) REMCRMergeableStringDocument *notesDocument;
@property (readonly, nonatomic) NSData *notesDocumentData;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMReminder *parentReminder; // ivar: _parentReminder
@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) NSString *primaryLocaleInferredFromLastUsedKeyboard;
@property (readonly, nonatomic) NSUInteger priority;
@property (readonly, nonatomic) NSArray *recurrenceRules;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (readonly, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) NSData *siriFoundInAppsData;
@property (readonly, nonatomic) NSInteger siriFoundInAppsUserConfirmation;
@property (readonly, copy, nonatomic) NSDateComponents *startDateComponents;
@property (readonly, nonatomic) REMReminderStorage *storage; // ivar: _storage
@property (readonly, nonatomic) REMStore *store; // ivar: _store
@property (readonly, nonatomic) REMReminderSubtaskContext *subtaskContext;
@property (readonly, nonatomic) NSSet *subtaskIDsToUndelete;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timeZone;
@property (readonly, copy, nonatomic) NSAttributedString *title;
@property (readonly, nonatomic) NSString *titleAsString;
@property (readonly, nonatomic) REMCRMergeableStringDocument *titleDocument;
@property (readonly, nonatomic) NSData *titleDocumentData;
@property (readonly, nonatomic) REMUserActivity *userActivity;


+(BOOL)isChangeTrackableFetchableModel;
+(BOOL)isChangeTrackableModel;
+(BOOL)rem_DA_supportsConcealedObjects;
+(BOOL)rem_DA_supportsFetching;
+(id)cdEntityName;
+(id)fetchRequestForRemindersListID:(id)arg0 ;
+(id)fetchRequestForRemindersListID:(id)arg0 withSortDescriptors:(id)arg1 ;
+(id)fetchRequestForScheduledRemindersWithDueDateOnOrAfter:(id)arg0 ;
+(id)fetchRequestWithPredicateDescriptor:(id)arg0 sortDescriptors:(id)arg1 ;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
+(id)rem_DA_deletedKeyFromConcealedModelObjectBlock:(SEL)arg0 ;
+(id)rem_DA_deletedKeyFromTombstoneBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDBlock:(SEL)arg0 ;
+(id)rem_DA_fetchByObjectIDsBlock:(SEL)arg0 ;
+(id)rem_DA_propertiesAffectingIsConcealed;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSubtask;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(BOOL)shouldUseExternalIdentifierAsDeletionKey;
-(id)datesDebugDescriptionInTimeZone:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithStore:(id)arg0 account:(id)arg1 storage:(id)arg2 ;
-(id)initWithStore:(id)arg0 list:(id)arg1 storage:(id)arg2 ;
-(id)initWithStore:(id)arg0 storage:(id)arg1 ;
-(id)optionalObjectID;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif