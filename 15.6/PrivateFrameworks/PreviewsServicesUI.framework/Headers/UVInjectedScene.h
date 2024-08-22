// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UVINJECTEDSCENE_H
#define UVINJECTEDSCENE_H

@class UIWindowScene, NSString, FBScene;
@protocol FBSceneDelegate, _UISceneSettingsDiffAction;

#import <Foundation/Foundation.h>


@interface UVInjectedScene : NSObject <FBSceneDelegate, _UISceneSettingsDiffAction>

 {
    BOOL _invalidated;
    UIWindowScene *_parentScene;
    BOOL _maximized;
    CGSize _overrideSceneSize;
    CGSize _overrideMaximumSize;
}


@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (copy, nonatomic) id *sceneResizeHandler; // ivar: _sceneResizeHandler
@property (readonly, nonatomic) CGSize sceneSize;
@property (readonly) Class superclass;


+(id)_baseSceneSettings:(id)arg0 sceneIdentifier:(id)arg1 ;
+(id)_injectInProcessHandle:(id)arg0 error:(*id)arg1 ;
+(id)injectInProcess:(int)arg0 error:(*id)arg1 ;
+(id)injectInRunningTarget:(id)arg0 error:(*id)arg1 ;
-(BOOL)_computeAndUpdateSceneSettings:(*id)arg0 ;
-(BOOL)setMaximizedWithParent:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMinimizedWithParent:(id)arg0 size:(struct CGSize )arg1 maximumSize:(struct CGSize )arg2 error:(*id)arg3 ;
-(id)_computeSceneSettingsUsing:(id)arg0 error:(*id)arg1 ;
-(id)_initWithScene:(id)arg0 ;
-(id)_prepareSceneSettingsForUpdate:(id)arg0 ;
-(void)_handleActionsFromHostedScene:(id)arg0 ;
-(void)_performActionsForUIScene:(id)arg0 withUpdatedFBSScene:(id)arg1 settingsDiff:(id)arg2 fromSettings:(id)arg3 transitionContext:(id)arg4 lifecycleActionType:(unsigned int)arg5 ;
-(void)_setParentScene:(id)arg0 ;
-(void)_updateSceneSettings:(id)arg0 transitionContext:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)scene:(id)arg0 didReceiveActions:(id)arg1 ;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)sceneDidInvalidate:(id)arg0 ;
-(void)sendAction:(id)arg0 ;


@end


#endif