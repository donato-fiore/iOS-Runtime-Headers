// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESSTACKHEURISTICSDATASOURCE_H
#define ATXSUGGESTEDPAGESSTACKHEURISTICSDATASOURCE_H

@protocol ATXSuggestedPagesWidgetDataSource;

#import <Foundation/Foundation.h>


@interface ATXSuggestedPagesStackHeuristicsDataSource : NSObject <ATXSuggestedPagesWidgetDataSource>





-(BOOL)_hasAlarmActivity;
-(BOOL)_hasSignificantHomeAccessoryEvents;
-(BOOL)_hasTVInterest;
-(id)_widgetsForDrivingMode;
-(id)_widgetsForExerciseMode;
-(id)_widgetsForGamingMode;
-(id)_widgetsForMindfulnessMode;
-(id)_widgetsForPersonalMode;
-(id)_widgetsForReadingMode;
-(id)_widgetsForSleepMode;
-(id)_widgetsForWorkMode;
-(id)provideWidgetsForPageType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif