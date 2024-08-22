// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCANDIDATERELEVANCEMODELSERVER_H
#define ATXCANDIDATERELEVANCEMODELSERVER_H


#import <Foundation/Foundation.h>

#import "ATXCandidateRelevanceModelConfig.h"

@interface ATXCandidateRelevanceModelServer : NSObject {
    ATXCandidateRelevanceModelConfig *_config;
}




+(id)currentContextForConfig:(id)arg0 contextOverride:(id)arg1 ;
+(id)mergeHeuristicSuggestions:(id)arg0 withSuggestions:(id)arg1 ;
+(id)suggestionExecutableIdsFromSuggestions:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(id)sortedProactiveSuggestionsForContext:(id)arg0 ;
-(void)sendSuggestionsToBlending;
-(void)sendSuggestionsToBlendingForContext:(id)arg0 ;


@end


#endif