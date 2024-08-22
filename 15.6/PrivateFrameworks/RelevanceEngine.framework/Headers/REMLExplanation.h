// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMLEXPLANATION_H
#define REMLEXPLANATION_H


#import <Foundation/Foundation.h>


@interface REMLExplanation : NSObject



+(id)explanationForCondition:(id)arg0 ;
+(id)explanationForFeature:(id)arg0 mean:(float)arg1 variance:(float)arg2 ;
+(id)explanationForFilteringRule:(id)arg0 ;
-(BOOL)_canCombineWithSimilarExplanation:(id)arg0 ;
-(BOOL)_isSystemFeature:(id)arg0 ;
-(BOOL)canCombineExplanationWithExplanation:(id)arg0 ;
-(BOOL)shouldProvideExplanation;
-(NSInteger)_rankExplanationToSimilarExplanation:(id)arg0 ;
-(NSInteger)rankExplanationToExplanation:(id)arg0 ;
-(id)_formattedFeatureListFromFeatures:(id)arg0 style:(NSUInteger)arg1 ;
-(id)_formattedNameForFeature:(id)arg0 style:(NSUInteger)arg1 ;
-(id)explanationByCombiningWithExplanation:(id)arg0 ;
-(id)explanationWithStyle:(NSUInteger)arg0 ;


@end


#endif