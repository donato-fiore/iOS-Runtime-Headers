// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFRIDESTATUSCONTENTITEM_H
#define WFRIDESTATUSCONTENTITEM_H

@class WFContentItem, INRideStatus;



@interface WFRideStatusContentItem : WFContentItem

@property (readonly, nonatomic) INRideStatus *rideStatus;


+(id)countDescription;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)propertyBuilders;
+(id)typeDescription;
-(id)disclaimerMessage;
-(id)driver;
-(id)dropOffLocation;
-(id)estimatedDropOffDate;
-(id)estimatedPickupDate;
-(id)maximumPrice;
-(id)minimumPrice;
-(id)pickupLocation;
-(id)rideOptionName;
-(id)vehicleDescription;


@end


#endif