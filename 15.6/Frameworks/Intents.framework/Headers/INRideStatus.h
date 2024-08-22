// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INRIDESTATUS_H
#define INRIDESTATUS_H

@class NSArray, NSString, CLPlacemark, NSDate, NSUserActivity;
@protocol INCacheableContainer, INImageProxyInjecting, INRideStatusExport, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INRideCompletionStatus.h"
#import "INRideDriver.h"
#import "INRideOption.h"
#import "INDateComponentsRange.h"
#import "INRideVehicle.h"

@interface INRideStatus : NSObject <INCacheableContainer, INImageProxyInjecting, INRideStatusExport, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *additionalActionActivities; // ivar: _additionalActionActivities
@property (copy, nonatomic) INRideCompletionStatus *completionStatus; // ivar: _completionStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) INRideDriver *driver; // ivar: _driver
@property (copy, nonatomic) CLPlacemark *dropOffLocation; // ivar: _dropOffLocation
@property (copy, nonatomic) NSDate *estimatedDropOffDate; // ivar: _estimatedDropOffDate
@property (copy, nonatomic) NSDate *estimatedPickupDate; // ivar: _estimatedPickupDate
@property (copy, nonatomic) NSDate *estimatedPickupEndDate; // ivar: _estimatedPickupEndDate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger phase; // ivar: _phase
@property (copy, nonatomic) CLPlacemark *pickupLocation; // ivar: _pickupLocation
@property (copy, nonatomic) NSString *rideIdentifier; // ivar: _rideIdentifier
@property (copy, nonatomic) INRideOption *rideOption; // ivar: _rideOption
@property (copy, nonatomic) INDateComponentsRange *scheduledPickupTime; // ivar: _scheduledPickupTime
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUserActivity *userActivityForCancelingInApplication; // ivar: _userActivityForCancelingInApplication
@property (copy, nonatomic) INRideVehicle *vehicle; // ivar: _vehicle
@property (copy, nonatomic) NSArray *waypoints; // ivar: _waypoints


+(BOOL)supportsSecureCoding;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
// -(void)_injectProxiesForImages:(id)arg0 completion:(unk)arg1  ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif