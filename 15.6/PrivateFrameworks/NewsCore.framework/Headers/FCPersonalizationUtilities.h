// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPERSONALIZATIONUTILITIES_H
#define FCPERSONALIZATIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface FCPersonalizationUtilities : NSObject



+(CGFloat)decayedDiversificationPenaltyWithInitialValue:(CGFloat)arg0 finalValue:(CGFloat)arg1 halfLife:(CGFloat)arg2 baselineAggregate:(id)arg3 ;
+(id)diversifyItems:(id)arg0 withPreselectedItems:(id)arg1 limit:(NSUInteger)arg2 similarityStartExpectation:(CGFloat)arg3 similarityEndExpectation:(CGFloat)arg4 publisherDiversificationSlope:(CGFloat)arg5 publisherDiversificationYIntercept:(CGFloat)arg6 ;
+(id)limitItems:(id)arg0 byHourlyFlowRate:(CGFloat)arg1 itemFilterPerPublisher:(CGFloat)arg2 timeInterval:(CGFloat)arg3 ;
+(id)sortItems:(id)arg0 readonlyPersonalizationAggregateStore:(id)arg1 personalizationWhitelist:(id)arg2 configurableValues:(id)arg3 userProfile:(id)arg4 ;
+(id)sortItems:(id)arg0 readonlyPersonalizationAggregateStore:(id)arg1 personalizationWhitelist:(id)arg2 configurableValues:(id)arg3 userProfile:(id)arg4 translatedTagIDs:(id)arg5 sortOptions:(NSInteger)arg6 configurationSet:(NSInteger)arg7 ;


@end


#endif