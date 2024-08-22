// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCOUNTCURRENTVALUEDATAPROVIDER_H
#define HKCOUNTCURRENTVALUEDATAPROVIDER_H



#import "HKValueDataProvider.h"

@interface HKCountCurrentValueDataProvider : HKValueDataProvider

@property (readonly, nonatomic) NSInteger countStyle; // ivar: _countStyle


-(id)_countAllSamplesQueryWithCompletion:(id)arg0 ;
-(id)_dataProviderValueForCount:(id)arg0 sampleDate:(id)arg1 ;
-(id)_mostRecentValueQueryWithCompletion:(id)arg0 ;
-(id)currentValue;
-(id)fetchOperationWithCompletion:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 updateController:(id)arg1 dateCache:(id)arg2 displayType:(id)arg3 countStyle:(NSInteger)arg4 ;
-(void)_countFromDate:(id)arg0 toDate:(id)arg1 completion:(id)arg2 ;
-(void)_dataProviderValueFromMostRecentSample:(id)arg0 completion:(id)arg1 ;


@end


#endif