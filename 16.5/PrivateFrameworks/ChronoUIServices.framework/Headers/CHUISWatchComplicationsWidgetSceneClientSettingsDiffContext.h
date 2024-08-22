// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHUISWATCHCOMPLICATIONSWIDGETSCENECLIENTSETTINGSDIFFCONTEXT_H
#define CHUISWATCHCOMPLICATIONSWIDGETSCENECLIENTSETTINGSDIFFCONTEXT_H

@class FBSSceneTransitionContext;


#import "CHUISWidgetSceneClientSettingsDiffContext.h"
#import "CHUISWatchComplicationsWidgetSceneClientSettings.h"

@interface CHUISWatchComplicationsWidgetSceneClientSettingsDiffContext : CHUISWidgetSceneClientSettingsDiffContext

@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneClientSettings *currClientSettings;
@property (readonly, nonatomic) CHUISWatchComplicationsWidgetSceneClientSettings *prevClientSettings;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;


-(id)initWithPreviousClientSettings:(id)arg0 currentClientSettings:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif