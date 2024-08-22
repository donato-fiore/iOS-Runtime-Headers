// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIOVERLAYCONTAINERVIEWCONTROLLER_H
#define SKUIOVERLAYCONTAINERVIEWCONTROLLER_H

@class UIViewController, UIControl, UITapGestureRecognizer, NSMutableArray, NSString, UIColor, NSArray;
@protocol UIGestureRecognizerDelegate, SKUIOverlayContainerDelegate;



@interface SKUIOverlayContainerViewController : UIViewController <UIGestureRecognizerDelegate>

 {
    UIControl *_backstopView;
    BOOL _isAdjustingViewsForDismiss;
    NSInteger _popViewControllerCount;
    NSInteger _selectedViewControllerIndex;
    UITapGestureRecognizer *_tapGestureRecognizer;
    NSMutableArray *_viewControllers;
}


@property (readonly, nonatomic) UIControl *backstopControl;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SKUIOverlayContainerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIColor *dimmingViewColor;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *viewControllers;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)_overlaySpacingForSize:(struct CGSize )arg0 ;
-(NSInteger)_indexOfViewControllerForPoint:(struct CGPoint )arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_selectedViewController;
-(id)_viewControllerForPoint:(struct CGPoint )arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(struct CGRect )_centeredFrameForViewController:(id)arg0 inBounds:(struct CGRect )arg1 ;
-(struct CGSize )_overlaySizeForController:(id)arg0 atBoundsSize:(struct CGSize )arg1 ;
-(void)_fadeInViewController:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_frameAction:(id)arg0 ;
-(void)_popViewControllers;
-(void)_positionViewControllersForSize:(struct CGSize )arg0 traitCollection:(id)arg1 ;
-(void)_pushViewController:(id)arg0 ;
-(void)_removeChildren;
-(void)_slideInViewController:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_tapAction:(id)arg0 ;
-(void)dealloc;
-(void)dismissWithFadeTransitionCompletionBlock:(id)arg0 ;
-(void)dismissWithFlipTransition:(id)arg0 completionBlock:(id)arg1 ;
-(void)loadView;
-(void)popViewControllerAnimated:(BOOL)arg0 ;
-(void)popViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)replaceViewController:(id)arg0 withViewController:(id)arg1 ;
-(void)showViewController:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)showViewController:(id)arg0 withFlipTransition:(id)arg1 completionBlock:(id)arg2 ;
-(void)showViewControllers:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif