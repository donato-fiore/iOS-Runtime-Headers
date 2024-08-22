// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTTIPTAPPED_H
#define TPSANALYTICSEVENTTIPTAPPED_H

@class NSString;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventTipTapped : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSString *correlationID; // ivar: _correlationID
@property (readonly, nonatomic) NSUInteger displayType; // ivar: _displayType
@property (retain, nonatomic) NSString *tipID; // ivar: _tipID


+(BOOL)supportsSecureCoding;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 ;
+(id)eventWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 ;
-(id)_initWithTipID:(id)arg0 correlationID:(id)arg1 bundleID:(id)arg2 context:(id)arg3 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDataProvider:(id)arg0 ;


@end


#endif