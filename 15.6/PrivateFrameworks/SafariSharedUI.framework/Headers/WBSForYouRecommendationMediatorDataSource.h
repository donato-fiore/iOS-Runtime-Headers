// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFORYOURECOMMENDATIONMEDIATORDATASOURCE_H
#define WBSFORYOURECOMMENDATIONMEDIATORDATASOURCE_H


#import <Foundation/Foundation.h>


@interface WBSForYouRecommendationMediatorDataSource : NSObject



-(void)emitStartRetrievingRecommendationsPerformanceMarker;
-(void)notifyContentsDidChangeFromSource:(NSUInteger)arg0 ;
-(void)notifyImageWasUpdatedForRecommendation:(id)arg0 ;
-(void)recommendationsWithTopics:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)retrieveRecommendationsMatchingTopic:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif