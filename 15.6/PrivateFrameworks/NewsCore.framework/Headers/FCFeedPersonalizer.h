// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCFEEDPERSONALIZER_H
#define FCFEEDPERSONALIZER_H

@class NSString;
@protocol FCFeedPersonalizing, FCPersonalizationFunctionProviding, FCReadonlyPersonalizationAggregateStore, FCTodayPrivateData;

#import <Foundation/Foundation.h>

#import "FCPersonalizationTreatment.h"

@interface FCFeedPersonalizer : NSObject <FCFeedPersonalizing, FCPersonalizationFunctionProviding>



@property (nonatomic) CGFloat articleDiversificationSimilarityExpectationEnd; // ivar: _articleDiversificationSimilarityExpectationEnd
@property (nonatomic) CGFloat articleDiversificationSimilarityExpectationStart; // ivar: _articleDiversificationSimilarityExpectationStart
@property (nonatomic) CGFloat articleDiversificationUniquePublisherExpectationSlope; // ivar: _articleDiversificationUniquePublisherExpectationSlope
@property (nonatomic) CGFloat articleDiversificationUniquePublisherExpectationYIntercept; // ivar: _articleDiversificationUniquePublisherExpectationYIntercept
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // ivar: _personalizationTreatment
@property (retain, nonatomic) NSObject<FCReadonlyPersonalizationAggregateStore> *readonlyPersonalizationAggregateStore; // ivar: _readonlyPersonalizationAggregateStore
@property (readonly) Class superclass;
@property (copy, nonatomic) NSObject<FCTodayPrivateData> *todayData; // ivar: _todayData


-(CGFloat)decayedPublisherDiversificationPenalty;
-(NSUInteger)whitelistLevelForTagID:(id)arg0 ;
-(id)_userProfile;
-(id)diversifyItems:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)diversifyItems:(id)arg0 limit:(NSUInteger)arg1 preselectedItems:(id)arg2 ;
-(id)initWithPersonalizationTreatment:(id)arg0 readonlyPersonalizationAggregateStore:(id)arg1 articleDiversificationSimilarityExpectationStart:(CGFloat)arg2 articleDiversificationSimilarityExpectationEnd:(CGFloat)arg3 articleDiversificationUniquePublisherExpectationSlope:(CGFloat)arg4 articleDiversificationUniquePublisherExpectationYIntercept:(CGFloat)arg5 todayData:(id)arg6 ;
-(id)limitItemsByFlowRate:(id)arg0 timeInterval:(CGFloat)arg1 publisherCount:(NSUInteger)arg2 ;
-(id)limitItemsByMinimumItemQuality:(id)arg0 ;
-(id)rankTagIDsDescending:(id)arg0 ;
-(id)scoresForTagIDs:(id)arg0 ;
-(id)sortItems:(id)arg0 ;
-(id)sortItems:(id)arg0 configurationSet:(NSInteger)arg1 ;
-(id)sortItems:(id)arg0 options:(NSInteger)arg1 ;
-(id)sortItems:(id)arg0 options:(NSInteger)arg1 configurationSet:(NSInteger)arg2 ;
-(void)prepareFavoritesWithCompletionHandler:(id)arg0 ;
-(void)prepareForUseWithCompletionHandler:(id)arg0 ;


@end


#endif