// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLEMERGENCYLOCATIONSELECTORCONFIG_H
#define CLEMERGENCYLOCATIONSELECTORCONFIG_H


#import <Foundation/Foundation.h>

#import "CLEmergencyLocationUsabilityCriteria.h"

@interface CLEmergencyLocationSelectorConfig : NSObject

@property (nonatomic) NSInteger feature; // ivar: _feature
@property (nonatomic) BOOL firstLocationEarlyReturnEnabled; // ivar: _firstLocationEarlyReturnEnabled
@property (nonatomic) CGFloat firstLocationMaxEarlyReturnHunc; // ivar: _firstLocationMaxEarlyReturnHunc
@property (nonatomic) CGFloat firstLocationMaxEarlyReturnVunc; // ivar: _firstLocationMaxEarlyReturnVunc
@property (nonatomic) CGFloat firstLocationTimeout; // ivar: _firstLocationTimeout
@property (retain, nonatomic) CLEmergencyLocationUsabilityCriteria *firstLocationUsabilityCriteria; // ivar: _firstLocationUsabilityCriteria
@property (nonatomic) BOOL firstUpdateEnabled; // ivar: _firstUpdateEnabled
@property (nonatomic) CGFloat firstUpdateTimeout; // ivar: _firstUpdateTimeout
@property (nonatomic) CGFloat locationUpdateChangeInAltitudeToSendEarly; // ivar: _locationUpdateChangeInAltitudeToSendEarly
@property (nonatomic) CGFloat locationUpdateDistanceMovedToSendEarly; // ivar: _locationUpdateDistanceMovedToSendEarly
@property (nonatomic) CGFloat locationUpdateHuncReductionToSendEarly; // ivar: _locationUpdateHuncReductionToSendEarly
@property (nonatomic) CGFloat locationUpdateMinDelay; // ivar: _locationUpdateMinDelay
@property (nonatomic) CGFloat locationUpdateTimeout; // ivar: _locationUpdateTimeout
@property (retain, nonatomic) CLEmergencyLocationUsabilityCriteria *locationUpdateUsabilityCriteria; // ivar: _locationUpdateUsabilityCriteria
@property (nonatomic) CGFloat locationUpdateVuncReductionToSendEarly; // ivar: _locationUpdateVuncReductionToSendEarly
@property (nonatomic) BOOL periodicUpdatesEnabled; // ivar: _periodicUpdatesEnabled


+(id)featureString:(NSInteger)arg0 ;
-(id)initForFeature:(NSInteger)arg0 withUpdatesEnabled:(BOOL)arg1 ;
-(void)dealloc;
-(void)printConfiguration;
-(void)setDefaultsForSIP;


@end


#endif