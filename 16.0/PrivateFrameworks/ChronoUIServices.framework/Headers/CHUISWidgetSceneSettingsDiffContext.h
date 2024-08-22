// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWIDGETSCENESETTINGSDIFFCONTEXT_H
#define CHUISWIDGETSCENESETTINGSDIFFCONTEXT_H

@class FBSSceneTransitionContext;

#import <Foundation/Foundation.h>

#import "CHUISWidgetSceneSettings.h"

@interface CHUISWidgetSceneSettingsDiffContext : NSObject

@property (readonly, nonatomic) CHUISWidgetSceneSettings *currSettings; // ivar: _currSettings
@property (readonly, nonatomic) CHUISWidgetSceneSettings *prevSettings; // ivar: _prevSettings
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext; // ivar: _transitionContext


-(id)initWithPreviousSettings:(id)arg0 currentSettings:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif