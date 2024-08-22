// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFFNAVIGATIONCONTROLLER_H
#define BFFNAVIGATIONCONTROLLER_H

@class UINavigationController, NSMutableArray, NSMutableDictionary, UIColor, NSString;
@protocol UINavigationControllerDelegate;



@interface BFFNavigationController : UINavigationController <UINavigationControllerDelegate>

 {
    NSMutableArray *_observers;
    NSMutableDictionary *_appearanceHandlers;
    NSInteger _pendingShowOperation;
    UIColor *_backgroundColor;
}


@property (readonly, nonatomic, getter=isAnimating) BOOL animating; // ivar: _animating
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGSize forcedPreferredContentSize; // ivar: _forcedPreferredContentSize
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoreDismissals; // ivar: _ignoreDismissals
@property (nonatomic) BOOL pushWithoutDeferringTransitionsWhileInBackground; // ivar: _pushWithoutDeferringTransitionsWhileInBackground
@property (readonly) Class superclass;


-(BOOL)_canShowTextServices;
-(BOOL)_usesTransitionController;
-(BOOL)prefersStatusBarHidden;
-(NSInteger)preferredStatusBarStyle;
-(NSUInteger)supportedInterfaceOrientations;
-(id)init;
-(id)initIgnoringDismissals:(BOOL)arg0 ;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_reapObservers;
-(void)addDelegateObserver:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)popToViewController:(id)arg0 completion:(id)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 completion:(id)arg1 ;
-(void)removeDelegateObserver:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setViewControllers:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif