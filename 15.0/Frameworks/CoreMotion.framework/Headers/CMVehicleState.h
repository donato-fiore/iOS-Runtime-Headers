// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMVEHICLESTATE_H
#define CMVEHICLESTATE_H


#import <Foundation/Foundation.h>


@interface CMVehicleState : NSObject



+(BOOL)isAvailable;
+(NSUInteger)isVehicleBasedOnDeviceId:(id)arg0 deviceType:(int)arg1 ;
+(NSUInteger)vehicularHints;
+(NSUInteger)vehicularOperatorState;
+(NSUInteger)vehicularState;
+(id)mostRecentInVehicle;
+(id)mostRecentVehicleConnection;


@end


#endif