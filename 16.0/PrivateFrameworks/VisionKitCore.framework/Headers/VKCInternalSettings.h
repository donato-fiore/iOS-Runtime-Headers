// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKCINTERNALSETTINGS_H
#define VKCINTERNALSETTINGS_H


#import <Foundation/Foundation.h>


@interface VKCInternalSettings : NSObject



+(BOOL)addRandomArtificalAnalysisDelay;
+(BOOL)addSubjectCropRectToPasteboard;
+(BOOL)alwaysShowTextSelectionBorders;
+(BOOL)boolForKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
+(BOOL)debugMenuEnabled;
+(BOOL)isCGImageForMadEnabled;
+(BOOL)isPerformingAutomatedTest;
+(BOOL)overrideDeviceAvailability;
+(CGFloat)blurBlurRadius;
+(CGFloat)blurMaxThickness;
+(CGFloat)blurMinOpacity;
+(CGFloat)extraWindowPointTouchOffset;
+(CGFloat)floatForKey:(id)arg0 withDefaultValue:(CGFloat)arg1 ;
+(CGFloat)randomDelayEndValue;
+(CGFloat)randomDelayStartValue;
+(CGFloat)scaleMultiplier;
+(CGFloat)sharpBlurRadius;
+(CGFloat)sharpMaxThickness;
+(CGFloat)sharpMinOpacity;
+(CGFloat)subjectAutomaticAnalysisDelay;
+(CGFloat)subjectDragCancellationDelay;
+(CGFloat)subjectDragLiftDelay;
+(CGFloat)visibleTextAreaButtonThreshold;
+(id)addRandomArtificalAnalysisDelaySettingsValue;
+(id)addSubjectCropRectToPasteboardSettingsValue;
+(id)alwaysShowTextSelectionBordersSettingsValue;
+(id)blurBlurRadiusSettingsValue;
+(id)blurMaxThicknessSettingsValue;
+(id)blurMinOpacitySettingsValue;
+(id)debugMenuEnabledSettingsValue;
+(id)defaults;
+(id)defaultsKeyForKey:(id)arg0 ;
+(id)extraWindowPointTouchOffsetSettingsValue;
+(id)isCGImageForMadEnabledSettingsValue;
+(id)isPerformingAutomatedTestSettingsValue;
+(id)overrideDeviceAvailabilitySettingsValue;
+(id)randomDelayEndValueSettingsValue;
+(id)randomDelayStartValueSettingsValue;
+(id)scaleMultiplierSettingsValue;
+(id)settingsValueForKey:(id)arg0 ;
+(id)sharpBlurRadiusSettingsValue;
+(id)sharpMaxThicknessSettingsValue;
+(id)sharpMinOpacitySettingsValue;
+(id)subjectAutomaticAnalysisDelaySettingsValue;
+(id)subjectDragCancellationDelaySettingsValue;
+(id)subjectDragLiftDelaySettingsValue;
+(id)visibleTextAreaButtonThresholdSettingsValue;


@end


#endif