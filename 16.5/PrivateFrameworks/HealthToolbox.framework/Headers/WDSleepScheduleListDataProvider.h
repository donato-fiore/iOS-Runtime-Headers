// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSLEEPSCHEDULELISTDATAPROVIDER_H
#define WDSLEEPSCHEDULELISTDATAPROVIDER_H

@class NSDateFormatter, NSCalendar;


#import "WDSampleListDataProvider.h"

@interface WDSleepScheduleListDataProvider : WDSampleListDataProvider {
    NSDateFormatter *_standaloneFormatter;
    NSDateFormatter *_listItemFormatter;
    NSCalendar *_gregorianCalender;
}




-(NSInteger)cellStyle;
-(NSUInteger)numberOfSections;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)sampleTypes;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 sectionRemoved:(*BOOL)arg2 ;


@end


#endif