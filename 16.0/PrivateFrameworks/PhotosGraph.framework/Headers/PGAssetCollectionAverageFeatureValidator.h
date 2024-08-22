// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGASSETCOLLECTIONAVERAGEFEATUREVALIDATOR_H
#define PGASSETCOLLECTIONAVERAGEFEATUREVALIDATOR_H



#import "PGFeatureAggregationValidator.h"

@interface PGAssetCollectionAverageFeatureValidator : PGFeatureAggregationValidator



-(NSInteger)featureValidatorType;
-(NSInteger)isValidEntity:(id)arg0 graph:(id)arg1 assetFetchOptionPropertySet:(id)arg2 error:(*id)arg3 ;


@end


#endif