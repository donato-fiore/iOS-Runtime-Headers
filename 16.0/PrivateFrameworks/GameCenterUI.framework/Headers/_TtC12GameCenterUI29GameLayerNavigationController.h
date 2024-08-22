// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC12GAMECENTERUI29GAMELAYERNAVIGATIONCONTROLLER_H
#define _TTC12GAMECENTERUI29GAMELAYERNAVIGATIONCONTROLLER_H

@class UINavigationController;
@protocol UIViewControllerTransitioningDelegate, UINavigationControllerDelegate;



@interface _TtC12GameCenterUI29GameLayerNavigationController : UINavigationController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

 {
    ? showsDoneButton;
    ? doneHandler;
}


@property (nonatomic, readonly) BOOL canBecomeFirstResponder;
@property (nonatomic) CGSize preferredContentSize;


-(BOOL)_requiresCustomPresentationController;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)presentationControllerForPresentedViewController:(id)arg0 presentingViewController:(id)arg1 sourceViewController:(id)arg2 ;
-(void)didTapDone;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif