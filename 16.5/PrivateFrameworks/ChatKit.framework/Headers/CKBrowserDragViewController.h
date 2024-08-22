// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKBROWSERDRAGVIEWCONTROLLER_H
#define CKBROWSERDRAGVIEWCONTROLLER_H

@class UIViewController, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView;
@protocol UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate, CKBrowserDragViewControllerDelegate;


#import "CKAnimatedImage.h"
#import "CKBrowserDragStickerView.h"

@interface CKBrowserDragViewController : UIViewController <UIGestureRecognizerDelegate, UIDynamicAnimatorDelegate>



@property (readonly, nonatomic) CGFloat absoluteScale;
@property (nonatomic) CGPoint anchorOffset; // ivar: _anchorOffset
@property (nonatomic) BOOL canPeel; // ivar: _canPeel
@property (nonatomic) BOOL canRotate; // ivar: _canRotate
@property (nonatomic) BOOL canScale; // ivar: _canScale
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBrowserDragViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKAnimatedImage *dragImage; // ivar: _dragImage
@property (readonly, nonatomic) CGPoint dragViewCenter;
@property (readonly, nonatomic) CGFloat dragViewRotation; // ivar: _dragViewRotation
@property (readonly, nonatomic) CGFloat dragViewScale;
@property (retain, nonatomic) UILongPressGestureRecognizer *gestureRecognizer; // ivar: _gestureRecognizer
@property (nonatomic) BOOL hasMovedToWindow; // ivar: _hasMovedToWindow
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint keyboardAnchorOffset; // ivar: _keyboardAnchorOffset
@property (retain, nonatomic) CKBrowserDragStickerView *keyboardDragView; // ivar: _keyboardDragView
@property (retain, nonatomic) UIPanGestureRecognizer *keyboardPanGestureRecognizer; // ivar: _keyboardPanGestureRecognizer
@property (nonatomic) CGRect keyboardSourceRect; // ivar: _keyboardSourceRect
@property (weak, nonatomic) UIView *keyboardWindowSourceView; // ivar: _keyboardWindowSourceView
@property (retain, nonatomic) CKBrowserDragStickerView *normalDragView; // ivar: _normalDragView
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic, getter=isPressed) BOOL pressed; // ivar: _pressed
@property (nonatomic) CGPoint previousPanLocationInKeyboardView; // ivar: _previousPanLocationInKeyboardView
@property (nonatomic) CGPoint previousPanLocationInView; // ivar: _previousPanLocationInView
@property (nonatomic) CGFloat rotationAngle;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly) Class superclass;


+(BOOL)supportsForceTouch;
-(BOOL)_orbScalingEnabled;
-(id)initWithDragImage:(id)arg0 inSourceRect:(struct CGRect )arg1 withSourcePoint:(struct CGPoint )arg2 keyboardSourceRect:(struct CGRect )arg3 keyboardSourcePoint:(struct CGPoint )arg4 withGestureRecognizer:(id)arg5 ;
-(void)_reversePeelAnimationToPoint:(struct CGPoint )arg0 keyboardPoint:(struct CGPoint )arg1 forPlacement:(BOOL)arg2 shouldShrink:(BOOL)arg3 completionBlock:(id)arg4 ;
-(void)animateBackToSourceCompletionBlock:(id)arg0 ;
-(void)animatePlacementAtPoint:(struct CGPoint )arg0 shouldShrink:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)commitDrag;
-(void)dealloc;
-(void)gestureRecognized:(id)arg0 ;
-(void)manuallyInitializeDragAtPoint:(struct CGPoint )arg0 ;
-(void)manuallyUpdateDragPositionToPoint:(struct CGPoint )arg0 ;
-(void)panGestureRecognized:(id)arg0 ;
-(void)setPlusImageViewHidden:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif