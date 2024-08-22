// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXPROACTIVESUGGESTIONSINGLESUGGESTIONFEEDBACKSESSION_H
#define ATXPROACTIVESUGGESTIONSINGLESUGGESTIONFEEDBACKSESSION_H

@class NSMutableOrderedSet, NSData, NSMutableDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestion.h"

@interface ATXProactiveSuggestionSingleSuggestionFeedbackSession : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableOrderedSet *associatedBlendingCacheUUIDs; // ivar: _associatedBlendingCacheUUIDs
@property (readonly, nonatomic) NSMutableOrderedSet *associatedClientModelCacheUUIDs; // ivar: _associatedClientModelCacheUUIDs
@property (readonly, nonatomic) NSData *feedbackMetadata; // ivar: _feedbackMetadata
@property (readonly, nonatomic) NSMutableOrderedSet *matchingSuggestionUUIDs; // ivar: _matchingSuggestionUUIDs
@property (readonly, nonatomic) NSMutableDictionary *sessionContextStatusByConsumerSubType; // ivar: _sessionContextStatusByConsumerSubType
@property (readonly, nonatomic) ATXProactiveSuggestion *suggestion; // ivar: _suggestion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionSingleSuggestionFeedbackSession:(id)arg0 ;
-(BOOL)tryUpdateEngagementType:(NSInteger)arg0 consumerSubType:(unsigned char)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProactiveSuggestion:(id)arg0 clientModelCacheUUID:(id)arg1 feedbackMetadata:(id)arg2 ;
-(id)initWithProactiveSuggestion:(id)arg0 feedbackMetadata:(id)arg1 matchingSuggestionUUIDs:(id)arg2 associatedBlendingCacheUUIDs:(id)arg3 associatedClientModelCacheUUIDs:(id)arg4 sessionContextStatuses:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateShownAndEngagedEngagementTypesAndConsumerSubTypesWithBlock:(id)arg0 ;


@end


#endif