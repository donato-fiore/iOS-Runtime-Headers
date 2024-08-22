// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMMOTIONACTIVITY_H
#define CMMOTIONACTIVITY_H

@class NSDate;


#import "CMLogItem.h"

@interface CMMotionActivity : CMLogItem {
    CLMotionActivity fState;
}


@property (readonly, nonatomic) BOOL automotive;
@property (readonly, nonatomic) NSInteger confidence;
@property (readonly, nonatomic) BOOL cycling;
@property (readonly, nonatomic) BOOL running;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) BOOL stationary;
@property (readonly, nonatomic) BOOL unknown;
@property (readonly, nonatomic, getter=isVehicleBTHint) BOOL vehicleBTHint;
@property (readonly, nonatomic, getter=isVehicleBasebandHint) BOOL vehicleBasebandHint;
@property (readonly, nonatomic, getter=isVehicleConnected) BOOL vehicleConnected;
@property (readonly, nonatomic, getter=isVehicleGpsHint) BOOL vehicleGpsHint;
@property (readonly, nonatomic, getter=isVehicleMotionHint) BOOL vehicleMotionHint;
@property (readonly, nonatomic, getter=isVehicleWifiHint) BOOL vehicleWifiHint;
@property (readonly, nonatomic) BOOL walking;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMotionActivity:(struct CLMotionActivity )arg0 ;
-(struct CLMotionActivity *)motionActivity;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif