// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSRULEOVERLAPFEEDBACK_H
#define _PSRULEOVERLAPFEEDBACK_H

@class BMBehaviorRetriever, CNContactStore, _CDInteractionStore, NSUserDefaults;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_PSConfidenceModelForSharing.h"
#import "_PSRuleRankingMLModel.h"

@interface _PSRuleOverlapFeedback : NSObject

@property (readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // ivar: _behaviorRetriever
@property (retain, nonatomic) _PSConfidenceModelForSharing *confidenceModelForSharing; // ivar: _confidenceModelForSharing
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (retain, nonatomic) NSUserDefaults *ruleOverlapFeedbackDefaults; // ivar: _ruleOverlapFeedbackDefaults
@property (retain) _PSRuleRankingMLModel *ruleRankingModel; // ivar: _ruleRankingModel


-(BOOL)targetAppPredictedCorrectlyByRule:(id)arg0 bundleId:(id)arg1 ;
-(BOOL)wasInteractionAmongSuggestLess:(id)arg0 ;
-(id)constantFeaturesFromContextItems:(id)arg0 ;
-(id)constantPETFeaturesFromContextItems:(id)arg0 ;
-(id)contextItemsFromEvent:(id)arg0 ;
-(id)feedbackPETPayloadForRule:(id)arg0 ForInteraction:(id)arg1 ForContextItems:(id)arg2 WithConstantFeatures:(id)arg3 ;
-(id)feedbackPayloadForRule:(id)arg0 ForInteraction:(id)arg1 ForContextItems:(id)arg2 WithConstantFeatures:(id)arg3 ;
-(id)getSessionID;
-(id)init;
-(id)interactionStoreEventsSinceDate:(id)arg0 ;
-(id)loggingTrainDataForContactFillerModel:(id)arg0 withMatchingInteraction:(id)arg1 interactionRecipients:(id)arg2 ruleRankingModel:(id)arg3 contactPropertyCache:(id)arg4 interactionCache:(id)arg5 ;
-(id)matchFeedbackEvent:(id)arg0 WithInteractions:(id)arg1 ;
-(id)sharesheetFeedbackEventsSinceDate:(id)arg0 ;
-(int)bucketedValue:(int)arg0 ;
-(void)loggingForKnowledgeStoreEvent:(id)arg0 WithMatchingInteraction:(id)arg1 ;
-(void)modelAccuracyLogging:(id)arg0 WithMatchingInteraction:(id)arg1 ;
-(void)reviewLastDayOfShares;
-(void)scoreRanking:(NSInteger)arg0 forModelKey:(id)arg1 ;
-(void)writeRecordObjcWithData:(id)arg0 ;


@end


#endif