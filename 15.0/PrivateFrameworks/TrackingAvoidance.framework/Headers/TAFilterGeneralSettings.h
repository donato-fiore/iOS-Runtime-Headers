// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TAFILTERGENERALSETTINGS_H
#define TAFILTERGENERALSETTINGS_H


#import <Foundation/Foundation.h>


@interface TAFilterGeneralSettings : NSObject

@property (readonly, nonatomic) BOOL allowNavGeoHintAsPrivateVehicleHint; // ivar: _allowNavGeoHintAsPrivateVehicleHint
@property (readonly, nonatomic) CGFloat capOfReasonableWalkingSpeed; // ivar: _capOfReasonableWalkingSpeed
@property (readonly, nonatomic) CGFloat durationOfConsideration; // ivar: _durationOfConsideration
@property (readonly, nonatomic) CGFloat thresholdOfLocationRelevance; // ivar: _thresholdOfLocationRelevance
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDistance; // ivar: _thresholdOfSignificantDistance
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDuration; // ivar: _thresholdOfSignificantDuration


-(id)initWithDefaults;
-(id)initWithDurationOfConsideration:(CGFloat)arg0 thresholdOfLocationRelevance:(CGFloat)arg1 thresholdOfSignificantDuration:(CGFloat)arg2 thresholdOfSignificantDistance:(CGFloat)arg3 capOfReasonableWalkingSpeed:(CGFloat)arg4 allowNavGeoHintAsPrivateVehicleHint:(BOOL)arg5 ;
-(id)initWithDurationOfConsiderationOrDefault:(id)arg0 thresholdOfLocationRelevanceOrDefault:(id)arg1 thresholdOfSignificantDurationOrDefault:(id)arg2 thresholdOfSignificantDistanceOrDefault:(id)arg3 capOfReasonableWalkingSpeedOrDefault:(id)arg4 allowNavGeoHintAsPrivateVehicleHint:(id)arg5 ;


@end


#endif