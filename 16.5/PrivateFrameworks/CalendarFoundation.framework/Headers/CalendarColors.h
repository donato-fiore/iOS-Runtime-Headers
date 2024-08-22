// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALENDARCOLORS_H
#define CALENDARCOLORS_H


#import <Foundation/Foundation.h>


@interface CalendarColors : NSObject



+(id)birthdayCalendarColor;
+(id)colorForName:(id)arg0 ;
+(id)colorNamesOrderedForAssignment;
+(id)defaultCalendarColorNames;
+(id)facebookCalendarColor;
+(id)grayColor;
+(id)localizedColorNameForColorName:(id)arg0 ;
+(id)nameOfColor:(id)arg0 ;
+(id)symbolicColorForNewCalendarWithExistingSymbolicNames:(id)arg0 ;
+(id)textColorForName:(id)arg0 ;
+(int)countOfColor:(id)arg0 inArray:(id)arg1 ;
+(void)_bootstrapColorNameMapping;
+(void)_rebuildColors;
+(void)initialize;


@end


#endif