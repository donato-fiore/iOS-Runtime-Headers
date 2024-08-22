// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGREMINDERSADAPTER_H
#define SGREMINDERSADAPTER_H

@class REMStore, NSString;
@protocol SGJournalRemindersObserver;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGRemindersAdapter : NSObject <SGJournalRemindersObserver>

 {
    REMStore *_reminderStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SGSqlEntityStore *store; // ivar: _store
@property (readonly) Class superclass;


+(BOOL)reminderHasDuplicate:(id)arg0 usingStore:(id)arg1 ;
+(NSUInteger)remindersCreatedBetweenStartDate:(id)arg0 endDate:(id)arg1 ;
+(id)_remindersFoundInAppsListInREMStore:(id)arg0 ;
+(id)constructNotesForReminder:(id)arg0 ;
+(id)reminderPredicateForReminder:(id)arg0 ;
-(BOOL)_deleteReminder:(id)arg0 usingReminderStore:(id)arg1 ;
-(BOOL)_saveReminder:(id)arg0 usingReminderStore:(id)arg1 ;
-(id)_remRemindersAssociatedWithStorageReminder:(id)arg0 remStore:(id)arg1 ;
-(id)_remRemindersAssociatedWithTitle:(id)arg0 sourceUniqueIdentifier:(id)arg1 usingStore:(id)arg2 ;
-(id)initWithSGSqlEntityStore:(id)arg0 ;
-(id)initWithSGSqlEntityStore:(id)arg0 andREMStore:(id)arg1 ;
-(id)sourceUniqueIdentifierForStorageReminder:(id)arg0 ;
-(void)addReminder:(id)arg0 ;
-(void)confirmReminderFromOtherDevice:(id)arg0 ;
-(void)confirmReminderFromThisDevice:(id)arg0 ;
-(void)orphanReminder:(id)arg0 ;
-(void)rejectReminder:(id)arg0 ;
-(void)rejectReminderFromOtherDevice:(id)arg0 ;
-(void)rejectReminderFromThisDevice:(id)arg0 ;
-(void)reminderAlarmTriggeredFromThisDevice:(id)arg0 ;


@end


#endif