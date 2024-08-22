// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMREMINDERCHANGEITEM_H
#define REMREMINDERCHANGEITEM_H

@class NSArray, NSSet, NSDate, NSString, NSDateComponents, NSURL, NSData, NSAttributedString;
@protocol REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating;

#import <Foundation/Foundation.h>

#import "REMAccountCapabilities.h"
#import "REMObjectID.h"
#import "REMReminderAssignmentContextChangeItem.h"
#import "REMReminderAttachmentContextChangeItem.h"
#import "REMChangedKeysObserver.h"
#import "REMContactRepresentation.h"
#import "REMDisplayDate.h"
#import "REMReminderFlaggedContextChangeItem.h"
#import "REMReminderHashtagContextChangeItem.h"
#import "REMListChangeItem.h"
#import "REMCRMergeableStringDocument.h"
#import "REMResolutionTokenMap.h"
#import "REMSaveRequest.h"
#import "REMReminderStorage.h"
#import "REMReminderSubtaskContextChangeItem.h"
#import "REMUserActivity.h"

@interface REMReminderChangeItem : NSObject <REMConflictResolving, REMSaveRequestTrackedValue, REMExternalSyncMetadataWritableProviding, REMSupportedVersionProviding, REMSupportedVersionUpdating>



@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) NSArray *alarms;
@property (readonly, nonatomic) BOOL allDay;
@property (readonly, nonatomic) REMReminderAssignmentContextChangeItem *assignmentContext;
@property (retain, nonatomic) NSSet *assignments;
@property (readonly, nonatomic) REMReminderAttachmentContextChangeItem *attachmentContext;
@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver; // ivar: _changedKeysObserver
@property (nonatomic, getter=isCompleted) BOOL completed;
@property (copy, nonatomic) NSDate *completionDate;
@property (copy, nonatomic) REMContactRepresentation *contactHandles;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *daCalendarItemUniqueIdentifier;
@property (copy, nonatomic) NSString *daPushKey;
@property (copy, nonatomic) NSString *daSyncToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) REMDisplayDate *displayDate;
@property (copy, nonatomic) NSDateComponents *dueDateComponents;
@property (readonly, nonatomic) NSInteger effectiveMinimumSupportedVersion;
@property (copy, nonatomic) NSString *externalIdentifier;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) NSInteger flagged;
@property (readonly, nonatomic) REMReminderFlaggedContextChangeItem *flaggedContext;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) REMReminderHashtagContextChangeItem *hashtagContext;
@property (retain, nonatomic) NSSet *hashtagIDsToUndelete;
@property (retain, nonatomic) NSSet *hashtags;
@property (nonatomic) NSUInteger icsDisplayOrder;
@property (copy, nonatomic) NSURL *icsUrl;
@property (retain, nonatomic) NSData *importedICSData;
@property (readonly, nonatomic) BOOL isOverdue;
@property (readonly, nonatomic) BOOL isRecurrent;
@property (copy, nonatomic) NSDate *lastBannerPresentationDate;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSString *legacyNotificationIdentifier;
@property (readonly, nonatomic) REMListChangeItem *listChangeItem;
@property (retain, nonatomic) REMObjectID *listID;
@property (readonly, nonatomic) NSInteger minimumSupportedVersion;
@property (copy, nonatomic) NSAttributedString *notes;
@property (copy, nonatomic) NSString *notesAsString;
@property (retain, nonatomic) REMCRMergeableStringDocument *notesDocument;
@property (retain, nonatomic) NSData *notesDocumentData;
@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) NSString *primaryLocaleInferredFromLastUsedKeyboard;
@property (nonatomic) NSUInteger priority;
@property (retain, nonatomic) NSArray *recurrenceRules;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly, nonatomic) REMSaveRequest *saveRequest; // ivar: _saveRequest
@property (copy, nonatomic) NSData *siriFoundInAppsData;
@property (nonatomic) NSInteger siriFoundInAppsUserConfirmation;
@property (copy, nonatomic) NSDateComponents *startDateComponents;
@property (retain, nonatomic) REMReminderStorage *storage; // ivar: _storage
@property (readonly, nonatomic) REMReminderSubtaskContextChangeItem *subtaskContext;
@property (retain, nonatomic) NSSet *subtaskIDsToUndelete;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timeZone;
@property (copy, nonatomic) NSAttributedString *title;
@property (copy, nonatomic) NSString *titleAsString;
@property (retain, nonatomic) REMCRMergeableStringDocument *titleDocument;
@property (retain, nonatomic) NSData *titleDocumentData;
@property (copy, nonatomic) REMUserActivity *userActivity;


+(NSInteger)hourForNextThirdsFromHour:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)isSubtask;
-(BOOL)isUnsupported;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(CGFloat)_timeIntervalToAddSinceStartDate:(id)arg0 withNow:(id)arg1 step:(CGFloat)arg2 ;
-(CGFloat)nextRecurrentAdvanceAmountForDateComponents:(id)arg0 afterDate:(id)arg1 ;
-(id)_cleanupOriginalAlarmsForSnoozing;
-(id)_editDocument:(id)arg0 replicaIDSource:(id)arg1 newString:(id)arg2 ;
-(id)addAlarmWithTrigger:(id)arg0 ;
-(id)addRecurrenceRuleWithFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 daysOfTheWeek:(id)arg2 daysOfTheMonth:(id)arg3 monthsOfTheYear:(id)arg4 weeksOfTheYear:(id)arg5 daysOfTheYear:(id)arg6 setPositions:(id)arg7 end:(id)arg8 ;
-(id)addRecurrenceRuleWithFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 end:(id)arg2 ;
-(id)addRecurrenceRuleWithFrequency:(NSInteger)arg0 interval:(NSInteger)arg1 firstDayOfTheWeek:(NSInteger)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9 ;
-(id)changedKeys;
-(id)confirmForSiriFoundInAppsAppendingToList:(id)arg0 ;
-(id)datesDebugDescriptionInTimeZone:(id)arg0 ;
-(id)dedupedAndFilteredNonSnoozeAlarms:(id)arg0 ;
-(id)duplicateForRecurrenceUsingReminderID:(id)arg0 ;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithObjectID:(id)arg0 title:(id)arg1 insertIntoListChangeItem:(id)arg2 ;
-(id)initWithObjectID:(id)arg0 title:(id)arg1 insertIntoParentReminderSubtaskContextChangeItem:(id)arg2 ;
-(id)initWithReminderChangeItem:(id)arg0 insertIntoListChangeItem:(id)arg1 ;
-(id)initWithReminderChangeItem:(id)arg0 insertIntoParentReminderSubtaskContextChangeItem:(id)arg1 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 accountCapabilities:(id)arg2 changedKeysObserver:(id)arg3 ;
-(id)initWithSaveRequest:(id)arg0 storage:(id)arg1 accountCapabilities:(id)arg2 observeInitialValues:(BOOL)arg3 ;
-(id)nextRecurrentDueDateComponentsAfter:(id)arg0 ;
-(id)removeFromListAllowingUndo;
-(id)removeFromParentReminderAllowingUndo;
-(id)resolutionTokenKeyForChangedKey:(id)arg0 ;
-(id)shallowCopyWithSaveRequest:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)_copyAlarmsInto:(id)arg0 ;
-(void)_createSnoozeAlarmWithDateComponents:(id)arg0 ;
-(void)addAlarm:(id)arg0 ;
-(void)addAlarm:(id)arg0 updateDisplayDate:(BOOL)arg1 ;
-(void)addRecurrenceRule:(id)arg0 ;
-(void)copyInto:(id)arg0 ;
-(void)insertRecurrenceRule:(id)arg0 afterRecurrenceRule:(id)arg1 ;
-(void)insertRecurrenceRule:(id)arg0 beforeRecurrenceRule:(id)arg1 ;
-(void)rejectForSiriFoundInApps;
-(void)removeAlarm:(id)arg0 ;
-(void)removeAlarm:(id)arg0 updateDisplayDate:(BOOL)arg1 ;
-(void)removeAllAlarms;
-(void)removeAllRecurrenceRules;
-(void)removeAllSnoozeAlarms;
-(void)removeFromList;
-(void)removeFromParentReminder;
-(void)removeRecurrenceRule:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;
-(void)snoozeForever;
-(void)snoozeFromDueDateForFutureIntegralMultipleOfTimeInterval:(CGFloat)arg0 ;
-(void)snoozeFromNowForTimeInterval:(CGFloat)arg0 ;
-(void)snoozeToDate:(id)arg0 ;
-(void)snoozeToNextThirds;
-(void)updateAccountCapabilities:(id)arg0 ;
-(void)updateDisplayDate;


@end


#endif