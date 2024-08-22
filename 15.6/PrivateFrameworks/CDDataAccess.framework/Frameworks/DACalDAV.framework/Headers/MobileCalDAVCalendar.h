// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOBILECALDAVCALENDAR_H
#define MOBILECALDAVCALENDAR_H

@class NSMutableDictionary, NSString, NSSet, NSDictionary, NSURL, NSArray, REMAccount, REMList, NSTimeZone;
@protocol CalDAVCalendar, CalDAVPrincipal;

#import <Foundation/Foundation.h>

#import "MobileCalDAVPrincipal.h"

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar>

 {
    MobileCalDAVPrincipal *_principal;
}


@property (retain, nonatomic) NSMutableDictionary *URLToEtagMap; // ivar: _URLToEtagMap
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSSet *allItemURLs;
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *calendarURLString; // ivar: _calendarURLString
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *ctag;
@property (readonly, nonatomic) MobileCalDAVPrincipal *daPrincipal;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableDictionary *deletedCalendarItems; // ivar: _deletedCalendarItems
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didResync; // ivar: _didResync
@property (readonly, nonatomic) NSString *displayColor;
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *hrefsToModDeleteActions; // ivar: _hrefsToModDeleteActions
@property (nonatomic) BOOL isAffectingAvailability; // ivar: _isAffectingAvailability
@property (nonatomic) BOOL isDirty; // ivar: _isDirty
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (nonatomic) BOOL isEventContainer;
@property (nonatomic) BOOL isFamilyCalendar;
@property (readonly, nonatomic) BOOL isHidden;
@property (nonatomic) BOOL isManagedByServer;
@property (nonatomic) BOOL isMarkedImmutableSharees;
@property (nonatomic) BOOL isMarkedUndeletable;
@property (nonatomic) BOOL isNotification;
@property (nonatomic) BOOL isPoll;
@property (nonatomic) BOOL isPublished;
@property (nonatomic) BOOL isRenameable;
@property (nonatomic) BOOL isScheduleInbox;
@property (nonatomic) BOOL isScheduleOutbox; // ivar: _isScheduleOutbox
@property (nonatomic) BOOL isSubscribed;
@property (nonatomic) BOOL isTaskContainer;
@property (retain, nonatomic) NSArray *itemsToReportAsJunk; // ivar: _itemsToReportAsJunk
@property (nonatomic) NSInteger maxAttendees;
@property (readonly, nonatomic) BOOL needsIsAffectingAvailabilityUpdate;
@property (nonatomic) BOOL needsPublishUpdate; // ivar: _needsPublishUpdate
@property (nonatomic) BOOL needsResync; // ivar: _needsResync
@property (retain, nonatomic) NSString *notes;
@property (nonatomic) NSUInteger numDownloadedElements; // ivar: _numDownloadedElements
@property (nonatomic) NSUInteger numUploadedElements; // ivar: _numUploadedElements
@property (nonatomic) int order;
@property (retain, nonatomic) NSURL *owner;
@property (retain, nonatomic) NSString *ownerDisplayName;
@property (readonly, nonatomic) NSString *ownerEmailAddress;
@property (readonly, nonatomic) NSString *ownerPhoneNumber;
@property (retain, nonatomic) NSURL *prePublishURL;
@property (retain, nonatomic) NSSet *preferredCalendarUserAddresses;
@property (weak, nonatomic) NSObject<CalDAVPrincipal> *principal;
@property (retain, nonatomic) NSURL *publishURL;
@property (retain, nonatomic) NSString *pushKey;
@property (readonly, nonatomic) NSArray *recurrenceSplitActions;
@property (readonly, nonatomic) REMAccount *rem_account;
@property (retain, nonatomic) NSArray *rem_cachedFetchedRemindersForMergeSync; // ivar: _rem_cachedFetchedRemindersForMergeSync
@property (retain, nonatomic) REMList *rem_calCalendar; // ivar: _rem_calCalendar
@property (retain, nonatomic) NSArray *shareeActions; // ivar: _shareeActions
@property (retain, nonatomic) NSSet *sharees;
@property (nonatomic) int sharingStatus;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSArray *syncActions; // ivar: _syncActions
@property (retain, nonatomic) NSString *syncToken;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDictionary *uuidsToAddActions; // ivar: _uuidsToAddActions
@property (nonatomic) BOOL wasModifiedLocally; // ivar: _wasModifiedLocally


+(id)_rem_calURLToREMObjectIDCache;
+(id)_rem_changedListsOfChangeType:(NSInteger)arg0 withChangeTrackingHelper:(id)arg1 inPrincipal:(id)arg2 ;
+(id)calendarWithREMList:(id)arg0 principal:(id)arg1 ;
+(id)rem_addedCalendarsWithChangeTrackingHelper:(id)arg0 inPrincipal:(id)arg1 ;
+(id)rem_cachedListObjectIDForURLString:(id)arg0 ;
+(id)rem_deletedCalendarsWithChangeTrackingHelper:(id)arg0 inPrincipal:(id)arg1 ;
+(id)rem_modifiedCalendarsWithChangeTrackingHelper:(id)arg0 inPrincipal:(id)arg1 ;
+(void)rem_cacheListObjectID:(id)arg0 forCalendarURLString:(id)arg1 ;
+(void)rem_clearListObjectIDCache;
+(void)rem_removeListObjectIDCacheEntryForCalendarURLString:(id)arg0 ;
-(BOOL)_addChangedReminder:(id)arg0 toArrayIfNeeded:(id)arg1 ;
-(BOOL)_removeCalendarItemWithURL:(id)arg0 ;
-(BOOL)deleteResourcesAtURLs:(id)arg0 ;
-(BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg0 ;
-(BOOL)hasEvents;
// -(BOOL)rem_setListPropertiesWithBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)setEtag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setEtag:(id)arg0 forItemAtURL:(id)arg1 reminderChangeItem:(id)arg2 ;
-(BOOL)setScheduleTag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setURL:(id)arg0 forResourceWithUUID:(id)arg1 ;
-(BOOL)setURL:(id)arg0 forResourceWithUUID:(id)arg1 reminderChangeItem:(id)arg2 ;
-(BOOL)updateResourcesFromServer:(id)arg0 ;
-(Class)appSpecificCalendarItemClass;
-(id)_createActionsForItems:(id)arg0 withAction:(int)arg1 backingReminders:(id)arg2 alreadySentItems:(id)arg3 createServerIDs:(BOOL)arg4 shouldSave:(*BOOL)arg5 ;
-(id)_preferredAddress;
-(id)_rem_copyReminderWithExternalID:(id)arg0 ;
-(id)_rem_copyReminderWithUniqueIdentifier:(id)arg0 inList:(id)arg1 ;
-(id)calendarUserAddresses;
-(id)copyDeletedItems;
-(id)etagsForItemURLs:(id)arg0 ;
-(id)initWithCalendarURL:(id)arg0 list:(id)arg1 principal:(id)arg2 title:(id)arg3 ;
-(id)initWithCalendarURL:(id)arg0 principal:(id)arg1 ;
-(id)initWithCalendarURL:(id)arg0 principal:(id)arg1 title:(id)arg2 ;
-(id)rem_getCalCalendar;
-(id)rem_initCalCalendarWithTitle:(id)arg0 ;
-(id)rem_saveRequest;
-(id)rem_store;
-(void)_addShareeWithObjectID:(id)arg0 toDictionaryIfNeeded:(id)arg1 ;
-(void)_collectShareeActions;
-(void)_forceRefreshNextSync;
-(void)_prepareForcedRefreshSyncActionsForTruncatedHistoryWithTrackingState:(id)arg0 completionBlock:(id)arg1 ;
-(void)_rem_updateCalendarOwnerInfo;
-(void)_setSupportsEvents:(BOOL)arg0 supportsTodos:(BOOL)arg1 ;
-(void)clearEventChanges;
-(void)clearShareeActions;
-(void)copyAddedItemsWithBatchHandler:(id)arg0 ;
-(void)copyAllItemsWithBatchHandler:(id)arg0 ;
-(void)copyModifiedItemsWithBatchHandler:(id)arg0 ;
-(void)deleteAction:(id)arg0 completedWithError:(id)arg1 ;
-(void)deleteCalendar;
-(void)flushCaches;
-(void)prepareMergeSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)prepareSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)putAction:(id)arg0 completedWithError:(id)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg0 ;
-(void)rem_invalidateCalCalendarWithReload:(BOOL)arg0 ;
-(void)rem_reloadCalCalendar;
-(void)syncDidFinishWithError:(id)arg0 ;


@end


#endif