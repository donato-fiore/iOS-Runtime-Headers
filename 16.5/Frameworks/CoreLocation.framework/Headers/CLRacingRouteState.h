// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLRACINGROUTESTATE_H
#define CLRACINGROUTESTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLRacingRouteState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat altitude; // ivar: _altitude
@property (readonly, nonatomic) CGFloat averagePace; // ivar: _averagePace
@property (readonly, nonatomic) CGFloat distanceAlongReference; // ivar: _distanceAlongReference
@property (readonly, nonatomic) CGFloat distanceSinceStart; // ivar: _distanceSinceStart
@property (readonly, nonatomic) CGFloat latitude; // ivar: _latitude
@property (readonly, nonatomic) CGFloat longitude; // ivar: _longitude
@property (readonly, nonatomic) CGFloat odometer; // ivar: _odometer
@property (readonly, nonatomic) CGFloat offRouteDistance; // ivar: _offRouteDistance
@property (readonly, nonatomic) CGFloat offRouteTime; // ivar: _offRouteTime
@property (readonly, nonatomic) CGFloat timeSinceStart; // ivar: _timeSinceStart
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 altitude:(CGFloat)arg2 odometer:(CGFloat)arg3 timestamp:(CGFloat)arg4 timeSinceStart:(CGFloat)arg5 offRouteTime:(CGFloat)arg6 distanceSinceStart:(CGFloat)arg7 offRouteDistance:(CGFloat)arg8 averagePace:(CGFloat)arg9 distanceAlongReference:(CGFloat)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif