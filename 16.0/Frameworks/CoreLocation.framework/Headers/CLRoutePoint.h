// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLROUTEPOINT_H
#define CLROUTEPOINT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLRoutePoint : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat altitude_m; // ivar: _altitude_m
@property (readonly, nonatomic) CGFloat latitude_deg; // ivar: _latitude_deg
@property (readonly, nonatomic) CGFloat longitude_deg; // ivar: _longitude_deg
@property (readonly, nonatomic) CGFloat odometer_m; // ivar: _odometer_m
@property (readonly, nonatomic) int signalEnvironmentType; // ivar: _signalEnvironmentType
@property (readonly, nonatomic) CGFloat timestamp_s; // ivar: _timestamp_s


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLatitude:(CGFloat)arg0 longitude:(CGFloat)arg1 altitude:(CGFloat)arg2 odometer:(CGFloat)arg3 timestamp:(CGFloat)arg4 signalEnvironmentType:(int)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif