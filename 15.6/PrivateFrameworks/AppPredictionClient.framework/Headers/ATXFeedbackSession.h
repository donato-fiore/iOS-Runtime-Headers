// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXFEEDBACKSESSION_H
#define ATXFEEDBACKSESSION_H

@class NSMutableOrderedSet, NSUUID, NSOrderedSet, NSDate, NSNumber, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXAction.h"

@interface ATXFeedbackSession : NSObject <NSSecureCoding>

 {
    NSMutableOrderedSet *_engagedUUIDs;
    NSMutableOrderedSet *_rejectedUUIDs;
    NSMutableOrderedSet *_shownUUIDs;
}


@property (readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID; // ivar: _blendingUICacheUpdateUUID
@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) BOOL demoModeEnabled;
@property (readonly, nonatomic) BOOL developerModeEnabled;
@property (readonly, nonatomic) NSOrderedSet *engagedUUIDs;
@property (readonly, nonatomic) ATXAction *matchingIntentDonatedAction; // ivar: _matchingIntentDonatedAction
@property (readonly, nonatomic) NSDate *matchingIntentDonationDate; // ivar: _matchingIntentDonationDate
@property (readonly, nonatomic) NSNumber *partialEngagementWasCompleteMatch; // ivar: _partialEngagementWasCompleteMatch
@property (readonly, nonatomic) ATXAction *partiallyExecutedAction; // ivar: _partiallyExecutedAction
@property (readonly, nonatomic) NSDate *partiallyExecutedActionStartDate; // ivar: _partiallyExecutedActionStartDate
@property (readonly, nonatomic) NSUUID *partiallyExecutedUUID; // ivar: _partiallyExecutedUUID
@property (readonly, nonatomic) NSOrderedSet *rejectedUUIDs;
@property (readonly, nonatomic) NSDate *sessionEndDate; // ivar: _sessionEndDate
@property (readonly, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSObject<NSSecureCoding> *sessionMetadata; // ivar: _sessionMetadata
@property (readonly, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate
@property (readonly, nonatomic) NSOrderedSet *shownUUIDs;


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXFeedbackSession:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)homeScreenSessionMetadata;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 consumerSubType:(unsigned char)arg1 sessionStartDate:(id)arg2 ;
-(id)initWithSessionIdentifier:(id)arg0 consumerSubType:(unsigned char)arg1 sessionStartDate:(id)arg2 sessionEndDate:(id)arg3 blendingUICacheUpdateUUID:(id)arg4 engagedUUIDs:(id)arg5 rejectedUUIDs:(id)arg6 shownUUIDs:(id)arg7 sessionMetadata:(id)arg8 partiallyExecutedUUID:(id)arg9 partiallyExecutedAction:(id)arg10 matchingIntentDonatedAction:(id)arg11 partiallyExecutedActionStartDate:(id)arg12 matchingIntentDonationDate:(id)arg13 partialEngagementWasCompleteMatch:(id)arg14 ;
-(id)spotlightSessionMetadata;
-(unsigned char)uiConsumerSubTypeForFeedback;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeWithSessionEndDate:(id)arg0 ;
-(void)markPartiallyExecutedSuggestionAsAbandoned;
-(void)markPartiallyExecutedSuggestionAsCompleteMatchWithDonatedAction:(id)arg0 donationDate:(id)arg1 ;
-(void)markPartiallyExecutedSuggestionAsPartialMatchWithDonatedAction:(id)arg0 donationDate:(id)arg1 ;
-(void)updateBlendingUICacheUpdateUUIDIfUnset:(id)arg0 ;
-(void)updateEngagedUUIDs:(id)arg0 rejectedUUIDs:(id)arg1 shownUUIDs:(id)arg2 ;
-(void)updatePartiallyExecutedActionWithProactiveSuggestion:(id)arg0 engagementDate:(id)arg1 ;
-(void)updateSessionMetadata:(id)arg0 ;


@end


#endif