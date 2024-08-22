// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TAFILTERGENERALSETTINGS_H
#define TAFILTERGENERALSETTINGS_H


#import <Foundation/Foundation.h>


@interface TAFilterGeneralSettings : NSObject

@property (readonly, nonatomic) BOOL allowNavGeoHintAsPrivateVehicleHint; // ivar: _allowNavGeoHintAsPrivateVehicleHint
@property (readonly, nonatomic) NSUInteger beepOnMovePedestrianImmediacyType; // ivar: _beepOnMovePedestrianImmediacyType
@property (readonly, nonatomic) NSUInteger beepOnMoveVehicularImmediacyType; // ivar: _beepOnMoveVehicularImmediacyType
@property (readonly, nonatomic) CGFloat capOfReasonableWalkingSpeed; // ivar: _capOfReasonableWalkingSpeed
@property (readonly, nonatomic) CGFloat durationOfConsideration; // ivar: _durationOfConsideration
@property (readonly, nonatomic) NSUInteger nextPLOIPedestrianImmediacyType; // ivar: _nextPLOIPedestrianImmediacyType
@property (readonly, nonatomic) NSUInteger nextPLOIVehicularImmediacyType; // ivar: _nextPLOIVehicularImmediacyType
@property (readonly, nonatomic) CGFloat thresholdOfLocationRelevance; // ivar: _thresholdOfLocationRelevance
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDistance; // ivar: _thresholdOfSignificantDistance
@property (readonly, nonatomic) CGFloat thresholdOfSignificantDuration; // ivar: _thresholdOfSignificantDuration
@property (readonly, nonatomic) NSUInteger vehicularImmediacyType; // ivar: _vehicularImmediacyType


-(id)initWithDefaults;
-(id)initWithDurationOfConsideration:(CGFloat)arg0 thresholdOfLocationRelevance:(CGFloat)arg1 thresholdOfSignificantDuration:(CGFloat)arg2 thresholdOfSignificantDistance:(CGFloat)arg3 capOfReasonableWalkingSpeed:(CGFloat)arg4 allowNavGeoHintAsPrivateVehicleHint:(BOOL)arg5 vehicularImmediacyType:(NSUInteger)arg6 beepOnMoveVehicularImmediacyType:(NSUInteger)arg7 beepOnMovePedestrianImmediacyType:(NSUInteger)arg8 nextPLOIVehicularImmediacyType:(NSUInteger)arg9 nextPLOIPedestrianImmediacyType:(NSUInteger)arg10 ;
-(id)initWithDurationOfConsiderationOrDefault:(id)arg0 thresholdOfLocationRelevanceOrDefault:(id)arg1 thresholdOfSignificantDurationOrDefault:(id)arg2 thresholdOfSignificantDistanceOrDefault:(id)arg3 capOfReasonableWalkingSpeedOrDefault:(id)arg4 allowNavGeoHintAsPrivateVehicleHintOrDefault:(id)arg5 vehicularImmediacyTypeOrDefault:(id)arg6 beepOnMoveVehicularImmediacyTypeOrDefault:(id)arg7 beepOnMovePedestrianImmediacyTypeOrDefault:(id)arg8 nextPLOIVehicularImmediacyTypeOrDefault:(id)arg9 nextPLOIPedestrianImmediacyTypeOrDefault:(id)arg10 ;


@end


#endif