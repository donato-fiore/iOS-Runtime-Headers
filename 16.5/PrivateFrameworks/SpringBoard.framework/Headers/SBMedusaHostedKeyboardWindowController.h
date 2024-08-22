// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMEDUSAHOSTEDKEYBOARDWINDOWCONTROLLER_H
#define SBMEDUSAHOSTEDKEYBOARDWINDOWCONTROLLER_H

@class NSHashTable, FBSSceneClientSettingsDiffInspector, NSString, UIWindow;
@protocol FBSceneObserver, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBMedusaHostedKeyboardWindowController : NSObject <FBSceneObserver, BSInvalidatable>

 {
    NSHashTable *_observers;
    SBWindowScene *_windowScene;
    FBSSceneClientSettingsDiffInspector *_keyboardLayersClientSettingsDiffInspector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isUsingMedusaHostedKeyboardWindow) BOOL isUsingMedusaHostedKeyboardWindow; // ivar: _isUsingMedusaHostedKeyboardWindow
@property (readonly, nonatomic) UIWindow *medusaHostedKeyboardWindow; // ivar: _medusaHostedKeyboardWindow
@property (readonly) Class superclass;


-(BOOL)isKeyboardVisibleForSpringBoard;
-(BOOL)shouldKeyboardBeWindowSizedForHostWithIdentity:(id)arg0 ;
-(id)_keyboardLayersClientSettingsDiffInspector;
-(id)initWithWindowScene:(id)arg0 ;
-(id)newMedusaHostedKeyboardWindowLevelAssertionWithPriority:(NSUInteger)arg0 windowLevel:(CGFloat)arg1 ;
-(void)_doObserverCalloutWithBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)scene:(id)arg0 didCompleteUpdateWithContext:(id)arg1 error:(id)arg2 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)updateMedusaHostedKeyboardWindow;
-(void)updateMedusaHostedKeyboardWindowForScene:(id)arg0 isForeground:(*BOOL)arg1 ;


@end


#endif