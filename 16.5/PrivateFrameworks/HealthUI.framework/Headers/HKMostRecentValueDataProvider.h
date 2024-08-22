// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMOSTRECENTVALUEDATAPROVIDER_H
#define HKMOSTRECENTVALUEDATAPROVIDER_H

@protocol HKDataProviderValue;


#import "HKValueDataProvider.h"

@interface HKMostRecentValueDataProvider : HKValueDataProvider

@property (readonly, nonatomic) NSObject<HKDataProviderValue> *value;


-(id)_mostRecentValueQueryWithCompletion:(id)arg0 ;
-(id)currentValue;
-(id)fetchOperationWithCompletion:(id)arg0 ;


@end


#endif