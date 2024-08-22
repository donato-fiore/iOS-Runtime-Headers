// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARPROUTINGSESSION_H
#define ARPROUTINGSESSION_H

@class NSDateInterval, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARPRoutingSession : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateInterval *interval; // ivar: _interval
@property (readonly, nonatomic) NSDictionary *microLocationProbabilityVector; // ivar: _microLocationProbabilityVector
@property (readonly, copy, nonatomic) NSString *outputDeviceID; // ivar: _outputDeviceID


+(BOOL)supportsSecureCoding;
+(CGFloat)microLocationCorrelationGracePeriod;
+(CGFloat)minimumRoutingEventDuration;
+(CGFloat)routingSessionTimeout;
+(id)routingSessionsFromNowPlayingEvents:(id)arg0 microLocationEvents:(id)arg1 routingSessionTimeout:(CGFloat)arg2 ;
+(void)writeSessions:(id)arg0 routingSessionTimeout:(CGFloat)arg1 file:(id)arg2 error:(*id)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOutputDeviceID:(id)arg0 interval:(id)arg1 microLocationProbabilityVector:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif