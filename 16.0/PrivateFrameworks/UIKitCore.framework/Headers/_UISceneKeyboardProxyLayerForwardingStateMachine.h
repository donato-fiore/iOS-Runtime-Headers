// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISCENEKEYBOARDPROXYLAYERFORWARDINGSTATEMACHINE_H
#define _UISCENEKEYBOARDPROXYLAYERFORWARDINGSTATEMACHINE_H

@class FBScene, FBSSceneIdentityToken, FBSScene, NSSet, NSString;
@protocol _UIScenePresentationViewObserver, _UIWindowLevelObserver;

#import <Foundation/Foundation.h>

#import "_UIScenePresenter.h"
#import "UIWindow.h"

@interface _UISceneKeyboardProxyLayerForwardingStateMachine : NSObject <_UIScenePresentationViewObserver, _UIWindowLevelObserver>

 {
    FBScene *_scene;
    FBSSceneIdentityToken *_identityToken;
    NSUInteger _state;
    id *_windowDidMoveToSceneNotificationToken;
    _UIScenePresenter *_prioritizedPresenter;
    FBSScene *_hostingScene;
    UIWindow *_hostingWindow;
    NSSet *_keyboardLayersTracked;
    NSSet *_keyboardLayersAddedToHostingScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)_state;
-(id)_newProxyLayers;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_addLayers:(id)arg0 toScene:(id)arg1 ;
-(void)_noteHostedInWindow:(id)arg0 ;
-(void)_removeLayers:(id)arg0 fromScene:(id)arg1 ;
-(void)_setState:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)noteKeyboardLayersBeingTracked:(id)arg0 ;
-(void)notePriorizedPresenter:(id)arg0 ;
-(void)presentationView:(id)arg0 didMoveToWindow:(id)arg1 ;
-(void)window:(id)arg0 changedFromLevel:(CGFloat)arg1 toLevel:(CGFloat)arg2 ;


@end


#endif