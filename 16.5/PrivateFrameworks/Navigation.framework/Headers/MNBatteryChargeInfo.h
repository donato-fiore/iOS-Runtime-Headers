// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MNBATTERYCHARGEINFO_H
#define MNBATTERYCHARGEINFO_H

@class NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MNBatteryChargeInfo : NSObject <NSSecureCoding>

 {
    NSUInteger _legIndex;
    NSUUID *_routeID;
}


@property (readonly, nonatomic) CGFloat batteryChargeRemainingAtEndOfLeg; // ivar: _batteryChargeRemainingAtEndOfLeg
@property (readonly, nonatomic) CGFloat batteryChargeRemainingAtEndOfRoute; // ivar: _batteryChargeRemainingAtEndOfRoute


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithBatteryChargeRemainingAtEndOfLeg:(CGFloat)arg0 batteryChargeRemainingAtEndOfRoute:(CGFloat)arg1 forLegIndex:(NSUInteger)arg2 forRouteID:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif