// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSANALYTICSEVENTCONTENTINELIGIBLE_H
#define TPSANALYTICSEVENTCONTENTINELIGIBLE_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventContentIneligible : TPSAnalyticsEvent

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSString *context; // ivar: _context
@property (readonly, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (nonatomic) NSUInteger displayCount; // ivar: _displayCount
@property (readonly, nonatomic) NSUInteger displayType; // ivar: _displayType
@property (readonly, nonatomic) NSInteger reason; // ivar: _reason
@property (readonly, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(NSUInteger)arg4 reason:(NSInteger)arg5 date:(id)arg6 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 displayType:(NSUInteger)arg4 reason:(NSInteger)arg5 date:(id)arg6 ;
-(id)duetEvent;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif