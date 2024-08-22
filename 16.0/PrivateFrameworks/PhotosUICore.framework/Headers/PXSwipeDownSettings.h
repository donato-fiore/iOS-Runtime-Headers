// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSWIPEDOWNSETTINGS_H
#define PXSWIPEDOWNSETTINGS_H



#import "PXSettings.h"

@interface PXSwipeDownSettings : PXSettings

@property (nonatomic) CGFloat downGestureToleranceAngle; // ivar: _downGestureToleranceAngle
@property (nonatomic) NSInteger downMotionType; // ivar: _downMotionType
@property (nonatomic) CGFloat downResistanceDistance; // ivar: _downResistanceDistance
@property (nonatomic) NSInteger horizontalMotionType; // ivar: _horizontalMotionType
@property (nonatomic) CGFloat horizontalResistanceDistance; // ivar: _horizontalResistanceDistance
@property (nonatomic) CGFloat rotationHorizontalMotionFactor; // ivar: _rotationHorizontalMotionFactor
@property (nonatomic) CGFloat rotationHorizontalMotionHysteresisDistance; // ivar: _rotationHorizontalMotionHysteresisDistance
@property (nonatomic) CGFloat rotationMaximumAngle; // ivar: _rotationMaximumAngle
@property (nonatomic) BOOL rotationOnHorizontalMotion; // ivar: _rotationOnHorizontalMotion
@property (nonatomic) BOOL rotationOnVerticalMotion; // ivar: _rotationOnVerticalMotion
@property (nonatomic) CGFloat rotationVerticalMotionAngle; // ivar: _rotationVerticalMotionAngle
@property (nonatomic) CGFloat rotationVerticalMotionResistanceDistance; // ivar: _rotationVerticalMotionResistanceDistance
@property (nonatomic) CGFloat scaleDownDistance; // ivar: _scaleDownDistance
@property (nonatomic) CGFloat scaleDownFactor; // ivar: _scaleDownFactor
@property (nonatomic) CGFloat transitionDistance; // ivar: _transitionDistance
@property (nonatomic) CGFloat upGestureToleranceAngle; // ivar: _upGestureToleranceAngle
@property (nonatomic) NSInteger upMotionType; // ivar: _upMotionType
@property (nonatomic) CGFloat upResistanceDistance; // ivar: _upResistanceDistance


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif