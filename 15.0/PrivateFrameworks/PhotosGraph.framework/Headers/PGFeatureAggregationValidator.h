// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGFEATUREAGGREGATIONVALIDATOR_H
#define PGFEATUREAGGREGATIONVALIDATOR_H



#import "PGFeatureValidator.h"

@interface PGFeatureAggregationValidator : PGFeatureValidator

@property (readonly, nonatomic) NSInteger featureExtractorType; // ivar: _featureExtractorType


-(NSInteger)featureValidatorType;
-(NSInteger)isValidEntity:(id)arg0 error:(*id)arg1 ;
-(NSInteger)isValidEntity:(id)arg0 graph:(id)arg1 assetFetchOptionPropertySet:(id)arg2 error:(*id)arg3 ;
-(id)_composeFeatureExtractorWithGraph:(id)arg0 error:(*id)arg1 ;
-(id)initWithPredicate:(id)arg0 featureExtractor:(id)arg1 featureExtractorType:(NSInteger)arg2 featureName:(id)arg3 ;


@end


#endif