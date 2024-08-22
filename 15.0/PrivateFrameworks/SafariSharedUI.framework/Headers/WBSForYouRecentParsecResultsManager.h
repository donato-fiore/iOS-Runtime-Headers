// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSFORYOURECENTPARSECRESULTSMANAGER_H
#define WBSFORYOURECENTPARSECRESULTSMANAGER_H

@class NSCache, NSArray;
@protocol OS_dispatch_queue;


#import "WBSForYouRecommendationMediatorDataSource.h"

@interface WBSForYouRecentParsecResultsManager : WBSForYouRecommendationMediatorDataSource {
    NSCache *_cache;
    NSObject<OS_dispatch_queue> *_internalQueue;
}


@property (readonly, copy, nonatomic) NSArray *recentRecommendations;


+(id)recommendationsMatchingTopic:(id)arg0 fromArray:(id)arg1 ;
-(BOOL)_hasPermissibleResultTypeForResult:(id)arg0 ;
-(id)_bestAcceptableImageForSFResult:(id)arg0 ;
-(id)_cacheEnsuringExistence;
-(void)_createInternalQueueIfNecessary;
-(void)appendResultsIfApplicable:(id)arg0 ;
-(void)appendResultsIfApplicable:(id)arg0 withDelayedExistenceCheck:(BOOL)arg1 ;
-(void)clearAllResults;
-(void)retrieveRecommendationsMatchingTopic:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif