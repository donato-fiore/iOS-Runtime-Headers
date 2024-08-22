// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SKUISTATUSBARALERTVIEWCONTROLLER_H
#define _SKUISTATUSBARALERTVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString, UIView;
@protocol _SKUIStatusBarAlertViewControllerDelegate;



@interface _SKUIStatusBarAlertViewController : UIViewController {
    UILabel *_label;
}


@property (readonly, nonatomic) NSUInteger defaultInterfaceOrientations;
@property (weak, nonatomic) NSObject<_SKUIStatusBarAlertViewControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *message;
@property (nonatomic, getter=isOnScreen) BOOL onScreen; // ivar: _onScreen
@property (readonly, nonatomic) UIView *statusBarView;
@property (nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) NSUInteger supportedInterfaceOrientations; // ivar: _supportedInterfaceOrientations


-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)endAllAnimations;
-(void)handleLabelTap:(id)arg0 ;
-(void)updateLabelFrame;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif