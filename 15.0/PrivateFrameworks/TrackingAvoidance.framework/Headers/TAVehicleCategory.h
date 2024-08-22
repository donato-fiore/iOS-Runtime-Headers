// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAVEHICLECATEGORY_H
#define TAVEHICLECATEGORY_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface TAVehicleCategory : NSObject

@property (readonly, copy, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSUInteger vehicleCategoryType; // ivar: _vehicleCategoryType


+(NSUInteger)speculateTAVehicleCategoryTypeFromGeoNavigationNotification:(id)arg0 ;
+(NSUInteger)speculateTAVehicleCategoryTypeFromVehicleStateNotification:(id)arg0 ;
-(id)initWithTAGeoNavigationNotification:(id)arg0 ;
-(id)initWithTAVehicularStateNotification:(id)arg0 ;
-(id)initWithVehicleCategoryType:(NSUInteger)arg0 andDate:(id)arg1 ;


@end


#endif