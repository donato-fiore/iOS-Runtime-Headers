// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BNBANNERSCENECOMPONENTPROVIDER_H
#define BNBANNERSCENECOMPONENTPROVIDER_H

@class UIScene, NSString, UIWindow;
@protocol _UISceneComponentProviding, BNBannerSceneComponentProviderDelegate;

#import <Foundation/Foundation.h>

#import "BNBannerClientContainerViewController.h"

@interface BNBannerSceneComponentProvider : NSObject <_UISceneComponentProviding>



@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene; // ivar: _scene
@property (readonly, nonatomic) BNBannerClientContainerViewController *containerViewController; // ivar: _containerViewController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BNBannerSceneComponentProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIWindow *sceneWindow; // ivar: _sceneWindow
@property (readonly) Class superclass;


+(id)delegateAssociatedWithSceneForPresentableWithUniqueIdentifier:(id)arg0 ;
+(void)registerDelegate:(id)arg0 forSceneForPresentableWithUniqueIdentifier:(id)arg1 ;
+(void)unregisterDelegateForSceneForPresentableWithUniqueIdentifier:(id)arg0 ;
-(id)_actionRespondersForScene:(id)arg0 ;
-(id)_newSceneWindowWithRootViewController:(id)arg0 ;
-(id)_settingsDiffActionsForScene:(id)arg0 ;
-(id)initWithScene:(id)arg0 ;
-(void)_sceneWillInvalidate:(id)arg0 ;


@end


#endif