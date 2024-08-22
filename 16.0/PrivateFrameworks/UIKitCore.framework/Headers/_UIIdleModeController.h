// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIIDLEMODECONTROLLER_H
#define _UIIDLEMODECONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "UIWindow.h"
#import "UIImageView.h"
#import "UIScreen.h"

@interface _UIIdleModeController : NSObject {
    BOOL _didApplyVisualEffects;
    NSUInteger _dismissalTransactionID;
    UIWindow *_backgroundWindow;
    UIImageView *_vignetteView;
    BOOL _keyWindowAllowedGroupBlending;
    UIWindow *_keyWindow;
    NSMapTable *_viewsToCAFilters;
    NSMapTable *_viewsToAttributes;
    NSMapTable *_viewsToOriginalAttributes;
}


@property (nonatomic, getter=isIdleModeEnabled) BOOL idleModeEnabled; // ivar: _idleModeEnabled
@property (readonly, nonatomic) UIScreen *screen; // ivar: _screen
@property (nonatomic) NSUInteger style; // ivar: _style


-(BOOL)_recordLayoutAttributesStartingAtView:(id)arg0 ;
-(CGFloat)_dimmingOverlayWhiteValueForUserInterfaceStyle:(NSInteger)arg0 ;
-(CGFloat)_dismissalAnimationDuration;
-(CGFloat)_presentationAnimationDuration;
-(CGFloat)_vignetteAlphaForUserInterfaceStyle:(NSInteger)arg0 ;
-(id)_imageForTraitCollection:(id)arg0 ;
-(id)_originalAttributesForView:(id)arg0 comparedToIdleModeAttributes:(id)arg1 ;
-(id)_vignetteImageAroundFocusedFrame:(struct CGRect )arg0 ;
-(id)initWithScreen:(id)arg0 ;
-(void)_animateDismissal;
-(void)_animatePresentation;
-(void)_applyDismissalLayoutAttributesToViews;
-(void)_applyLayoutAttributes:(id)arg0 toView:(id)arg1 ;
-(void)_applyPresentationLayoutAttributesToViews;
-(void)_completeDismissal;
-(void)_enterIdleMode;
-(void)_enterIdleModeWithOptions:(NSUInteger)arg0 ;
-(void)_exitIdleMode;
-(void)_exitIdleModeWithOptions:(NSUInteger)arg0 ;
-(void)_postWillEnterNotification;
-(void)_postWillExitNotification;
-(void)_prepareForPresentationWithKeyWindow:(id)arg0 focusedView:(id)arg1 ;
-(void)dealloc;


@end


#endif