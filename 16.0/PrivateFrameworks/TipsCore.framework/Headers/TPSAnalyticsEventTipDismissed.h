// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTTIPDISMISSED_H
#define TPSANALYTICSEVENTTIPDISMISSED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventTipDismissed : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (readonly, nonatomic) NSString *dismissType; // ivar: _dismissType
@property (nonatomic) NSUInteger displayCount; // ivar: _displayCount
@property (nonatomic) CGFloat timeToDismissal; // ivar: _timeToDismissal
@property (readonly, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(CGFloat)arg5 date:(id)arg6 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 dismissType:(id)arg4 timeToDismissal:(CGFloat)arg5 date:(id)arg6 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif