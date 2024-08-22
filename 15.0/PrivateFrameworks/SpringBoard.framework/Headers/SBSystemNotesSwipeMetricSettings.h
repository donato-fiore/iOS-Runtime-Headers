// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSYSTEMNOTESSWIPEMETRICSETTINGS_H
#define SBSYSTEMNOTESSWIPEMETRICSETTINGS_H

@class PTSettings;



@interface SBSystemNotesSwipeMetricSettings : PTSettings

@property (nonatomic) CGFloat cornerDistanceBeforeScalingForDismiss; // ivar: _cornerDistanceBeforeScalingForDismiss
@property (nonatomic) CGFloat flickVelocityThreshold; // ivar: _flickVelocityThreshold
@property (nonatomic) CGFloat panDistanceBeforeScaling; // ivar: _panDistanceBeforeScaling
@property (nonatomic) CGFloat panDistancePer1xScaling; // ivar: _panDistancePer1xScaling
@property (nonatomic) CGFloat panInitialThumbnailScale; // ivar: _panInitialThumbnailScale
@property (nonatomic) CGFloat scaleThresholdBeforeFullSize; // ivar: _scaleThresholdBeforeFullSize


+(BOOL)ignoresKey:(id)arg0 ;
+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif