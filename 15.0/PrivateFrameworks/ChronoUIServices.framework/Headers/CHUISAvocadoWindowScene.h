// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHUISAVOCADOWINDOWSCENE_H
#define CHUISAVOCADOWINDOWSCENE_H

@class UIWindowScene, CHSWidgetMetrics, CHSWidget, NSString;


#import "CHUISWidgetVisibilitySettings.h"

@interface CHUISAvocadoWindowScene : UIWindowScene

@property (readonly, nonatomic, getter=areAnimationsDisabled) BOOL animationsDisabled;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) NSUInteger style;
@property (readonly, copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot; // ivar: _visibleEntryShouldSnapshot
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, copy, nonatomic) NSString *widgetHostIdentifier;


-(id)_sceneSettings;


@end


#endif