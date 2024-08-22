// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISMUTABLEWIDGETSCENESETTINGS_H
#define CHUISMUTABLEWIDGETSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSString, CHSInlineTextParameters, CHSWidgetMetrics, CHSWidgetTintParameters, CHSWidget;


#import "CHUISWidgetVisibilitySettings.h"

@interface CHUISMutableWidgetSceneSettings : UIMutableApplicationSceneSettings

@property (copy, nonatomic) NSString *additionalSnapshotPresentationContext;
@property (nonatomic, getter=areAnimationsPaused) BOOL animationsPaused;
@property (nonatomic) BOOL canAppearInSecureEnvironment;
@property (nonatomic) NSUInteger colorScheme;
@property (nonatomic, getter=isContentPaused) BOOL contentPaused;
@property (nonatomic) NSUInteger contentType;
@property (copy, nonatomic) CHSInlineTextParameters *inlineTextParameters;
@property (nonatomic, getter=isInteractionDisabled) BOOL interactionDisabled;
@property (copy, nonatomic) CHSWidgetMetrics *metrics;
@property (nonatomic) BOOL prefersUnredactedContentInLowLuminanceEnvironment;
@property (copy, nonatomic) NSString *remoteViewControllerClassName;
@property (nonatomic) BOOL showsWidgetLabel;
@property (nonatomic) BOOL supportsLowLuminance;
@property (copy, nonatomic) CHSWidgetTintParameters *tintParameters;
@property (copy, nonatomic) CHUISWidgetVisibilitySettings *visibility;
@property (nonatomic, getter=shouldVisibleEntrySnapshot) BOOL visibleEntryShouldSnapshot;
@property (copy, nonatomic) CHSWidget *widget;
@property (copy, nonatomic) NSString *widgetConfigurationIdentifier;
@property (copy, nonatomic) NSString *widgetHostIdentifier;
@property (nonatomic) NSUInteger widgetPriority;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif