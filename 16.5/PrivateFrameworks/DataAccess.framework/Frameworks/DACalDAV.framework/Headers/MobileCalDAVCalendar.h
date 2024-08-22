// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MOBILECALDAVCALENDAR_H
#define MOBILECALDAVCALENDAR_H

@class NSMutableDictionary, NSSet, NSMutableArray, NSString, NSDictionary, CalDiagCalendarCollectionSync, NSURL, NSArray, NSTimeZone;
@protocol CalDAVCalendar, CDBRecordIDMap, CalDAVPrincipal;

#import <Foundation/Foundation.h>

#import "MobileCalDAVPrincipal.h"
#import "CalDAVDBChangeTrackingHelper.h"

@interface MobileCalDAVCalendar : NSObject <CalDAVCalendar, CDBRecordIDMap>

 {
    MobileCalDAVPrincipal *_principal;
    *void _calCalendar;
    NSMutableDictionary *_changesToClear;
    NSSet *_deletedExternalIDs;
    NSMutableArray *_newlyAddedItems;
}


@property (retain, nonatomic) NSMutableDictionary *URLToEtagMap; // ivar: _URLToEtagMap
@property (retain, nonatomic) NSMutableDictionary *URLToRecordIDMap; // ivar: _URLToRecordIDMap
@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) NSSet *allItemURLs;
@property (nonatomic) BOOL becameDefaultSchedulingCalendar; // ivar: _becameDefaultSchedulingCalendar
@property (retain, nonatomic) NSDictionary *bulkRequests;
@property (readonly, nonatomic) *void calCalendar;
@property (retain, nonatomic) CalDiagCalendarCollectionSync *calendarCollectionSyncDiagnostics; // ivar: _calendarCollectionSyncDiagnostics
@property (retain, nonatomic) NSURL *calendarURL;
@property (retain, nonatomic) NSString *calendarURLString; // ivar: _calendarURLString
@property (nonatomic) BOOL canBePublished;
@property (nonatomic) BOOL canBeShared;
@property (retain, nonatomic) CalDAVDBChangeTrackingHelper *changeTracker; // ivar: _changeTracker
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
@property (nonatomic) BOOL isAffectingAvailability;
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
@property (retain, nonatomic) NSString *lastSyncTitle; // ivar: _lastSyncTitle
@property (nonatomic) NSInteger maxAttendees;
@property (readonly, nonatomic) BOOL mustCalendarBeReadOnly;
@property (nonatomic) BOOL needsIsAffectingAvailabilityUpdate; // ivar: _needsIsAffectingAvailabilityUpdate
@property (nonatomic) BOOL needsPublishUpdate; // ivar: _needsPublishUpdate
@property (nonatomic) BOOL needsResync; // ivar: _needsResync
@property (retain, nonatomic) NSArray *newlyAddedItems;
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
@property (retain, nonatomic) NSArray *recurrenceSplitActions; // ivar: _recurrenceSplitActions
@property (retain, nonatomic) NSArray *shareeActions; // ivar: _shareeActions
@property (retain, nonatomic) NSSet *sharees;
@property (nonatomic) int sharingStatus;
@property (readonly, nonatomic) BOOL shouldCalendarBeHidden;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *symbolicColorName;
@property (retain, nonatomic) NSArray *syncActions; // ivar: _syncActions
@property (retain, nonatomic) NSString *syncToken;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableDictionary *uniqueIdentifierToRecordIDMap; // ivar: _uniqueIdentifierToRecordIDMap
@property (retain, nonatomic) NSDictionary *uuidsToAddActions; // ivar: _uuidsToAddActions
@property (nonatomic) BOOL wasModifiedLocally; // ivar: _wasModifiedLocally


+(BOOL)clearCalendarChanges:(struct __CFArray *)arg0 forPrincipal:(id)arg1 changeTrackingClient:(id)arg2 ;
+(BOOL)shouldSkipAddedCalendar:(*void)arg0 ;
+(BOOL)shouldSkipCalendar:(*void)arg0 withChangeType:(int)arg1 ;
+(BOOL)shouldSkipModifiedCalendar:(*void)arg0 ;
+(id)calURLToUIDCache;
+(id)calendarWithCalCalendar:(*void)arg0 principal:(id)arg1 ;
+(int)cachedCalendarUIDForURLString:(id)arg0 ;
+(struct __CFArray *)gatherCalendarChangesInPrincipal:(id)arg0 calendars:(id)arg1 adds:(*id)arg2 modifies:(*id)arg3 deletes:(*id)arg4 changeTracker:(id)arg5 ;
+(void)cacheCalendarUID:(int)arg0 forCalendarURLString:(id)arg1 ;
+(void)clearCalendarUIDCache;
+(void)processAddedCalendar:(id)arg0 ;
+(void)processModifiedCalendar:(id)arg0 oldFlags:(unsigned int)arg1 newFlags:(unsigned int)arg2 ;
+(void)removeUIDCacheEntryForCalendarURLString:(id)arg0 ;
-(*void)_copyCalItemWithExternalID:(id)arg0 ;
-(*void)_copyCalItemWithUniqueIdentifier:(id)arg0 inCalendar:(*void)arg1 orStore:(*void)arg2 ;
-(*void)getCalCalendar;
-(*void)initCalCalendarWithTitle:(id)arg0 ;
-(?)correctLocationPredictionStateForRecurrenceSetscalDB;
-(BOOL)_isDeleted:(id)arg0 ;
-(BOOL)_isItemJunk:(*void)arg0 ;
-(BOOL)_removeCalendarItemWithURL:(id)arg0 ;
-(BOOL)_shouldRecordError:(id)arg0 ;
-(BOOL)deleteResourcesAtURLs:(id)arg0 ;
-(BOOL)hasCalendarErrorOfType:(NSUInteger)arg0 ;
-(BOOL)hasCalendarUserAddressEquivalentToURL:(id)arg0 ;
-(BOOL)hasEvents;
-(BOOL)setEtag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setScheduleTag:(id)arg0 forItemAtURL:(id)arg1 ;
-(BOOL)setURL:(id)arg0 forResourceWithUUID:(id)arg1 ;
-(BOOL)updateResourcesFromServer:(id)arg0 ;
-(Class)appSpecificCalendarItemClass;
-(id)_calExternalRep;
-(id)_copyDeletedEventActions;
-(id)_createActionsForItems:(id)arg0 withAction:(int)arg1 alreadySentItems:(id)arg2 createServerIDs:(BOOL)arg3 shouldSave:(*BOOL)arg4 ;
-(id)_itemPropertyDictForItemAtIndex:(NSInteger)arg0 withChangedIDs:(struct __CFArray *)arg1 withChangedRowids:(struct __CFArray *)arg2 withExternalIDs:(struct __CFArray *)arg3 uniqueIdentifiers:(struct __CFArray *)arg4 significantAttributeChanges:(struct __CFArray *)arg5 oldCalendarIDs:(struct __CFArray *)arg6 entityType:(int)arg7 ;
-(id)_preferredAddress;
-(id)_recurrenceSplitActionsForItems:(id)arg0 alreadySentItems:(id)arg1 ;
-(id)_resourceURLsForJunkItemsInModifiedItems:(id)arg0 alreadySentItems:(id)arg1 ;
-(id)calendarUserAddresses;
-(id)copyAddedItems;
-(id)copyAllItems;
-(id)copyDeletedItems;
-(id)copyModifiedItems;
-(id)copyRecurrenseSplitItems;
-(id)etagsForItemURLs:(id)arg0 ;
-(id)initWithCalendarURL:(id)arg0 calendar:(*void)arg1 principal:(id)arg2 title:(id)arg3 ;
-(id)initWithCalendarURL:(id)arg0 principal:(id)arg1 ;
-(id)initWithCalendarURL:(id)arg0 principal:(id)arg1 title:(id)arg2 ;
-(id)removeInvitationsForItemWithUniqueIdentifier:(id)arg0 ;
-(struct CalRecordID *)recordIDForExternalIdentifier:(id)arg0 ;
-(struct CalRecordID *)recordIDForUniqueIdentifier:(id)arg0 ;
-(void)_addAddedItemsOfType:(int)arg0 toArray:(id)arg1 ;
-(void)_addAddedRecurrenceSplitItemsToArray:(id)arg0 ;
-(void)_addCalendarItemWithRowID:(int)arg0 toArrayIfNeeded:(id)arg1 withChangeRowid:(int)arg2 changeType:(id)arg3 ;
-(void)_addShareeWithRowID:(id)arg0 toDictionaryIfNeeded:(id)arg1 ;
-(void)_clearChangesAtIndices:(id)arg0 forType:(int)arg1 ;
-(void)_clearChangesFromItem:(id)arg0 ;
-(void)_clearChangesFromItem:(id)arg0 shouldClearAttachmentChanges:(BOOL)arg1 ;
-(void)_clearExistingHTTPErrorForCalItem:(*void)arg0 ;
-(void)_collectShareeActions;
-(void)_dropCalStoreContext;
-(void)_forceRefreshNextSync;
-(void)_gatherDeletedChanges:(*unk)arg0 inDictionary:(id)arg1 ;
-(void)_gatherModifiedEventsInArray:(id)arg0 ;
-(void)_gatherModifiedItemsFromCalChangesCall:(*unk)arg0 forType:(id)arg1 inArray:(id)arg2 ;
-(void)_gatherModifiedTasksInArray:(id)arg0 ;
-(void)_recordError:(id)arg0 forCalItem:(*void)arg1 ;
-(void)_saveChangesAtIndices:(id)arg0 forType:(int)arg1 ;
-(void)_saveChangesForItem:(id)arg0 ;
-(void)_setSupportsEvents:(BOOL)arg0 supportsTodos:(BOOL)arg1 ;
-(void)_updateCalendarInfo;
-(void)addChangesToBeCleared:(struct __CFArray *)arg0 forEntityType:(int)arg1 ;
-(void)clearCalendarErrorOfType:(NSUInteger)arg0 ;
-(void)clearChangesForEntityType:(int)arg0 ;
-(void)clearEventChanges;
-(void)clearShareeActions;
-(void)createSyncActions;
-(void)dealloc;
-(void)deleteAction:(id)arg0 completedWithError:(id)arg1 ;
-(void)deleteCalendar;
-(void)flushCaches;
-(void)generateICSForActions;
-(void)prepareMergeSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)prepareSyncActionsWithCompletionBlock:(id)arg0 ;
-(void)putAction:(id)arg0 completedWithError:(id)arg1 ;
-(void)recordCalendarError:(id)arg0 ofType:(NSUInteger)arg1 ;
-(void)recordDiagnosticsForAccountSync:(id)arg0 ;
-(void)recurrenceSplitAction:(id)arg0 completedWithUpdatedETag:(id)arg1 updatedScheduleTag:(id)arg2 createdURL:(id)arg3 createdETag:(id)arg4 createdScheduleTag:(id)arg5 ;
-(void)recurrenceSplitAction:(id)arg0 failedWithError:(id)arg1 ;
-(void)recurrenceSplitActionsCompletedWithError:(id)arg0 ;
-(void)setExternalIdentifier:(id)arg0 forRecordID:(struct CalRecordID *)arg1 ;
-(void)setUniqueIdentifier:(id)arg0 forRecordID:(struct CalRecordID *)arg1 ;
-(void)syncDidFinishWithError:(id)arg0 ;


@end


#endif