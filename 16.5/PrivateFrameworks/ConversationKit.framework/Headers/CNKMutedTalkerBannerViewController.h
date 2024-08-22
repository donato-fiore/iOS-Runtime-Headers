// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNKMUTEDTALKERBANNERVIEWCONTROLLER_H
#define CNKMUTEDTALKERBANNERVIEWCONTROLLER_H

@class UIViewController;
@protocol CNKMutedTalkerBannerViewControllerDelegate;



@interface CNKMutedTalkerBannerViewController : UIViewController {
    ? currentRequestID;
    ? pillView;
    ? pillImageView;
    ? pillViewSubtitle;
    ? pillViewTitle;
    ? bannerSource;
    ? isMuted;
    ? isBannerPresent;
}


@property (nonatomic, weak) NSObject<CNKMutedTalkerBannerViewControllerDelegate> *delegate; // ivar: delegate


-(BOOL)_canShowWhileLocked;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dismissBanner;
-(void)handleTap:(id)arg0 ;
-(void)playBannerSound;
-(void)presentableWillAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)showBanner;
-(void)updatePillViewWithIsMuted:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif