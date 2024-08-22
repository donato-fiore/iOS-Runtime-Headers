// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKCINTERNALSETTINGS_H
#define VKCINTERNALSETTINGS_H


#import <Foundation/Foundation.h>


@interface VKCInternalSettings : NSObject



+(BOOL)addRandomArtificalAnalysisDelay;
+(BOOL)alwaysShowTextSelectionBorders;
+(BOOL)boolForKey:(id)arg0 withDefaultValue:(BOOL)arg1 ;
+(BOOL)debugMenuEnabled;
+(BOOL)isCGImageForMadEnabled;
+(BOOL)isPerformingAutomatedTest;
+(BOOL)overrideDeviceAvailability;
+(CGFloat)extraWindowPointTouchOffset;
+(CGFloat)floatForKey:(id)arg0 withDefaultValue:(CGFloat)arg1 ;
+(CGFloat)randomDelayEndValue;
+(CGFloat)randomDelayStartValue;
+(CGFloat)visibleTextAreaButtonThreshold;
+(id)addRandomArtificalAnalysisDelaySettingsValue;
+(id)alwaysShowTextSelectionBordersSettingsValue;
+(id)debugMenuEnabledSettingsValue;
+(id)defaults;
+(id)defaultsKeyForKey:(id)arg0 ;
+(id)extraWindowPointTouchOffsetSettingsValue;
+(id)isCGImageForMadEnabledSettingsValue;
+(id)isPerformingAutomatedTestSettingsValue;
+(id)overrideDeviceAvailabilitySettingsValue;
+(id)randomDelayEndValueSettingsValue;
+(id)randomDelayStartValueSettingsValue;
+(id)settingsValueForKey:(id)arg0 ;
+(id)visibleTextAreaButtonThresholdSettingsValue;


@end


#endif