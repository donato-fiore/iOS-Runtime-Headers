// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDHEURISTICSMAILBOXPREDICTOR_H
#define EDHEURISTICSMAILBOXPREDICTOR_H

@class NSString, NSMutableString, NSCache, NSDictionary;
@protocol EDMailboxPredictor, EDMailboxPredictionQueryAdapter, EMUserProfileProvider;

#import <Foundation/Foundation.h>


@interface EDHeuristicsMailboxPredictor : NSObject <EDMailboxPredictor>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableString *debugLog; // ivar: _debugLog
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<EDMailboxPredictionQueryAdapter> *library; // ivar: _library
@property (retain, nonatomic) NSCache *mailboxIDCache; // ivar: _mailboxIDCache
@property (retain, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<EMUserProfileProvider> *userProfileProvider; // ivar: _userProfileProvider


-(BOOL)_isAllowedRecipient:(id)arg0 ;
-(BOOL)_limitToRecents;
-(BOOL)_modeParameterIs:(id)arg0 ;
-(id)_allowedRecipientsForMessage:(id)arg0 ;
-(id)_conversationIDCountsForMessage:(id)arg0 ;
-(id)_countsForField:(id)arg0 message:(id)arg1 ;
-(id)_groupedMessagesCountByMailboxMatchingQuery:(NSUInteger)arg0 variable:(id)arg1 ;
-(id)_listIDCountsForMessage:(id)arg0 ;
-(id)_mergeDefaultParameters:(id)arg0 withParameters:(id)arg1 ;
-(id)_normalizedTermFrequencyTopHitFromDictionary:(id)arg0 withThreshold:(CGFloat)arg1 ;
-(id)_objectWithMeasure:(CGFloat)arg0 timesHigherThanFollowUpInMeasures:(id)arg1 ;
-(id)_orderedModePredictionForMessage:(id)arg0 ;
-(id)_predictionsForMessage:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_recipientCountsForMessage:(id)arg0 ;
-(id)_removeSpecialMailboxesInCounts:(id)arg0 message:(id)arg1 ;
-(id)_senderCountsForMessage:(id)arg0 ;
-(id)_summedWeightedPredictionsForMessage:(id)arg0 limit:(NSUInteger)arg1 ;
-(id)_topHitFromMailboxDictionary:(id)arg0 ;
-(id)_topHitFromMailboxDictionary:(id)arg0 message:(id)arg1 ;
-(id)_userCreatedMailboxIDs;
-(id)_weightedModePredictionsForMessage:(id)arg0 ;
-(id)initWithUserProfileProvider:(id)arg0 queryAdapter:(id)arg1 ;
-(id)initWithUserProfileProvider:(id)arg0 queryAdapter:(id)arg1 parameters:(id)arg2 ;
-(id)predictMailboxIDsForMessages:(id)arg0 limit:(NSUInteger)arg1 diagnostics:(*id)arg2 ;


@end


#endif