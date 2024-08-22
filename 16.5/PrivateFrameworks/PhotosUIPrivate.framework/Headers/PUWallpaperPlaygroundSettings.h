// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERPLAYGROUNDSETTINGS_H
#define PUWALLPAPERPLAYGROUNDSETTINGS_H

@class PXSettings;



@interface PUWallpaperPlaygroundSettings : PXSettings

@property (nonatomic) BOOL applyLowAPLFilter; // ivar: _applyLowAPLFilter
@property (nonatomic) CGFloat lowAPLFilterAmount; // ivar: _lowAPLFilterAmount
@property (nonatomic) CGFloat lowLuminanceAlphaAnimationDuration; // ivar: _lowLuminanceAlphaAnimationDuration
@property (nonatomic) CGFloat lowLuminanceTransformAnimationDuration; // ivar: _lowLuminanceTransformAnimationDuration
@property (nonatomic) CGFloat shuffleSleepFadeInAnimationDuration; // ivar: _shuffleSleepFadeInAnimationDuration
@property (nonatomic) CGFloat shuffleSleepFadeOutAnimationDuration; // ivar: _shuffleSleepFadeOutAnimationDuration
@property (nonatomic) CGFloat shuffleSleepTransformOutAnimationDuration; // ivar: _shuffleSleepTransformOutAnimationDuration


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif