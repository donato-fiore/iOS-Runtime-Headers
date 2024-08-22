// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIROOTWINDOWSCENEPRESENTATIONBINDER_H
#define UIROOTWINDOWSCENEPRESENTATIONBINDER_H

@class FBSDisplayConfiguration, NSMutableSet;


#import "UIScenePresentationBinder.h"
#import "UIRootSceneWindow.h"
#import "UIMutableTransformer.h"

@interface UIRootWindowScenePresentationBinder : UIScenePresentationBinder {
    FBSDisplayConfiguration *_displayConfiguration;
    UIRootSceneWindow *_rootSceneWindow;
    BOOL _shouldManageWindowLifecycle;
    NSMutableSet *_presentedScenes;
}


@property (readonly, nonatomic) UIMutableTransformer *sceneTransformer;


-(id)_initWithIdentifier:(id)arg0 priority:(NSInteger)arg1 appearanceStyle:(NSUInteger)arg2 rootWindow:(id)arg3 ;
-(id)_rootView;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 priority:(NSInteger)arg1 appearanceStyle:(NSUInteger)arg2 rootWindow:(id)arg3 ;
-(id)initWithPriority:(NSInteger)arg0 displayConfiguration:(id)arg1 ;
-(void)_noteDidStopPresentingScene:(id)arg0 ;
-(void)_noteWillStartPresentingScene:(id)arg0 ;
-(void)invalidate;


@end


#endif