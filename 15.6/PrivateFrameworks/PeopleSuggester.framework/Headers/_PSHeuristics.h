// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PSHEURISTICS_H
#define _PSHEURISTICS_H

@class _CDInteractionStore, _CDInteractionCache, NSDictionary;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>

#import "_PSContactResolver.h"

@interface _PSHeuristics : NSObject

@property (readonly, nonatomic) _PSContactResolver *contactResolver; // ivar: _contactResolver
@property (readonly, nonatomic) _CDInteractionStore *interactionStore; // ivar: _interactionStore
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore; // ivar: _knowledgeStore
@property (readonly, nonatomic) _CDInteractionCache *messageInteractionCache; // ivar: _messageInteractionCache
@property (retain, nonatomic) _CDInteractionCache *recencyCache; // ivar: _recencyCache
@property (retain, nonatomic) NSDictionary *recencyHeuristicLimitNumberOfProxiesByReason; // ivar: _recencyHeuristicLimitNumberOfProxiesByReason
@property (nonatomic) CGFloat recencyMargin; // ivar: _recencyMargin


+(id)PSHeuristicsRecencyReasonToString:(NSInteger)arg0 ;
+(id)templateForPhoneCallHeuristicWithContactId:(id)arg0 handle:(id)arg1 reason:(id)arg2 ;
+(id)templateForPhoneCallHeuristicWithHandles:(id)arg0 reason:(id)arg1 ;
-(id)hourOfDayProbabilitiesToInteractWithContacts:(id)arg0 ;
-(id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)arg0 predictionContextBundleId:(id)arg1 ;
-(id)inExpanseSessionHeuristicSuggestionProxiesWithBundleIds:(id)arg0 suggestionDate:(id)arg1 ;
-(id)inPhoneCallHeuristicSuggestionProxiesWithBundleIds:(id)arg0 ;
-(id)initWithKnowledgeStore:(id)arg0 interactionStore:(id)arg1 contactResolver:(id)arg2 messageInteractionCache:(id)arg3 ;
-(id)initWithKnowledgeStore:(id)arg0 interactionStore:(id)arg1 contactResolver:(id)arg2 shareSheetSupportedBundleIds:(id)arg3 messageInteractionCache:(id)arg4 ;
-(id)maximalIntersectionGroupChatSuggestionProxyWithSeedContactIdentifiers:(id)arg0 bundleIds:(id)arg1 meContactIdentifier:(id)arg2 ;
-(id)photoSuggestionProxiesPartitionedByPresenceInAttachments:(id)arg0 photoSuggestedPeople:(id)arg1 contactIDsInAssets:(id)arg2 ;
-(id)proxiesByRecencyUsingInteractions:(id)arg0 startIndex:(NSUInteger)arg1 reason:(NSInteger)arg2 allowNonSupportedBundleIDs:(BOOL)arg3 ;
-(id)proximityBoostingHeuristicWithProximityBooster:(id)arg0 existingSuggestions:(id)arg1 ;
-(id)recentNonSystemSuggestionsForBundleIDs:(id)arg0 numberOfSuggestion:(NSUInteger)arg1 ;
-(id)seedSuggestionsForChatGuidsAndEmails:(id)arg0 ;
-(void)prepareRecencyCacheWithSupportedBundleIds:(id)arg0 ;
-(void)updateModelProperties:(id)arg0 ;


@end


#endif