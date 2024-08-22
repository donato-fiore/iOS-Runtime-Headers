// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKNAVIGATIONCONTROLLER_H
#define GKNAVIGATIONCONTROLLER_H

@class UINavigationController, NSString, NSMutableArray;
@protocol UIViewControllerRestoration, UINavigationBarDelegate;



@interface GKNavigationController : UINavigationController <UIViewControllerRestoration, UINavigationBarDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *deferredTransitions; // ivar: _deferredTransitions
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)viewControllerWithRestorationIdentifierPath:(id)arg0 coder:(id)arg1 ;
-(BOOL)hasEmbeddedPopoverNavigationStack;
-(BOOL)shouldAutorotate;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_gkViewControllersForRestoringPopover;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)popEmbeddedPopoverViewControllers;
-(id)popToRootViewControllerAnimated:(BOOL)arg0 ;
-(id)popToViewController:(id)arg0 animated:(BOOL)arg1 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(id)targetViewControllerForAction:(SEL)arg0 ;
-(void)_deferTransitionOfType:(int)arg0 withViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_gkPushPresentedViewControllerForCompactSizeClass:(id)arg0 ;
-(void)_gkRestorePopoverWithViewControllers:(id)arg0 completion:(id)arg1 ;
-(void)_performDeferredTransition;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupGKNavigationController;
-(void)willShowViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif