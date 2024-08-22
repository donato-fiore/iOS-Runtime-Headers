// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSLEEPSTAGECATEGORYDATAPROVIDER_H
#define WDSLEEPSTAGECATEGORYDATAPROVIDER_H



#import "WDSampleListDataProvider.h"

@interface WDSleepStageCategoryDataProvider : WDSampleListDataProvider



-(NSInteger)cellStyle;
-(NSUInteger)numberOfObjectsForSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_anySample;
-(id)_durationFormatter;
-(id)_sleepSampleAtIndex:(NSUInteger)arg0 section:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 ;
-(id)sampleTypes;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;
-(void)deleteObjectsAtIndexPath:(id)arg0 healthStore:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)removeObjectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 sectionRemoved:(*BOOL)arg2 ;


@end


#endif