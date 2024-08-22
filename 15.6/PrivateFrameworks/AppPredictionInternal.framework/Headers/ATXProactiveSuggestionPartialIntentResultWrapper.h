// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPROACTIVESUGGESTIONPARTIALINTENTRESULTWRAPPER_H
#define ATXPROACTIVESUGGESTIONPARTIALINTENTRESULTWRAPPER_H

@class ATXProactiveSuggestionUIFeedbackResult, ATXAction, NSDate, NSNumber, NSUUID;



@interface ATXProactiveSuggestionPartialIntentResultWrapper : ATXProactiveSuggestionUIFeedbackResult

@property (readonly, nonatomic) ATXAction *matchingIntentDonatedAction; // ivar: _matchingIntentDonatedAction
@property (readonly, nonatomic) NSDate *matchingIntentDonationDate; // ivar: _matchingIntentDonationDate
@property (readonly, nonatomic) NSNumber *partialEngagementWasCompleteMatch; // ivar: _partialEngagementWasCompleteMatch
@property (readonly, nonatomic) ATXAction *partiallyExecutedAction; // ivar: _partiallyExecutedAction
@property (readonly, nonatomic) NSDate *partiallyExecutedActionStartDate; // ivar: _partiallyExecutedActionStartDate
@property (readonly, nonatomic) NSUUID *partiallyExecutedUUID; // ivar: _partiallyExecutedUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXProactiveSuggestionPartialIntentResultWrapper:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUIFeedbackResult:(id)arg0 ;
-(id)initWithUIFeedbackResult:(id)arg0 partiallyExecutedUUID:(id)arg1 partiallyExecutedAction:(id)arg2 partiallyExecutedActionStartDate:(id)arg3 matchingIntentDonatedAction:(id)arg4 matchingIntentDonationDate:(id)arg5 partialEngagementWasCompleteMatch:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)markPartiallyExecutedSuggestionAsAbandoned;
-(void)markPartiallyExecutedSuggestionAsCompleteMatchWithDonatedAction:(id)arg0 donationDate:(id)arg1 ;
-(void)markPartiallyExecutedSuggestionAsPartialMatchWithDonatedAction:(id)arg0 donationDate:(id)arg1 ;
-(void)updatePartiallyExecutedActionWithProactiveSuggestion:(id)arg0 ;


@end


#endif