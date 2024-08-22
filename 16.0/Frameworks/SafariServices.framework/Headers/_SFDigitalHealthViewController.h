// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SFDIGITALHEALTHVIEWCONTROLLER_H
#define _SFDIGITALHEALTHVIEWCONTROLLER_H

@class UIViewController, NSURL, STBlockingViewController;
@protocol _SFDigitalHealthViewControllerDelegate;



@interface _SFDigitalHealthViewController : UIViewController {
    NSURL *_url;
    STBlockingViewController *_blockingViewController;
}


@property (nonatomic) CGFloat additionalVerticalSafeAreaMargin; // ivar: _additionalVerticalSafeAreaMargin
@property (weak, nonatomic) NSObject<_SFDigitalHealthViewControllerDelegate> *digitalHealthViewControllerDelegate; // ivar: _digitalHealthViewControllerDelegate


-(id)showBlockingViewControllerForURL:(id)arg0 withPolicy:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_blockingViewDidHide:(id)arg0 ;
-(void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(NSInteger)arg0 ;
-(void)hideBlockingViewControllerWithCompletionHandler:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif