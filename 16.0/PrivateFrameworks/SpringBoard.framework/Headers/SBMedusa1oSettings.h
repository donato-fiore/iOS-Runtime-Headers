// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBMEDUSA1OSETTINGS_H
#define SBMEDUSA1OSETTINGS_H

@class PTSettings;



@interface SBMedusa1oSettings : PTSettings

@property (nonatomic) BOOL clipRotationRegions; // ivar: _clipRotationRegions
@property (nonatomic) BOOL debugColorRotationRegions; // ivar: _debugColorRotationRegions
@property (nonatomic) BOOL debugRotationCenter; // ivar: _debugRotationCenter
@property (nonatomic) BOOL fencesRotation; // ivar: _fencesRotation
@property (nonatomic) CGFloat gapSwipeBuffer; // ivar: _gapSwipeBuffer
@property (nonatomic) NSUInteger millisecondsBetweenResizeSteps; // ivar: _millisecondsBetweenResizeSteps
@property (nonatomic) CGFloat rotationSlowdownFactor; // ivar: _rotationSlowdownFactor
@property (nonatomic) CGFloat zoomOutRotationFactor; // ivar: _zoomOutRotationFactor


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif