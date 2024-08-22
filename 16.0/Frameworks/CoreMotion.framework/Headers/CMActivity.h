// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMACTIVITY_H
#define CMACTIVITY_H



#import "CMLogItem.h"

@interface CMActivity : CMLogItem {
    CLMotionActivity fActivity;
}


@property (readonly, nonatomic) int confidence;
@property (readonly, nonatomic) BOOL hasExitedVehicle;
@property (readonly, nonatomic) BOOL isDriving;
@property (readonly, nonatomic) BOOL isMoving;
@property (readonly, nonatomic) BOOL isRunning;
@property (readonly, nonatomic) BOOL isWalking;
@property (readonly, nonatomic) BOOL maybeExitingVehicle;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMotionActivity:(struct CLMotionActivity )arg0 ;
-(struct CLMotionActivity )activity;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif