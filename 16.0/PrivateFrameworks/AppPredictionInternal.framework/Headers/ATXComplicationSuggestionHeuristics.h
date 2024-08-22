// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXCOMPLICATIONSUGGESTIONHEURISTICS_H
#define ATXCOMPLICATIONSUGGESTIONHEURISTICS_H


#import <Foundation/Foundation.h>

#import "ATXBluetoothDuetDataProvider.h"
#import "_ATXDuetHelper.h"

@interface ATXComplicationSuggestionHeuristics : NSObject {
    ATXBluetoothDuetDataProvider *_bluetoothDataProvider;
    _ATXDuetHelper *_duetHelper;
}




+(NSInteger)scoreFromConfidence:(unsigned char)arg0 ;
+(NSUInteger)_numCalendarEventsOverLastAndNextWeek;
+(NSUInteger)_numRemindersOverLastWeek;
+(NSUInteger)getClimateCountGivenHomeCounts:(id)arg0 ;
+(NSUInteger)getLightCountGivenHomeCounts:(id)arg0 ;
+(NSUInteger)getSecurityCountGivenHomeCounts:(id)arg0 ;
+(NSUInteger)numberOfRemindersSinceDate:(id)arg0 ;
+(id)_countedHomeAccessoryEvents;
+(id)_fetchCalendarEventsForStartDate:(id)arg0 endDate:(id)arg1 ;
-(BOOL)_confidenceIsValidForPrediction:(unsigned char)arg0 ;
-(NSUInteger)_numBluetoothConnectionsOverLastWeek;
-(id)_homeHeuristics;
-(id)complicationHeuristicsDictionary;
-(id)description;
-(id)init;
-(unsigned char)_batteryHeuristic;
-(unsigned char)_calendarHeuristic;
-(unsigned char)_reminderHeuristic;


@end


#endif