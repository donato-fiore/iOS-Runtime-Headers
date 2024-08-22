// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIMOTIONANALYZERSETTINGS_H
#define _UIMOTIONANALYZERSETTINGS_H

@class UISettings;



@interface _UIMotionAnalyzerSettings : UISettings

@property CGFloat delayBeforeIdle; // ivar: _delayBeforeIdle
@property BOOL directionalLockEnabled; // ivar: _directionalLockEnabled
@property CGFloat directionalLockSharpness; // ivar: _directionalLockSharpness
@property CGFloat directionalLockStickiness; // ivar: _directionalLockStickiness
@property CGFloat directionalLockThreshold; // ivar: _directionalLockThreshold
@property CGFloat idleLeeway; // ivar: _idleLeeway
@property CGFloat inputSmoothingFactor; // ivar: _inputSmoothingFactor
@property BOOL jumpEnabled; // ivar: _jumpEnabled
@property CGFloat jumpThreshold; // ivar: _jumpThreshold
@property BOOL playJumpSound; // ivar: _playJumpSound
@property CGFloat referenceShiftDistanceDependence; // ivar: _referenceShiftDistanceDependence
@property BOOL referenceShiftEnabled; // ivar: _referenceShiftEnabled
@property CGFloat referenceShiftSpeed; // ivar: _referenceShiftSpeed
@property BOOL showDirectionalLockIndicators; // ivar: _showDirectionalLockIndicators
@property BOOL showIdleIndicator; // ivar: _showIdleIndicator


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(void)setDefaultValues;


@end


#endif