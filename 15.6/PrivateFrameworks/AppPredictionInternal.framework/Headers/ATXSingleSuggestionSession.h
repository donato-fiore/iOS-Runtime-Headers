// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSINGLESUGGESTIONSESSION_H
#define ATXSINGLESUGGESTIONSESSION_H

@class NSMutableOrderedSet, NSData, NSMutableDictionary, NSDate, ATXProactiveSuggestion;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXSingleSuggestionSession : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableOrderedSet *associatedBlendingCacheUUIDs; // ivar: _associatedBlendingCacheUUIDs
@property (retain, nonatomic) NSMutableOrderedSet *associatedClientModelCacheUUIDs; // ivar: _associatedClientModelCacheUUIDs
@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSData *feedbackMetadata; // ivar: _feedbackMetadata
@property (retain, nonatomic) NSMutableOrderedSet *matchingSuggestionUUIDs; // ivar: _matchingSuggestionUUIDs
@property (retain, nonatomic) NSMutableDictionary *sessionContextStatusByConsumerSubType; // ivar: _sessionContextStatusByConsumerSubType
@property (retain, nonatomic) NSDate *sessionExpirationDate; // ivar: _sessionExpirationDate
@property (retain, nonatomic) ATXProactiveSuggestion *suggestion; // ivar: _suggestion


+(BOOL)supportsSecureCoding;
+(id)stringForSuggestionSessionStatus:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXSingleSuggestionSession:(id)arg0 ;
-(BOOL)tryUpdateSessionStatus:(NSUInteger)arg0 consumerSubType:(unsigned char)arg1 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrackedProactiveSuggestion:(id)arg0 clientModelCacheUUID:(id)arg1 feedbackMetadata:(id)arg2 ;
-(id)initWithTrackedProactiveSuggestion:(id)arg0 feedbackMetadata:(id)arg1 matchingSuggestionUUIDs:(id)arg2 associatedBlendingCacheUUIDs:(id)arg3 associatedClientModelCacheUUIDs:(id)arg4 sessionContextStatuses:(id)arg5 sessionExpirationDate:(id)arg6 completed:(BOOL)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateShownAndEngagedSessionStatusesAndConsumerSubTypesWithBlock:(id)arg0 ;


@end


#endif