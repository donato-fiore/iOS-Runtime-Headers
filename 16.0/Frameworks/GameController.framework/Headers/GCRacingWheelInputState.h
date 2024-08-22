// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GCRACINGWHEELINPUTSTATE_H
#define GCRACINGWHEELINPUTSTATE_H

@class GCDevicePhysicalInputFacade;
@protocol GCButtonElement;


#import "GCGearShifterElement.h"
#import "GCSteeringWheelElement.h"

@interface GCRacingWheelInputState : GCDevicePhysicalInputFacade

@property (readonly) NSObject<GCButtonElement> *acceleratorPedal;
@property (readonly) NSObject<GCButtonElement> *brakePedal;
@property (readonly) NSObject<GCButtonElement> *clutchPedal;
@property (readonly) GCGearShifterElement *shifter;
@property (readonly) GCSteeringWheelElement *wheel;




@end


#endif