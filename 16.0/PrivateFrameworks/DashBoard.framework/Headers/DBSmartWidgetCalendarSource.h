// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBSMARTWIDGETCALENDARSOURCE_H
#define DBSMARTWIDGETCALENDARSOURCE_H

@class EKCalendarVisibilityManager, EKEventStore;


#import "DBSmartWidgetSource.h"

@interface DBSmartWidgetCalendarSource : DBSmartWidgetSource

@property (readonly, nonatomic) EKCalendarVisibilityManager *calendarVisibilityManager; // ivar: _calendarVisibilityManager
@property (readonly, nonatomic) EKEventStore *eventStore; // ivar: _eventStore


+(id)predictionClasses;
+(id)sourceName;
+(void)load;
-(BOOL)_includeCalendar:(id)arg0 ;
-(BOOL)_includeEvent:(id)arg0 forNow:(id)arg1 ;
-(BOOL)shouldKeepPrediction:(id)arg0 ;
-(id)freshPredictions;
-(id)initWithDelegate:(id)arg0 resourceProvider:(id)arg1 ;
-(void)_eventStoreDidChange:(id)arg0 ;
-(void)_handleAppLibraryRefresh;
-(void)dealloc;


@end


#endif