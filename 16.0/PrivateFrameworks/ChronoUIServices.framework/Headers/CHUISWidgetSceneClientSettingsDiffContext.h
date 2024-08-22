// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHUISWIDGETSCENECLIENTSETTINGSDIFFCONTEXT_H
#define CHUISWIDGETSCENECLIENTSETTINGSDIFFCONTEXT_H

@class FBSSceneTransitionContext;

#import <Foundation/Foundation.h>

#import "CHUISWidgetSceneClientSettings.h"

@interface CHUISWidgetSceneClientSettingsDiffContext : NSObject

@property (readonly, nonatomic) CHUISWidgetSceneClientSettings *currClientSettings; // ivar: _currClientSettings
@property (readonly, nonatomic) CHUISWidgetSceneClientSettings *prevClientSettings; // ivar: _prevClientSettings
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext; // ivar: _transitionContext


-(id)initWithPreviousClientSettings:(id)arg0 currentClientSettings:(id)arg1 transitionContext:(id)arg2 ;


@end


#endif