// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSSIMILARSTACKER_H
#define CLSSIMILARSTACKER_H


#import <Foundation/Foundation.h>


@interface CLSSimilarStacker : NSObject {
    CGFloat _distanceThresholdForIdenticalSimilarity;
    CGFloat _distanceThresholdForIdenticalSimilarityWithPeople;
    CGFloat _distanceThresholdForSemanticalSimilarity;
    CGFloat _distanceThresholdForSemanticalSimilarityWithPeople;
    CGFloat _distanceThresholdForSemanticalSimilarityWithPersons;
}


@property (readonly) NSInteger algorithm; // ivar: _algorithm
@property (copy, nonatomic) id *sceneprintGetterBlock; // ivar: _sceneprintGetterBlock


+(CGFloat)defaultDistanceThresholdForAlgorithm:(NSInteger)arg0 similarity:(NSInteger)arg1 baseSceneprintVersion:(NSUInteger)arg2 ;
+(NSUInteger)preferredMetricForAlgorithm:(NSInteger)arg0 baseSceneprintVersion:(NSUInteger)arg1 ;
+(id)distanceBlockWithMetric:(SEL)arg0 sceneprintGetterBlock:(NSUInteger)arg1 ;
-(CGFloat)distanceBetweenItem:(id)arg0 andItem:(id)arg1 ;
-(CGFloat)distanceThresholdForIdenticalSimilarityWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(CGFloat)distanceThresholdForIdenticalSimilarityWithPeopleWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(CGFloat)distanceThresholdForSemanticalSimilarityWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(CGFloat)distanceThresholdForSemanticalSimilarityWithPeopleWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(CGFloat)distanceThresholdForSemanticalSimilarityWithPersonsWithBaseSceneprintVersion:(NSUInteger)arg0 ;
-(CGFloat)distanceThresholdForSimilarity:(NSInteger)arg0 baseSceneprintVersion:(NSUInteger)arg1 ;
-(id)adaptiveStackSimilarItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithAlgorithm:(NSInteger)arg0 ;
-(id)similarGroupComparator:(SEL)arg0 ;
-(id)stackSimilarItems:(id)arg0 withSimilarity:(NSInteger)arg1 timestampSupport:(BOOL)arg2 progressBlock:(id)arg3 ;
-(void)overrideDistanceThresholdForIdenticalSimilarity:(CGFloat)arg0 ;
-(void)overrideDistanceThresholdForIdenticalSimilarityWithPeople:(CGFloat)arg0 ;
-(void)overrideDistanceThresholdForSemanticalSimilarity:(CGFloat)arg0 ;
-(void)overrideDistanceThresholdForSemanticalSimilarityWithPeople:(CGFloat)arg0 ;
-(void)overrideDistanceThresholdForSemanticalSimilarityWithPersons:(CGFloat)arg0 ;


@end


#endif