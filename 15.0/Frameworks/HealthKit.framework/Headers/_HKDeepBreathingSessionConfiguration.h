// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKDEEPBREATHINGSESSIONCONFIGURATION_H
#define _HKDEEPBREATHINGSESSIONCONFIGURATION_H

@class NSDate;


#import "HKTaskConfiguration.h"

@interface _HKDeepBreathingSessionConfiguration : HKTaskConfiguration

@property (nonatomic) CGFloat inhaleExhaleRatio; // ivar: _inhaleExhaleRatio
@property (nonatomic) CGFloat respirationsPerMinute; // ivar: _respirationsPerMinute
@property (nonatomic) CGFloat sessionDuration; // ivar: _sessionDuration
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)sessionConfigurationWithStartDate:(id)arg0 sessionDuration:(CGFloat)arg1 inhaleExhaleRatio:(CGFloat)arg2 respirationsPerMinute:(CGFloat)arg3 ;
-(id)_initWithStartDate:(id)arg0 sessionDuration:(CGFloat)arg1 inhaleExhaleRatio:(CGFloat)arg2 respirationsPerMinute:(CGFloat)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif