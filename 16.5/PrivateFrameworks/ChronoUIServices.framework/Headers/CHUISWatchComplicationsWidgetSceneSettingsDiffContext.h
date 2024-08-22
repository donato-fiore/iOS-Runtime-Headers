// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWATCHCOMPLICATIONSWIDGETSCENESETTINGSDIFFCONTEXT_H
#define CHUISWATCHCOMPLICATIONSWIDGETSCENESETTINGSDIFFCONTEXT_H

@class FBSSceneTransitionContext;


#import "CHUISWidgetSceneSettingsDiffContext.h"
#import "CHUISWatchComplicationsWidgetSceneSettings.h"

@interface CHUISWatchComplicationsWidgetSceneSettingsDiffContext : CHUISWidgetSceneSettingsDiffContext

@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneSettings *currSettings;
@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneSettings *prevSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;


-(id)initWithPreviousSettings:(id)arg0 currentSettings:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif