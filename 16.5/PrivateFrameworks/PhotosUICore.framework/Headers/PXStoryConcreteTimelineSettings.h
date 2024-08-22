// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYCONCRETETIMELINESETTINGS_H
#define PXSTORYCONCRETETIMELINESETTINGS_H



#import "PXSettings.h"

@interface PXStoryConcreteTimelineSettings : PXSettings

@property (nonatomic) NSInteger initialProductionCountLimit; // ivar: _initialProductionCountLimit
@property (nonatomic) CGFloat initialProductionTimeLimit; // ivar: _initialProductionTimeLimit
@property (nonatomic) CGFloat kenBurnsPanSpeed; // ivar: _kenBurnsPanSpeed
@property (nonatomic) CGFloat kenBurnsRotationSpeed; // ivar: _kenBurnsRotationSpeed
@property (nonatomic) CGFloat kenBurnsScaleSpeed; // ivar: _kenBurnsScaleSpeed
@property (nonatomic) CGFloat kenBurnsScaleSpeedDuringRotation; // ivar: _kenBurnsScaleSpeedDuringRotation
@property (nonatomic) NSInteger rotationInitialProductionCountLimit; // ivar: _rotationInitialProductionCountLimit
@property (nonatomic) CGFloat rotationInitialProductionTimeLimit; // ivar: _rotationInitialProductionTimeLimit
@property (nonatomic) CGFloat subsequentProductionTimeLimit; // ivar: _subsequentProductionTimeLimit


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif