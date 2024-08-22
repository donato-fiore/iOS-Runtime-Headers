// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUPANCONTROLLER_H
#define _UICONTEXTMENUPANCONTROLLER_H

@class NSArray, NSString;
@protocol UIGestureRecognizerDelegate, _UIContextMenuScrollObservationInteractionDelegate, _UIContextMenuPanControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"
#import "UIViewSpringAnimationBehavior.h"
#import "UIView.h"
#import "UIPanGestureRecognizer.h"
#import "_UIVelocityIntegrator.h"

@interface _UIContextMenuPanController : NSObject <UIGestureRecognizerDelegate, _UIContextMenuScrollObservationInteractionDelegate>

 {
    NSUInteger _currentDetentIndex;
    CGFloat _initialYTranslation;
    UIBezierPath *_menuScrubPath;
    CGFloat _currentDistanceToMenuScrubPath;
    CGPoint _initialLocationInsidePreview;
    BOOL _menuViewIsVisible;
    BOOL _touchEverEnteredMenu;
    BOOL _clientAllowsDismissal;
}


@property (retain, nonatomic) NSArray *accessoryViews; // ivar: _accessoryViews
@property (readonly, nonatomic) UIViewSpringAnimationBehavior *animationBehavior; // ivar: _animationBehavior
@property (weak, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIContextMenuPanControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *detents; // ivar: _detents
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) ? menuAnchor; // ivar: _menuAnchor
@property (weak, nonatomic) UIView *menuView; // ivar: _menuView
@property (nonatomic) CGPoint originalMenuCenter; // ivar: _originalMenuCenter
@property (nonatomic) CGPoint originalPlatterCenter; // ivar: _originalPlatterCenter
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (weak, nonatomic) UIView *platterView; // ivar: _platterView
@property (nonatomic) NSUInteger rubberbandingEdges; // ivar: _rubberbandingEdges
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // ivar: _velocityIntegrator


-(BOOL)_canBeginDraggingWithTranslation:(struct CGPoint )arg0 location:(struct CGPoint )arg1 ;
-(BOOL)_canSwipeDownToDismiss;
-(BOOL)_initialPointInPlatterIsValid;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveEvent:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(CGFloat)_dragTearOffThreshold;
-(CGFloat)_rangeOfMotion;
-(CGFloat)_tearOffSpeedMultiplier;
-(id)initWithContainerView:(id)arg0 platterView:(id)arg1 menuView:(id)arg2 ;
-(int)_nearestDetentWithTranslation:(struct CGPoint )arg0 ;
-(struct CGPoint )_rubberBandedTranslationForGestureTranslation:(struct CGPoint )arg0 ;
-(struct CGVector )_currentPlatterVelocity;
-(void)_animationsForActionsStyleWithLocation:(struct CGPoint )arg0 ended:(BOOL)arg1 ;
-(void)_animationsForAnyAttachedAccessoryViews;
-(void)_animationsForPreviewPlusActionsStyleWithTranslation:(struct CGPoint )arg0 location:(struct CGPoint )arg1 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_updateForGestureWithState:(NSInteger)arg0 translation:(struct CGPoint )arg1 location:(struct CGPoint )arg2 allowsDragging:(BOOL)arg3 ;
-(void)_updateForSignificantLayoutChange;
-(void)_updateMenuScrubPathWithLocationIfNecessary:(struct CGPoint )arg0 ;
-(void)_updatePlatterGestureDebugUIWithTranslation:(struct CGPoint )arg0 location:(struct CGPoint )arg1 invalidate:(BOOL)arg2 ;
-(void)_updateViewPositionsWithTranslation:(struct CGPoint )arg0 location:(struct CGPoint )arg1 ended:(BOOL)arg2 withVelocity:(BOOL)arg3 ;
-(void)moveToDetentPosition:(NSInteger)arg0 ;
-(void)scrollObservationInteraction:(id)arg0 didUpdateWithTranslation:(struct CGPoint )arg1 location:(struct CGPoint )arg2 ended:(BOOL)arg3 ;
-(void)scrollObservationInteraction:(id)arg0 willBeginAtLocation:(struct CGPoint )arg1 ;


@end


#endif