// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKBIRTHDAYLISTENER_H
#define EKBIRTHDAYLISTENER_H

@class CalLimitingQueue;
@protocol CalContactsProviderDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EKBirthdayListener : NSObject <CalContactsProviderDelegate>

 {
    CalLimitingQueue *_updateQueue;
    NSObject<OS_dispatch_queue> *_updateJobQueue;
    BOOL _needsReset;
    BOOL _shutdown;
}




+(BOOL)areBirthdaysEnabled;
+(id)eventStoreProvider;
+(id)sharedListener;
-(id)allContactsWithBirthdays;
-(id)birthdayCalendarsCreateIfNeeded:(BOOL)arg0 inStore:(id)arg1 originalIdentifier:(id)arg2 originalAlarms:(id)arg3 ignoreAlarms:(BOOL)arg4 ;
-(id)birthdayCalendarsInStore:(id)arg0 ;
-(id)eventStore;
-(id)initSingleton;
-(void)_insertEventsForContact:(id)arg0 intoCalendar:(id)arg1 inStore:(id)arg2 ;
-(void)_localeChanged;
-(void)addBirthdayCalendars;
-(void)checkForFailures;
-(void)contactsInserted:(id)arg0 updated:(id)arg1 deleted:(id)arg2 ;
-(void)contactsReset;
-(void)disableBirthdayCalendars;
-(void)disableBirthdayCalendarsInStore:(id)arg0 ;
-(void)insertEventWithContact:(id)arg0 forDateComponents:(id)arg1 intoCalendar:(id)arg2 inStore:(id)arg3 ;
-(void)reset;
-(void)resetAllBirthdaysInStore:(id)arg0 ;
-(void)stop;


@end


#endif