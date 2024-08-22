// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFOPPORTUNESPEAKINGMODELFEEDBACKMANAGER_H
#define AFOPPORTUNESPEAKINGMODELFEEDBACKMANAGER_H

@class NSMutableDictionary;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "AFOpportuneSpeakingModelFeedback.h"

@interface AFOpportuneSpeakingModelFeedbackManager : NSObject {
    AFOpportuneSpeakingModelFeedback *_feedback;
    id<_DKKnowledgeQuerying> *_knowledgeStore;
    NSMutableDictionary *_usageEventsBySpeakableId;
}




-(BOOL)interactionDetectedForSpeakableId:(id)arg0 ;
-(id)init;
-(id)lastNegativeFeedbackForContact:(id)arg0 ;
-(void)fetchNotificationUsageForSpeakableId:(id)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 withHandler:(id)arg3 ;
-(void)loadIfNecessary;
-(void)save;
-(void)setLastNegativeFeedbackForContact:(id)arg0 ;


@end


#endif