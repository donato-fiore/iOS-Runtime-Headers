// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGEKCALENDARADAPTER_H
#define SGEKCALENDARADAPTER_H

@class _PASLazyResult, NSString;
@protocol SGJournalCalendarObserver;

#import <Foundation/Foundation.h>

#import "SGSqlEntityStore.h"

@interface SGEKCalendarAdapter : NSObject <SGJournalCalendarObserver>

 {
    _PASLazyResult *_lazyEKStoreLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) SGSqlEntityStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)_cancelEKEvent:(id)arg0 ekStore:(id)arg1 error:(*id)arg2 ;
-(BOOL)_isEKEventFromNLEventsCalendar:(id)arg0 ekStore:(id)arg1 ;
-(BOOL)_isEKEventFromSuggestedCalendar:(id)arg0 ekStore:(id)arg1 ;
-(BOOL)_updateEKEvent:(id)arg0 withEvent:(id)arg1 ekStore:(id)arg2 error:(*id)arg3 ;
-(id)_eventsAssociatedWithStorageEvent:(id)arg0 store:(id)arg1 ;
-(id)initWithSGSqlEntityStore:(id)arg0 ;
-(id)initWithSGSqlEntityStore:(id)arg0 andEKStore:(id)arg1 ;
-(void)_addEKEventToCalendar:(id)arg0 storageEvent:(id)arg1 ekStore:(id)arg2 commit:(BOOL)arg3 ;
-(void)_removeEKEvent:(id)arg0 store:(id)arg1 commit:(BOOL)arg2 ;
-(void)_removeEvent:(id)arg0 commit:(BOOL)arg1 ;
-(void)_runWithEKEventStore:(id)arg0 ;
-(void)_updateEvent:(id)arg0 withValuesFrom:(id)arg1 ekStore:(id)arg2 ;
-(void)_updateEventMetadataInModifiedEvent:(id)arg0 withExistingCheckInShortcutInOriginalEvent:(id)arg1 ifTeamIdentifierIsDifferentInStorageEvent:(id)arg2 ;
-(void)addEvent:(id)arg0 ;
-(void)addEvent:(id)arg0 commit:(BOOL)arg1 ;
-(void)addEvents:(id)arg0 ;
-(void)calendarDeleted;
-(void)cancelEvent:(id)arg0 ;
-(void)cancelEvent:(id)arg0 commit:(BOOL)arg1 ;
-(void)cancelEvents:(id)arg0 ;
-(void)confirmEventFromOtherDevice:(id)arg0 ;
-(void)confirmEventFromThisDevice:(id)arg0 ;
-(void)orphanEvent:(id)arg0 ;
-(void)rejectEventFromOtherDevice:(id)arg0 ;
-(void)rejectEventFromThisDevice:(id)arg0 ;


@end


#endif