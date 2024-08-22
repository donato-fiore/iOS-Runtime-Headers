// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUIPARALLAXSETTINGS_H
#define PBUIPARALLAXSETTINGS_H

@class PTSettings;



@interface PBUIParallaxSettings : PTSettings

@property NSInteger distanceFromScreen; // ivar: _distanceFromScreen
@property BOOL increaseEnabled; // ivar: _increaseEnabled
@property NSInteger slideDirectionX; // ivar: _slideDirectionX
@property NSInteger slideDirectionY; // ivar: _slideDirectionY
@property BOOL slideEnabled; // ivar: _slideEnabled
@property CGFloat slideIncreaseX; // ivar: _slideIncreaseX
@property CGFloat slideIncreaseY; // ivar: _slideIncreaseY
@property CGFloat slidePixelsX; // ivar: _slidePixelsX
@property CGFloat slidePixelsY; // ivar: _slidePixelsY
@property CGFloat tiltDegreesX; // ivar: _tiltDegreesX
@property CGFloat tiltDegreesY; // ivar: _tiltDegreesY
@property NSInteger tiltDirectionX; // ivar: _tiltDirectionX
@property NSInteger tiltDirectionY; // ivar: _tiltDirectionY
@property BOOL tiltEnabled; // ivar: _tiltEnabled


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif