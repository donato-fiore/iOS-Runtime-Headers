// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSCREENTIMEOVERLAYVIEWCONTROLLER_H
#define SFSCREENTIMEOVERLAYVIEWCONTROLLER_H

@class UIViewController, NSURL, STBlockingViewController;
@protocol SFScreenTimeOverlayViewControllerDelegate;



@interface SFScreenTimeOverlayViewController : UIViewController {
    NSURL *_url;
    STBlockingViewController *_blockingViewController;
}


@property (nonatomic) CGFloat additionalVerticalSafeAreaMargin; // ivar: _additionalVerticalSafeAreaMargin
@property (weak, nonatomic) NSObject<SFScreenTimeOverlayViewControllerDelegate> *delegate; // ivar: _delegate


-(id)showBlockingViewControllerForURL:(id)arg0 withPolicy:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)_blockingViewDidHide:(id)arg0 ;
-(void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(NSInteger)arg0 ;
-(void)hideBlockingViewControllerWithCompletionHandler:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif