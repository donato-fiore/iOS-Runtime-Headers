// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELACTIONPREDICTIONPOSTPROCESSOR_H
#define ATXANCHORMODELACTIONPREDICTIONPOSTPROCESSOR_H


#import <Foundation/Foundation.h>

#import "ATXAnchorModelPrediction.h"
#import "ATXAnchorModelDataStoreWrapper.h"
#import "ATXActionPredictionBlacklist.h"

@interface ATXAnchorModelActionPredictionPostProcessor : NSObject {
    ATXAnchorModelPrediction *_anchorModelPrediction;
    ATXAnchorModelDataStoreWrapper *_storeWrapper;
    ATXActionPredictionBlacklist *_blacklist;
}




+(id)anchorPredictionScoredActionTuplesFromPredictions:(id)arg0 ;
+(void)inPlaceDeduplicateAnchorPredictionScoredActionTuples:(id)arg0 ;
-(BOOL)scoredActionIsBlacklisted:(id)arg0 ;
-(BOOL)shouldCheckUpcomingMediaForIntent:(id)arg0 ;
-(id)initWithAnchorModelPrediction:(id)arg0 ;
-(id)initWithAnchorModelPrediction:(id)arg0 blacklist:(id)arg1 ;
-(id)postProcessScoredAction:(id)arg0 ;
-(id)recoverATXScoredAction;
-(id)replaceActionWithUpcomingMediaIfNeeded:(id)arg0 ;
-(id)replacementActionWithResolvedMediaIntentContainer:(id)arg0 originalAction:(id)arg1 ;
-(id)replacementIntentFromUpcomingMediaForBundleId:(id)arg0 intent:(id)arg1 ;


@end


#endif