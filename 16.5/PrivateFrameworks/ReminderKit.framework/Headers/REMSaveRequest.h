// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMSAVEREQUEST_H
#define REMSAVEREQUEST_H

@class NSString, NSMutableSet, NSMutableDictionary;
@protocol REMSaveRequestNotifyChangeDelegate, REMReplicaManagerProviding;

#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMSaveRequest : NSObject

@property (nonatomic) BOOL applyCRDTsWithoutMerging; // ivar: _applyCRDTsWithoutMerging
@property (copy, nonatomic) NSString *author; // ivar: _author
@property (nonatomic) BOOL cloneCompletedRecurrentRemindersAtSave; // ivar: _cloneCompletedRecurrentRemindersAtSave
@property (weak, nonatomic) NSObject<REMSaveRequestNotifyChangeDelegate> *notifyChangeDelegate; // ivar: _notifyChangeDelegate
@property (retain, nonatomic) NSObject<REMReplicaManagerProviding> *replicaManagerProvider; // ivar: _replicaManagerProvider
@property (nonatomic) BOOL saveIsNoopIfNoChangedKeys; // ivar: _saveIsNoopIfNoChangedKeys
@property (retain, nonatomic) NSMutableSet *saveRequestChangeEvents; // ivar: _saveRequestChangeEvents
@property (nonatomic, getter=isSaved) BOOL saved; // ivar: _saved
@property (readonly, nonatomic) REMStore *store; // ivar: _store
@property (nonatomic) BOOL syncToCloudKit; // ivar: _syncToCloudKit
@property (readonly, nonatomic) NSMutableDictionary *trackedAccountCapabilities; // ivar: _trackedAccountCapabilities
@property (readonly, nonatomic) NSMutableDictionary *trackedAccountChangeItems; // ivar: _trackedAccountChangeItems
@property (readonly, nonatomic) NSMutableDictionary *trackedListChangeItems; // ivar: _trackedListChangeItems
@property (readonly, nonatomic) NSMutableDictionary *trackedReminderChangeItems; // ivar: _trackedReminderChangeItems
@property (readonly, nonatomic) NSMutableDictionary *trackedSmartListChangeItems; // ivar: _trackedSmartListChangeItems
@property (readonly, nonatomic) NSMutableDictionary *trackedTemplateChangeItems; // ivar: _trackedTemplateChangeItems
@property (nonatomic) BOOL updateLastModifiedDates; // ivar: _updateLastModifiedDates


-(BOOL)_changeItemsAreAllEmpty;
-(BOOL)saveSynchronouslyWithError:(*id)arg0 ;
-(BOOL)updateReminderChangeItem:(id)arg0 fromICSData:(id)arg1 isNew:(BOOL)arg2 withOptions:(id)arg3 error:(*id)arg4 ;
-(id)__addAccountWithType:(NSInteger)arg0 name:(id)arg1 ;
-(id)__addAccountWithType:(NSInteger)arg0 name:(id)arg1 accountObjectID:(id)arg2 ;
-(id)_addAccountWithType:(NSInteger)arg0 name:(id)arg1 ;
-(id)_addAccountWithType:(NSInteger)arg0 name:(id)arg1 accountObjectID:(id)arg2 ;
-(id)_addCalDavAccountWithName:(id)arg0 ;
-(id)_addCalDavAccountWithName:(id)arg0 accountObjectID:(id)arg1 ;
-(id)_addExchangeAccountWithName:(id)arg0 ;
-(id)_addExchangeAccountWithName:(id)arg0 accountObjectID:(id)arg1 ;
-(id)_addLocalAccountWithName:(id)arg0 ;
-(id)_addLocalAccountWithName:(id)arg0 accountObjectID:(id)arg1 ;
-(id)_addTestOnlyExtraPrimaryCKAccountWithName:(id)arg0 ;
-(id)_addTestOnlyExtraPrimaryCKAccountWithName:(id)arg0 accountObjectID:(id)arg1 ;
-(id)_addTestOnlyLocalInternalAccountWithName:(id)arg0 ;
-(id)_addTestOnlyLocalInternalAccountWithName:(id)arg0 accountObjectID:(id)arg1 ;
-(id)_addTestOnlyNonPrimaryCKAccountWithName:(id)arg0 ;
-(id)_addTestOnlyNonPrimaryCKAccountWithName:(id)arg0 accountObjectID:(id)arg1 ;
-(id)_addTestOnlyPrimaryCKAccountWithName:(id)arg0 ;
-(id)_addTestOnlyPrimaryCKAccountWithName:(id)arg0 accountObjectID:(id)arg1 ;
-(id)_copyReminder:(id)arg0 toListChangeItem:(id)arg1 ;
-(id)_copyReminder:(id)arg0 toReminderSubtaskContextChangeItem:(id)arg1 ;
-(id)_copyReminderChangeItem:(id)arg0 toListChangeItem:(id)arg1 ;
-(id)_copyReminderChangeItem:(id)arg0 toReminderSubtaskContextChangeItem:(id)arg1 ;
-(id)_iCalendarDataFromICSTodoItem:(id)arg0 icsCalendar:(id)arg1 ;
-(id)_trackedAccountCapabilitiesForObjectID:(id)arg0 ;
-(id)_trackedAccountChangeItemForObjectID:(id)arg0 ;
-(id)_trackedListChangeItemForObjectID:(id)arg0 ;
-(id)_trackedReminderChangeItemForObjectID:(id)arg0 ;
-(id)_trackedSmartListChangeItemForObjectID:(id)arg0 ;
-(id)_trackedTemplateChangeItemForObjectID:(id)arg0 ;
-(id)_updateAccountWithListChangeItem:(id)arg0 ;
-(id)_updateListStorage:(id)arg0 accountCapabilities:(id)arg1 ;
-(id)_updateListWithReminderChangeItem:(id)arg0 ;
-(id)addCustomSmartListWithName:(id)arg0 toAccountChangeItem:(id)arg1 smartListObjectID:(id)arg2 ;
-(id)addCustomSmartListWithName:(id)arg0 toListSublistContextChangeItem:(id)arg1 smartListObjectID:(id)arg2 ;
-(id)addGroupWithName:(id)arg0 toAccountGroupContextChangeItem:(id)arg1 ;
-(id)addGroupWithName:(id)arg0 toAccountGroupContextChangeItem:(id)arg1 groupObjectID:(id)arg2 ;
-(id)addListUsingPublicTemplateWithREMListRepresentation:(id)arg0 toAccountChangeItem:(id)arg1 ;
-(id)addListUsingTemplate:(id)arg0 toAccountChangeItem:(id)arg1 ;
-(id)addListWithName:(id)arg0 toAccountChangeItem:(id)arg1 ;
-(id)addListWithName:(id)arg0 toAccountChangeItem:(id)arg1 listObjectID:(id)arg2 ;
-(id)addListWithName:(id)arg0 toListSublistContextChangeItem:(id)arg1 ;
-(id)addListWithName:(id)arg0 toListSublistContextChangeItem:(id)arg1 listObjectID:(id)arg2 ;
-(id)addReminderWithTitle:(id)arg0 toListChangeItem:(id)arg1 ;
-(id)addReminderWithTitle:(id)arg0 toListChangeItem:(id)arg1 reminderObjectID:(id)arg2 ;
-(id)addReminderWithTitle:(id)arg0 toReminderSubtaskContextChangeItem:(id)arg1 ;
-(id)addReminderWithTitle:(id)arg0 toReminderSubtaskContextChangeItem:(id)arg1 reminderObjectID:(id)arg2 ;
-(id)addTemplateWithName:(id)arg0 configuration:(id)arg1 toAccountChangeItem:(id)arg2 ;
-(id)addTemplateWithName:(id)arg0 configuration:(id)arg1 toAccountChangeItem:(id)arg2 templateObjectID:(id)arg3 ;
-(id)description;
-(id)icsDueOrEndDateWithICSCalendarItem:(id)arg0 options:(id)arg1 ;
-(id)importRemindersFromICSData:(id)arg0 insertIntoListChangeItem:(id)arg1 error:(*id)arg2 ;
-(id)initWithStore:(id)arg0 ;
-(id)performRecurrenceClone;
-(id)updateAccount:(id)arg0 ;
-(id)updateList:(id)arg0 ;
-(id)updateReminder:(id)arg0 ;
-(id)updateSmartList:(id)arg0 ;
-(id)updateTemplate:(id)arg0 ;
-(void)_addAlarmsToReminderChangeItem:(id)arg0 withICSAlarm:(id)arg1 icsCalendar:(id)arg2 ;
-(void)_populateAlarmsInReminderChangeItem:(id)arg0 withICSAlarms:(id)arg1 icsCalendar:(id)arg2 ;
-(void)_populateRecurrencesInReminderChangeItem:(id)arg0 withICSComponent:(id)arg1 icsCalendar:(id)arg2 ;
-(void)_populateReminderChangeItem:(id)arg0 withICSTodoItem:(id)arg1 icsCalendar:(id)arg2 isNew:(BOOL)arg3 withOptions:(id)arg4 ;
-(void)_prepareSave:(id)arg0 ;
-(void)_trackAccountCapabilities:(id)arg0 forObjectID:(id)arg1 ;
-(void)_trackAccountChangeItem:(id)arg0 ;
-(void)_trackListChangeItem:(id)arg0 ;
-(void)_trackReminderChangeItem:(id)arg0 ;
-(void)_trackSmartListChangeItem:(id)arg0 ;
-(void)_trackTemplateChangeItem:(id)arg0 ;
-(void)_updateResolutionTokenMapForChangeItem:(id)arg0 ;
-(void)_updateTrackedAccountChangeItem:(id)arg0 withObjectID:(id)arg1 ;
-(void)_updateTrackedListChangeItem:(id)arg0 withObjectID:(id)arg1 ;
-(void)_updateTrackedReminderChangeItem:(id)arg0 withObjectID:(id)arg1 ;
-(void)_updateTrackedSmartListChangeItem:(id)arg0 withObjectID:(id)arg1 ;
-(void)_willSaveAccountChangeItems:(id)arg0 listChangeItems:(id)arg1 smartListChangeItems:(id)arg2 templateChangeItems:(id)arg3 reminderChangeItems:(id)arg4 ;
-(void)notifyChangeDelegateForSaveSuccess:(BOOL)arg0 ;
-(void)performPreSaveActions;
-(void)saveWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)updateReminderChangeItem:(id)arg0 fromICSTodo:(id)arg1 icsCalendar:(id)arg2 isNew:(BOOL)arg3 withOptions:(id)arg4 ;
-(void)updateUIDInReminderChangeItem:(id)arg0 fromICSComponent:(id)arg1 icsCalendar:(id)arg2 ;


@end


#endif