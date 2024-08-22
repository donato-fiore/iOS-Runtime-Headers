// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIPASTEBOARDMANAGER_H
#define EKUIPASTEBOARDMANAGER_H

@class NSMutableDictionary, EKCalendar, NSDate, NSString;
@protocol EKAutocompleteSearchPasteboardItemProvider;

#import <Foundation/Foundation.h>

#import "CalendarModel.h"

@interface EKUIPasteboardManager : NSObject <EKAutocompleteSearchPasteboardItemProvider>

 {
    NSMutableDictionary *_copiedEvents;
    CalendarModel *_calendarModel;
    EKCalendar *_calendarForPaste;
    NSUInteger _pasteDateMode;
    NSDate *_dateForPaste;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_pasteboardItemForEvent:(id)arg0 ;
-(BOOL)_calendarIsPasteableTo:(id)arg0 allCalendars:(id)arg1 ;
-(BOOL)canPerformPaste;
-(NSUInteger)numberOfEventsToPaste;
-(id)_eventsFromPasteboard:(id)arg0 ;
-(id)calendarToPasteTo;
-(id)calendarToPasteToWithEvents:(id)arg0 ;
-(id)eventsFromPasteboard;
-(id)initWithCalendarModel:(id)arg0 ;
-(struct CGColor *)colorOfCalendarToPasteTo;
-(void)_copyEvents:(id)arg0 toDict:(id)arg1 ;
-(void)_cutEvents:(id)arg0 editor:(id)arg1 ;
-(void)_pasteEvents:(id)arg0 atDate:(id)arg1 dateMode:(NSUInteger)arg2 pasteDelegate:(id)arg3 duplicate:(BOOL)arg4 ;
-(void)_saveNewEventsOrOpenEditor:(id)arg0 pasteDelegate:(id)arg1 duplicate:(BOOL)arg2 ;
-(void)_validateAction:(NSUInteger)arg0 forEvents:(id)arg1 presentingViewController:(id)arg2 completion:(id)arg3 ;
-(void)copyEvents:(id)arg0 presentingViewController:(id)arg1 ;
-(void)cutEvents:(id)arg0 cutDelegate:(id)arg1 ;
-(void)duplicateEvents:(id)arg0 presentingViewController:(id)arg1 withDateMode:(NSUInteger)arg2 pasteDelegate:(id)arg3 ;
-(void)pasteEventsWithDateMode:(NSUInteger)arg0 pasteDelegate:(id)arg1 ;
-(void)setCalendarForPaste:(id)arg0 ;
-(void)setDateForPaste:(id)arg0 ;


@end


#endif