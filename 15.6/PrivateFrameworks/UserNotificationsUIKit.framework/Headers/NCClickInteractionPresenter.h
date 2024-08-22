// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NCCLICKINTERACTIONPRESENTER_H
#define NCCLICKINTERACTIONPRESENTER_H

@class MTMaterialView, _UIClickInteraction, UIView, NSString;
@protocol UIGestureRecognizerDelegate, _UIClickInteractionDelegate, NCClickInteractionPresenterDelegate;

#import <Foundation/Foundation.h>

#import "NCClickInteractionPresentedControl.h"
#import "NCTouchEaterGestureRecognizer.h"

@interface NCClickInteractionPresenter : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDelegate>



@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // ivar: _backgroundMaterialView
@property (readonly, nonatomic, getter=_clickInteraction) _UIClickInteraction *clickInteraction; // ivar: _clickInteraction
@property (readonly, nonatomic, getter=_containerView) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NCClickInteractionPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_isHinting, setter=_setHinting:) BOOL hinting; // ivar: _hinting
@property (readonly, nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (nonatomic) NSInteger overrideUserInterfaceStyle; // ivar: _overrideUserInterfaceStyle
@property (readonly, nonatomic, getter=_portalView) UIView *portalView; // ivar: _portalView
@property (nonatomic, getter=isPresented, setter=_setPresented:) BOOL presented; // ivar: _presented
@property (readonly, nonatomic, getter=_presentedControl) NCClickInteractionPresentedControl *presentedControl; // ivar: _presentedControl
@property (readonly, weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (nonatomic) CGRect sourceViewVisibleRect; // ivar: _sourceViewVisibleRect
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, weak, nonatomic, getter=_touchEater) NCTouchEaterGestureRecognizer *touchEater; // ivar: _touchEater


-(BOOL)clickInteractionShouldBegin:(id)arg0 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)_frictionForTransitionPresentation:(BOOL)arg0 cancelled:(BOOL)arg1 ;
-(CGFloat)_tensionForTransitionPresentation:(BOOL)arg0 cancelled:(BOOL)arg1 ;
-(id)highlightEffectForClickInteraction:(id)arg0 ;
-(id)initWithTitle:(id)arg0 sourceView:(id)arg1 materialRecipe:(NSInteger)arg2 ;
-(struct CGRect )_finalPresentedViewFrame;
-(struct CGRect )_initialPresentedViewFrame;
-(void)_animatePresentation:(BOOL)arg0 cancelled:(BOOL)arg1 completion:(id)arg2 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)_configureContainerViewIfNecessary;
-(void)_configurePortalViewIfNecessary;
-(void)_configurePresentedControlIfNecessaryWithTitle:(id)arg0 ;
-(void)_handleEatenTouch:(id)arg0 ;
-(void)_performCancel;
-(void)_performPresentation;
-(void)_setUpBackgroundMaterialView;
-(void)_setUpContainerView;
-(void)_setUpPortalView;
-(void)_setUpPresentationIfNecessary;
-(void)_setUpPresentedControl;
-(void)_setUpSubviews;
-(void)_tearDown;
-(void)addTarget:(id)arg0 action:(SEL)arg1 ;
-(void)clickInteractionDidClickUp:(id)arg0 ;
-(void)clickInteractionDidEnd:(id)arg0 ;
-(void)contentSizeCategoryDidChange;
-(void)presentModalFullScreen;


@end


#endif