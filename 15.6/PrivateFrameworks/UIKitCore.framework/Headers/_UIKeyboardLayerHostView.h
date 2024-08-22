// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYBOARDLAYERHOSTVIEW_H
#define _UIKEYBOARDLAYERHOSTVIEW_H

@class UISceneLayerHostView, FBScene, FBSSceneClientSettingsDiffInspector, FBSSceneIdentityToken, NSString;
@protocol FBSceneObserver, BSInvalidatable, UIScenePresenter;



@interface _UIKeyboardLayerHostView : UISceneLayerHostView <FBSceneObserver>

 {
    id *_sceneLayerMatchingPredicate;
    FBScene *_owningScene;
    FBScene *_keyboardScene;
    id<BSInvalidatable> *_keyboardSceneAvailabilityObserver;
    FBSSceneClientSettingsDiffInspector *_keyboardSceneClientSettingsDiffInspector;
    FBSSceneIdentityToken *_keyboardPreferredHostIdentity;
    BOOL _isPaired;
    id<UIScenePresenter> *_presenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithLayer:(id)arg0 owningScene:(id)arg1 keyboardMatchingPredicate:(id)arg2 ;
-(id)initWithKeyboardLayer:(id)arg0 owningScene:(id)arg1 ;
-(id)initWithKeyboardProxyLayer:(id)arg0 owningScene:(id)arg1 ;
-(void)_setKeyboardScene:(id)arg0 ;
-(void)_updatePairingState;
-(void)dealloc;
-(void)scene:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 oldClientSettings:(id)arg2 transitionContext:(id)arg3 ;
-(void)setCurrentPresentationContext:(id)arg0 ;


@end


#endif