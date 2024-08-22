// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPUNIVERSALSEARCHFEEDBACKLISTENER_H
#define PPUNIVERSALSEARCHFEEDBACKLISTENER_H

@class NSString;
@protocol SFFeedbackListener;

#import <Foundation/Foundation.h>

#import "PPNamedEntityStore.h"
#import "PPTopicStore.h"
#import "PPSpotlightSessionState.h"

@interface PPUniversalSearchFeedbackListener : NSObject <SFFeedbackListener>

 {
    PPNamedEntityStore *_entityStore;
    PPTopicStore *_topicStore;
    PPSpotlightSessionState *_sessionState;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)fetchFeedbackCSSIParsedResults:(id)arg0 feedbackBundleId:(id)arg1 queryId:(NSInteger)arg2 ;
-(id)init;
-(id)protectionClassForBundleId:(id)arg0 ;
-(void)reportFeedback:(id)arg0 queryId:(NSInteger)arg1 ;
-(void)sendFeedbackWithEngagementStrings:(id)arg0 rejectionStrings:(id)arg1 store:(id)arg2 ;
-(void)sendMetricsFeedback:(NSUInteger)arg0 engagedCSSICount:(NSUInteger)arg1 ;


@end


#endif