// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKHOVERPLATTERPARAMETERS_H
#define WKHOVERPLATTERPARAMETERS_H

@class PTSettings;



@interface WKHoverPlatterParameters : PTSettings

@property (nonatomic) BOOL animateBetweenPlatters; // ivar: _animateBetweenPlatters
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (nonatomic) CGFloat platterCornerRadius; // ivar: _platterCornerRadius
@property (nonatomic) BOOL platterEnabledForHover; // ivar: _platterEnabledForHover
@property (nonatomic) BOOL platterEnabledForMouse; // ivar: _platterEnabledForMouse
@property (nonatomic) unsigned int platterInflationSize; // ivar: _platterInflationSize
@property (nonatomic) CGFloat platterPadding; // ivar: _platterPadding
@property (nonatomic) CGFloat platterShadowOpacity; // ivar: _platterShadowOpacity
@property (nonatomic) CGFloat platterShadowRadius; // ivar: _platterShadowRadius
@property (nonatomic) CGFloat springDamping; // ivar: _springDamping
@property (nonatomic) CGFloat springMass; // ivar: _springMass
@property (nonatomic) CGFloat springStiffness; // ivar: _springStiffness
@property (nonatomic) CGFloat useSpring; // ivar: _useSpring


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif