// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGINMEMORYADAPTER_H
#define SGINMEMORYADAPTER_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;
@protocol SGJournalCalendarObserver, SGJournalContactsObserver, SGJournalRemindersObserver;

#import <Foundation/Foundation.h>


@interface SGInMemoryAdapter : NSObject <SGJournalCalendarObserver, SGJournalContactsObserver, SGJournalRemindersObserver>

 {
    NSMutableArray *_events;
    NSMutableDictionary *_contacts;
}


@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *events;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *reminders; // ivar: _reminders
@property (readonly) Class superclass;


-(id)init;
-(void)addContact:(id)arg0 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)addReminder:(id)arg0 ;
-(void)calendarDeleted;
-(void)cancelEvent:(id)arg0 ;
-(void)cancelEvents:(id)arg0 ;
-(void)confirmContact:(id)arg0 ;
-(void)confirmEventFromOtherDevice:(id)arg0 ;
-(void)confirmEventFromThisDevice:(id)arg0 ;
-(void)confirmOrRejectContact:(id)arg0 ;
-(void)confirmReminderFromOtherDevice:(id)arg0 ;
-(void)confirmReminderFromThisDevice:(id)arg0 ;
-(void)orphanEvent:(id)arg0 ;
-(void)orphanReminder:(id)arg0 ;
-(void)overwriteEvent:(id)arg0 ;
-(void)rejectContact:(id)arg0 ;
-(void)rejectEventFromOtherDevice:(id)arg0 ;
-(void)rejectEventFromThisDevice:(id)arg0 ;
-(void)rejectReminderFromOtherDevice:(id)arg0 ;
-(void)rejectReminderFromThisDevice:(id)arg0 ;
-(void)reminderAlarmTriggeredFromThisDevice:(id)arg0 ;
-(void)removeAllStoredPseudoContacts;


@end


#endif