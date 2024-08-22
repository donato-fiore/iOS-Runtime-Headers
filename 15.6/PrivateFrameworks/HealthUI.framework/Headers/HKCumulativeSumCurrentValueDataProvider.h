// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCUMULATIVESUMCURRENTVALUEDATAPROVIDER_H
#define HKCUMULATIVESUMCURRENTVALUEDATAPROVIDER_H



#import "HKValueDataProvider.h"

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider



-(id)_mostRecentValueQueryWithCompletion:(id)arg0 ;
-(id)currentValue;
-(id)fetchOperationWithCompletion:(id)arg0 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg0 completion:(id)arg1 ;
-(void)_sumFromDate:(id)arg0 toDate:(id)arg1 completion:(id)arg2 ;


@end


#endif