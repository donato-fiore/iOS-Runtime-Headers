// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC10CHRONOCORE21WIDGETSCENECONNECTION_H
#define _TTC10CHRONOCORE21WIDGETSCENECONNECTION_H

@class NSString;
@protocol _UISceneSettingsDiffAction;

#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore21WidgetSceneConnection : NSObject <_UISceneSettingsDiffAction>

 {
    ? logIdentifier;
    ? scene;
    ? sceneSettingsDiffInspector;
    ? window;
    ? _invalidated;
    ? _descriptorDidChangeSubscription;
    ? _needsVCRebuild;
    ? hasBeenActive;
    ? rootViewController;
    ? debugOverlayViewController;
    ? contentViewController;
    ? delegate;
    ? transaction;
}


@property (nonatomic, readonly) NSString *description;


-(id)init;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)dealloc;


@end


#endif