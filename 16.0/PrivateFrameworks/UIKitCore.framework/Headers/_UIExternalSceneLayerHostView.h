// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIEXTERNALSCENELAYERHOSTVIEW_H
#define _UIEXTERNALSCENELAYERHOSTVIEW_H

@class UISceneLayerHostView, FBScene, NSString;
@protocol UIExternalScenePairingObserverDelegate, UIScenePresenter;


#import "UIExternalScenePairingObserver.h"
#import "UIScenePresentationManager.h"

@interface _UIExternalSceneLayerHostView : UISceneLayerHostView <UIExternalScenePairingObserverDelegate>

 {
    FBScene *_parentScene;
    NSString *_targetSceneID;
    UIExternalScenePairingObserver *_pairingObserver;
    UIScenePresentationManager *_presentationManager;
    id<UIScenePresenter> *_presenter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) FBScene *targetScene; // ivar: _targetScene


-(id)initWithSceneLayer:(id)arg0 parentScene:(id)arg1 ;
-(void)_updateHostingState;
-(void)_updateTargetScene;
-(void)dealloc;
-(void)externalScenePairingObserver:(id)arg0 pairingsDidChange:(id)arg1 ;
-(void)setCurrentPresentationContext:(id)arg0 ;


@end


#endif