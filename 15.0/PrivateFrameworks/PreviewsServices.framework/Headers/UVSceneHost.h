// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UVSCENEHOST_H
#define UVSCENEHOST_H

@class UIView, NSString, UIWindowScene;
@protocol FBSceneDelegate, _UISceneSettingsDiffAction, UIScenePresenter;


#import "UVInjectedSceneToken.h"

@interface UVSceneHost : UIView <FBSceneDelegate, _UISceneSettingsDiffAction>

 {
    NSString *_hostIdentifier;
    id<UIScenePresenter> *_scenePresenter;
    BOOL _maximized;
    CGSize _overrideSceneSize;
    CGSize _overrideMaximumSize;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIWindowScene *parentScene; // ivar: _parentScene
@property (copy, nonatomic) id *sceneActionHandler; // ivar: _sceneActionHandler
@property (copy, nonatomic) id *sceneResizeHandler; // ivar: _sceneResizeHandler
@property (readonly, nonatomic) CGSize sceneSize;
@property (readonly, nonatomic) UVInjectedSceneToken *sceneToken; // ivar: _sceneToken
@property (readonly) Class superclass;


+(id)_baseSceneSettingsForScreen:(id)arg0 ;
-(BOOL)_computeAndUpdateSceneSettings:(*id)arg0 ;
-(BOOL)setMaximized:(*id)arg0 ;
-(BOOL)setMinimizedWithSceneSize:(struct CGSize )arg0 maximumSize:(struct CGSize )arg1 error:(*id)arg2 ;
-(id)_computeSceneSettingsUsing:(id)arg0 error:(*id)arg1 ;
-(id)initWithSceneToken:(id)arg0 parentScene:(id)arg1 error:(*id)arg2 ;
-(void)_handleActionsFromHostedScene:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_updateSceneSettings:(id)arg0 transitionContext:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)layoutSubviews;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sendAction:(id)arg0 ;


@end


#endif