// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHOSTEDWINDOW_H
#define _UIHOSTEDWINDOW_H

@protocol _UIHostedWindowDelegate;


#import "UIWindow.h"
#import "UIColor.h"
#import "UITraitCollection.h"
#import "_UIHostedWindowHostingHandle.h"

@interface _UIHostedWindow : UIWindow {
    BOOL __hostViewUnderlapsStatusBar;
}


@property (nonatomic, setter=_setHostTintAdjustmentMode:) NSInteger _hostTintAdjustmentMode; // ivar: _hostTintAdjustmentMode
@property (retain, nonatomic, setter=_setHostTintColor:) UIColor *_hostTintColor; // ivar: __hostTintColor
@property (retain, nonatomic, setter=_setHostTraitCollection:) UITraitCollection *_hostTraitCollection; // ivar: _hostTraitCollection
@property (weak, nonatomic) NSObject<_UIHostedWindowDelegate> *_hostedWindowDelegate; // ivar: __hostedWindowDelegate
@property (nonatomic, setter=_setWantsTraitPropagation:) BOOL _wantsTraitPropagation; // ivar: _wantsTraitPropagation
@property (readonly, nonatomic) _UIHostedWindowHostingHandle *hostingHandle;


-(BOOL)__hostViewUnderlapsStatusBar;
-(BOOL)_allowsLinkPreviewInteractionInViewServices;
-(BOOL)_canPromoteFromKeyWindowStack;
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_needsShakesWhenInactive;
-(BOOL)_preventsRootPresentationController;
-(BOOL)_shouldPropagateTraitCollectionChanges;
-(BOOL)_updatesSafeAreaInsetsOnRead;
-(BOOL)_usesWindowServerHitTesting;
-(NSInteger)_defaultTintAdjustmentMode;
-(NSInteger)_orientationForRootTransform;
-(NSInteger)_orientationForSceneTransform;
-(NSInteger)_orientationForViewTransform;
-(id)_normalInheritedTintColor;
-(id)_traitCollectionForSize:(struct CGSize )arg0 parentCollection:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(unsigned int)contextID;
-(void)__setHostViewUnderlapsStatusBar:(BOOL)arg0 ;
-(void)_configureContextOptions:(id)arg0 ;
-(void)_didCreateRootPresentationController;
-(void)_didMoveFromScreen:(id)arg0 toScreen:(id)arg1 ;
-(void)_registerScrollToTopView:(id)arg0 ;
-(void)_setFirstResponder:(id)arg0 ;
-(void)_unregisterScrollToTopView:(id)arg0 ;
-(void)_updateWindowTraitsAndNotify:(BOOL)arg0 ;
-(void)dealloc;
-(void)didSetResponderTargetForCalloutBar:(id)arg0 ;


@end


#endif