// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDAPPLESTANDHOURSTATISTICSLISTDATAPROVIDER_H
#define WDAPPLESTANDHOURSTATISTICSLISTDATAPROVIDER_H

@class NSMutableArray, NSMutableDictionary, HKDisplayTypeValueFormatter, NSDateFormatter;


#import "WDSampleListDataProvider.h"

@interface WDAppleStandHourStatisticsListDataProvider : WDSampleListDataProvider {
    NSMutableArray *_orderedTimePeriods;
    NSMutableDictionary *_totalsByTimePeriod;
    HKDisplayTypeValueFormatter *_valueFormatter;
    NSDateFormatter *_dateFormatter;
}




-(NSInteger)cellStyle;
-(NSUInteger)numberOfObjectsForSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_samplesSortDescriptor;
-(id)initWithDisplayType:(id)arg0 profile:(id)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 ;
-(id)predicateForType:(id)arg0 ;
-(id)sampleTypes;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;
-(void)_callUpdateHandler;
-(void)_removeSamplesInDateRange:(id)arg0 ;
-(void)deleteAllData;
-(void)deleteObjectsAtIndexPath:(id)arg0 healthStore:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 sectionRemoved:(*BOOL)arg2 ;


@end


#endif