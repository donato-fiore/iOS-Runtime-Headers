// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHUISMUTABLEAVOCADOSCENESETTINGS_H
#define CHUISMUTABLEAVOCADOSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, CHSWidgetMetrics, CHSWidget, NSString;


#import "CHUISWidgetVisibilitySettings.h"

@interface CHUISMutableAvocadoSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) BOOL inSecureEnvironment; // ivar: _inSecureEnvironment
@property (copy, nonatomic) CHSWidgetMetrics *metrics;
@property (nonatomic) NSUInteger style;
@property (copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (copy, nonatomic) CHSWidget *widget;
@property (copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (copy, nonatomic) NSString *widgetHostIdentifier;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif