// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSANALYTICSEVENTRULEMATCHED_H
#define TPSANALYTICSEVENTRULEMATCHED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventRuleMatched : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (readonly, nonatomic) NSString *ruleID; // ivar: _ruleID
@property (readonly, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 ruleID:(id)arg2 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 ruleID:(id)arg2 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif