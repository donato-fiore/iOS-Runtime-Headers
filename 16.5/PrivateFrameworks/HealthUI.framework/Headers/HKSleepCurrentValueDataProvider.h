// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPCURRENTVALUEDATAPROVIDER_H
#define HKSLEEPCURRENTVALUEDATAPROVIDER_H



#import "HKValueDataProvider.h"

@interface HKSleepCurrentValueDataProvider : HKValueDataProvider



-(id)_currentSleepQueryWithCompletion:(id)arg0 ;
-(id)_queryDateRangeFromSampleDate:(id)arg0 ;
-(id)currentValue;
-(id)fetchOperationWithCompletion:(id)arg0 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg0 completion:(id)arg1 ;
-(void)_fetchQueryResultFromDate:(id)arg0 toDate:(id)arg1 completion:(id)arg2 ;


@end


#endif