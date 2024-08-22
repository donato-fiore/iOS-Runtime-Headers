// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWIDGETSCENESETTINGS_H
#define CHUISWIDGETSCENESETTINGS_H

@class UIApplicationSceneSettings, NSString, CHSInlineTextParameters, CHSWidgetMetrics, CHSWidgetTintParameters, CHSWidget;


#import "CHUISWidgetVisibilitySettings.h"

@interface CHUISWidgetSceneSettings : UIApplicationSceneSettings

@property (readonly, copy, nonatomic) NSString *additionalSnapshotPresentationContext;
@property (readonly, nonatomic, getter=areAnimationsPaused) BOOL animationsPaused;
@property (readonly, nonatomic) BOOL canAppearInSecureEnvironment;
@property (readonly, nonatomic) NSUInteger colorScheme;
@property (readonly, nonatomic, getter=isContentPaused) BOOL contentPaused;
@property (readonly, nonatomic) NSUInteger contentType;
@property (readonly, copy, nonatomic) CHSInlineTextParameters *inlineTextParameters;
@property (readonly, nonatomic, getter=isInteractionDisabled) BOOL interactionDisabled;
@property (readonly, copy, nonatomic) CHSWidgetMetrics *metrics;
@property (readonly, nonatomic) BOOL prefersUnredactedContentInLowLuminanceEnvironment;
@property (readonly, copy, nonatomic) NSString *remoteViewControllerClassName;
@property (readonly, nonatomic) BOOL showsWidgetLabel;
@property (readonly, nonatomic) BOOL supportsLowLuminance;
@property (readonly, copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (readonly, copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (readonly, nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (readonly, copy, nonatomic) CHSWidget *widget;
@property (readonly, copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (readonly, copy, nonatomic) NSString *widgetHostIdentifier;
@property (readonly, nonatomic) NSUInteger widgetPriority;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif