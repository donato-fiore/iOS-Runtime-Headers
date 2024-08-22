// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPARTIALINTENTHANDLINGCONTEXT_H
#define ATXPARTIALINTENTHANDLINGCONTEXT_H

@class NSMutableArray, NSString, NSDate, NSArray, ATXAction;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXPartialIntentHandlingContext : NSObject <NSSecureCoding>

 {
    NSMutableArray *_feedbackResults;
}


@property (readonly, nonatomic) NSString *currentApp; // ivar: _currentApp
@property (readonly, nonatomic) NSDate *currentAppSessionStartDate; // ivar: _currentAppSessionStartDate
@property (readonly, nonatomic) NSArray *feedbackResults;
@property (readonly, nonatomic) ATXAction *matchingAppSessionDonatedAction; // ivar: _matchingAppSessionDonatedAction
@property (readonly, nonatomic) NSDate *matchingAppSessionDonationDate; // ivar: _matchingAppSessionDonationDate
@property (readonly, nonatomic) ATXAction *partiallyExecutedAction; // ivar: _partiallyExecutedAction
@property (readonly, nonatomic) NSDate *partiallyExecutedActionStartDate; // ivar: _partiallyExecutedActionStartDate
@property (readonly, nonatomic) ATXAction *shortcutsRuntimeDonatedAction; // ivar: _shortcutsRuntimeDonatedAction
@property (readonly, nonatomic) NSDate *shortcutsRuntimeDonationDate; // ivar: _shortcutsRuntimeDonationDate


+(BOOL)supportsSecureCoding;
-(BOOL)_isCompleteEngagementForATXAction:(id)arg0 withMatchingDonatedAction:(id)arg1 ;
-(BOOL)_isPartialEngagementForATXAction:(id)arg0 withMatchingDonatedAction:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXPartialIntentHandlingContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)_partiallyExecutedSuggestionFromFeedbackResult:(id)arg0 ;
-(id)atxActionFromIntentEvent:(id)arg0 ;
-(id)handleAppLaunchAndReturnCompletedResults:(id)arg0 ;
-(id)handleNewFeedbackResultAndReturnCompletedResults:(id)arg0 ;
-(id)handleNewIntentEventAndReturnCompletedResults:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeedbackResults:(id)arg0 partiallyExecutedAction:(id)arg1 partiallyExecutedActionStartDate:(id)arg2 currentApp:(id)arg3 currentAppSessionStartDate:(id)arg4 shortcutsRuntimeDonatedAction:(id)arg5 shortcutsRuntimeDonationDate:(id)arg6 matchingAppSessionDonatedAction:(id)arg7 matchingAppSessionDonationDate:(id)arg8 ;
-(void)_resetInternalState;
-(void)_tryUpdateMatchingAppSessionDonatedAction:(id)arg0 eventDate:(id)arg1 ;
-(void)_tryUpdatePartialIntentSessionState;
-(void)_tryUpdateShortcutsRuntimeDonatedAction:(id)arg0 eventDate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif