// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSSIMILARSTACKER_H
#define CLSSIMILARSTACKER_H


#import <Foundation/Foundation.h>


@interface CLSSimilarStacker : NSObject

@property (readonly) NSInteger algorithm; // ivar: _algorithm
@property (nonatomic) CGFloat distanceThresholdForIdenticalSimilarity; // ivar: _distanceThresholdForIdenticalSimilarity
@property (nonatomic) CGFloat distanceThresholdForIdenticalSimilarityWithPeople; // ivar: _distanceThresholdForIdenticalSimilarityWithPeople
@property (nonatomic) CGFloat distanceThresholdForSemanticalSimilarity; // ivar: _distanceThresholdForSemanticalSimilarity
@property (nonatomic) CGFloat distanceThresholdForSemanticalSimilarityWithPeople; // ivar: _distanceThresholdForSemanticalSimilarityWithPeople
@property (nonatomic) CGFloat distanceThresholdForSemanticalSimilarityWithPersons; // ivar: _distanceThresholdForSemanticalSimilarityWithPersons
@property (copy, nonatomic) id *sceneprintGetterBlock; // ivar: _sceneprintGetterBlock


+(CGFloat)defaultDistanceThresholdForAlgorithm:(NSInteger)arg0 similarity:(NSInteger)arg1 ;
+(id)distanceBlockForAlgorithm:(SEL)arg0 sceneprintGetterBlock:(NSInteger)arg1 ;
-(CGFloat)distanceBetweenItem:(id)arg0 andItem:(id)arg1 ;
-(CGFloat)distanceThresholdForSimilarity:(NSInteger)arg0 ;
-(id)adaptiveStackSimilarItems:(id)arg0 progressBlock:(id)arg1 ;
-(id)initWithAlgorithm:(NSInteger)arg0 ;
-(id)similarGroupComparator:(SEL)arg0 ;
-(id)stackSimilarItems:(id)arg0 withSimilarity:(NSInteger)arg1 timestampSupport:(BOOL)arg2 progressBlock:(id)arg3 ;


@end


#endif