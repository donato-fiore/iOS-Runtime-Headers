// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSANALYTICSEVENTTIPNOTDISPLAYED_H
#define TPSANALYTICSEVENTTIPNOTDISPLAYED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventTipNotDisplayed : TPSAnalyticsEvent

@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (readonly, copy, nonatomic) NSString *displayType; // ivar: _displayType
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly, copy, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
-(id)duetEvent;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReason:(id)arg0 lastOfferedTipID:(id)arg1 lastOfferedCorrelationID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 ;
-(id)initWithReason:(id)arg0 lastOfferedTipID:(id)arg1 lastOfferedCorrelationID:(id)arg2 lastOfferedBundleID:(id)arg3 lastOfferedContext:(id)arg4 date:(id)arg5 ;
-(id)initWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 reason:(NSInteger)arg3 context:(id)arg4 date:(id)arg5 ;
-(id)initWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 reason:(id)arg3 context:(id)arg4 date:(id)arg5 displayType:(id)arg6 ;
-(id)initWithTipID:(id)arg0 correlationID:(id)arg1 reason:(NSInteger)arg2 context:(id)arg3 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif