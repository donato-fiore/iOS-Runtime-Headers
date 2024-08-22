// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTSOURCECOREROUTINEVEHICLEEVENT_H
#define RTSOURCECOREROUTINEVEHICLEEVENT_H



#import "RTSourceCoreRoutine.h"
#import "RTVehicleEvent.h"

@interface RTSourceCoreRoutineVehicleEvent : RTSourceCoreRoutine

@property (readonly, nonatomic) RTVehicleEvent *vehicleEvent; // ivar: _vehicleEvent


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVehicleEvent:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif