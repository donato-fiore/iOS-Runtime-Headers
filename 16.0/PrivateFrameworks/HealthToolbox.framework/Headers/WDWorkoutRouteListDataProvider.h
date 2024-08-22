// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDWORKOUTROUTELISTDATAPROVIDER_H
#define WDWORKOUTROUTELISTDATAPROVIDER_H



#import "WDSampleListDataProvider.h"

@interface WDWorkoutRouteListDataProvider : WDSampleListDataProvider



-(id)createQueryForSampleType:(id)arg0 predicate:(id)arg1 limit:(NSInteger)arg2 sortDescriptors:(id)arg3 resultsHandler:(id)arg4 ;
-(id)predicateForType:(id)arg0 ;
-(id)sampleTypes;
-(id)secondaryTextForObject:(id)arg0 ;
-(id)textForObject:(id)arg0 ;
-(id)viewControllerForItemAtIndexPath:(id)arg0 ;


@end


#endif