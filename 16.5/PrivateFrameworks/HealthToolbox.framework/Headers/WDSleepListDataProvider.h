// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSLEEPLISTDATAPROVIDER_H
#define WDSLEEPLISTDATAPROVIDER_H

@class NSMutableDictionary, NSMutableArray;


#import "WDSampleListDataProvider.h"

@interface WDSleepListDataProvider : WDSampleListDataProvider {
    NSMutableDictionary *_sleepData;
    NSMutableArray *_orderedKeys;
}




-(NSInteger)cellStyle;
-(NSUInteger)numberOfObjectsForSection:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSections;
-(id)_durationFormatter;
-(id)_sleepDataDictionaryFromSamples:(id)arg0 ;
-(id)_sleepSampleAtIndex:(NSUInteger)arg0 section:(NSUInteger)arg1 ;
-(id)objectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 ;
-(id)sampleTypes;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)titleForSection:(NSUInteger)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;
-(void)_callUpdateHandler;
-(void)deleteAllData;
-(void)removeObjectAtIndex:(NSUInteger)arg0 forSection:(NSUInteger)arg1 sectionRemoved:(*BOOL)arg2 ;


@end


#endif