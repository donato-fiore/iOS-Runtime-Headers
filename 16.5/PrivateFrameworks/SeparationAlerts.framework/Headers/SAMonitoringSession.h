// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAMONITORINGSESSION_H
#define SAMONITORINGSESSION_H

@class NSDate, CLLocation, NSUUID, TALocationLite, CLCircularRegion;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SAScenarioClassifier.h"

@interface SAMonitoringSession : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDate *caLastStateTransition; // ivar: _caLastStateTransition
@property (retain, nonatomic) CLLocation *caSeparationLocation; // ivar: _caSeparationLocation
@property (retain, nonatomic) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (nonatomic) BOOL earlyAirplaneTrigger; // ivar: _earlyAirplaneTrigger
@property (retain, nonatomic) NSDate *earlyVehicularStateChangeDate; // ivar: _earlyVehicularStateChangeDate
@property (nonatomic) BOOL earlyVehicularTrigger; // ivar: _earlyVehicularTrigger
@property (retain, nonatomic) TALocationLite *firstNotWithYouLocation; // ivar: _firstNotWithYouLocation
@property (retain, nonatomic) CLCircularRegion *geofence; // ivar: _geofence
@property (nonatomic) NSUInteger scenario; // ivar: _scenario
@property (retain, nonatomic) SAScenarioClassifier *scenarioClassifier; // ivar: _scenarioClassifier
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) NSDate *trackedTravelingStartDate; // ivar: _trackedTravelingStartDate
@property (retain, nonatomic) TALocationLite *trackedTravelingStartLocation; // ivar: _trackedTravelingStartLocation
@property (retain, nonatomic) NSDate *travelingGeofenceExitDate; // ivar: _travelingGeofenceExitDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceUUID:(id)arg0 state:(NSUInteger)arg1 geofence:(id)arg2 scenario:(NSUInteger)arg3 trackedTravelingStartDate:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif