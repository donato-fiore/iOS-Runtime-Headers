// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SALOCALSEARCHVEHICLEEVENT_H
#define SALOCALSEARCHVEHICLEEVENT_H

@class NSDate, NSString, NSNumber;


#import "SADomainObject.h"
#import "SALocation.h"

@interface SALocalSearchVehicleEvent : SADomainObject

@property (copy, nonatomic) NSDate *date;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSNumber *userSetLocation;
@property (copy, nonatomic) NSString *vehicleIdentifier;


+(id)vehicleEvent;
+(id)vehicleEventWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif