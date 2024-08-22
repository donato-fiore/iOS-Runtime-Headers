// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAVEHICLECATEGORYLOGIC_H
#define TAVEHICLECATEGORYLOGIC_H


#import <Foundation/Foundation.h>


@interface TAVehicleCategoryLogic : NSObject



+(id)accumulatedTAVehicleCategoryHistoryFromGeoNavigationNotificationInTAStore:(id)arg0 since:(id)arg1 to:(id)arg2 ;
+(id)accumulatedTAVehicleCategoryHistoryFromVehicleStateNotificationInTAStore:(id)arg0 since:(id)arg1 to:(id)arg2 ;
+(id)extractPrivateVehicleHintsFromTAStore:(id)arg0 since:(id)arg1 to:(id)arg2 ;


@end


#endif