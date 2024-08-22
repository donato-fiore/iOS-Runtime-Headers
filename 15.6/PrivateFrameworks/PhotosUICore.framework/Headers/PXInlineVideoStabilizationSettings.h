// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXINLINEVIDEOSTABILIZATIONSETTINGS_H
#define PXINLINEVIDEOSTABILIZATIONSETTINGS_H



#import "PXSettings.h"

@interface PXInlineVideoStabilizationSettings : PXSettings

@property (readonly, nonatomic) NSUInteger allowedAnalysisTypes;
@property (nonatomic) CGFloat allowedCropFraction; // ivar: _allowedCropFraction
@property (nonatomic) BOOL crossfadeEnabled; // ivar: _crossfadeEnabled
@property (nonatomic) BOOL gyroStabilizationEnabled; // ivar: _gyroStabilizationEnabled
@property (nonatomic) BOOL localCacheForMediaAnalysisRecipes; // ivar: _localCacheForMediaAnalysisRecipes
@property (nonatomic) BOOL pixelStabilizationEnabled; // ivar: _pixelStabilizationEnabled
@property (nonatomic) BOOL showDiagnosticUI; // ivar: _showDiagnosticUI
@property (nonatomic) BOOL timeRangeEnabled; // ivar: _timeRangeEnabled
@property (nonatomic) BOOL useMediaAnalysisRecipe; // ivar: _useMediaAnalysisRecipe


+(id)settingsControllerModule;
+(id)sharedInstance;
+(id)transientProperties;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif