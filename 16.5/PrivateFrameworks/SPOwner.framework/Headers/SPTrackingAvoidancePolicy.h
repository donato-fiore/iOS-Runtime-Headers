// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPTRACKINGAVOIDANCEPOLICY_H
#define SPTRACKINGAVOIDANCEPOLICY_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SPTrackingAvoidancePolicy : NSObject <NSSecureCoding>



@property (nonatomic) BOOL allowNavGeoHintAsPrivateVehicleHint; // ivar: _allowNavGeoHintAsPrivateVehicleHint
@property (nonatomic) NSInteger assumedKeyRollHour; // ivar: _assumedKeyRollHour
@property (nonatomic) CGFloat capOfReasonableWalkingSpeed; // ivar: _capOfReasonableWalkingSpeed
@property (nonatomic) CGFloat durationOfConsideration; // ivar: _durationOfConsideration
@property (nonatomic) CGFloat expiryTimeInterval; // ivar: _expiryTimeInterval
@property (nonatomic) CGFloat keepAliveInterval; // ivar: _keepAliveInterval
@property (nonatomic) CGFloat maxExpectedWildInterval; // ivar: _maxExpectedWildInterval
@property (nonatomic) CGFloat minimumStagingInterval; // ivar: _minimumStagingInterval
@property (nonatomic) CGFloat purgeTimeInterval; // ivar: _purgeTimeInterval
@property (nonatomic) CGFloat scanInterval; // ivar: _scanInterval
@property (nonatomic) BOOL shouldAlertImmediatelyForImmediateTypes; // ivar: _shouldAlertImmediatelyForImmediateTypes
@property (nonatomic) NSInteger stagingBackstopHour; // ivar: _stagingBackstopHour
@property (nonatomic) BOOL surfaceImmediatelyBetweenBackstopAndKeyroll; // ivar: _surfaceImmediatelyBetweenBackstopAndKeyroll
@property (nonatomic) CGFloat thresholdOfLocationRelevance; // ivar: _thresholdOfLocationRelevance
@property (nonatomic) CGFloat thresholdOfSignificantDistance; // ivar: _thresholdOfSignificantDistance
@property (nonatomic) CGFloat thresholdOfSignificantDuration; // ivar: _thresholdOfSignificantDuration
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 expiryTimeInterval:(CGFloat)arg1 keepAliveInterval:(CGFloat)arg2 minimumStagingInterval:(CGFloat)arg3 stagingBackstopHour:(NSInteger)arg4 assumedKeyRollHour:(NSInteger)arg5 scanInterval:(CGFloat)arg6 surfaceImmediatelyBetweenBackstopAndKeyroll:(BOOL)arg7 maxExpectedWildInterval:(CGFloat)arg8 shouldAlertImmediatelyForImmediateTypes:(BOOL)arg9 durationOfConsideration:(CGFloat)arg10 thresholdOfLocationRelevance:(CGFloat)arg11 thresholdOfSignificantDuration:(CGFloat)arg12 thresholdOfSignificantDistance:(CGFloat)arg13 capOfReasonableWalkingSpeed:(CGFloat)arg14 allowNavGeoHintAsPrivateVehicleHint:(BOOL)arg15 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif