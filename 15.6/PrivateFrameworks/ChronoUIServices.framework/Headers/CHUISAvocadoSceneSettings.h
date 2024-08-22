// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHUISAVOCADOSCENESETTINGS_H
#define CHUISAVOCADOSCENESETTINGS_H

@class UIApplicationSceneSettings, CHSWidgetMetrics, CHSWidget, NSString;


#import "CHUISWidgetVisibilitySettings.h"

@interface CHUISAvocadoSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) NSUInteger style;
@property (readonly, copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (readonly, nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, copy, nonatomic) NSString *widgetHostIdentifier;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif