// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKNOTIFICATIONBANNERVIEWCONTROLLER_H
#define GKNOTIFICATIONBANNERVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint;


#import "GKNotificationBannerView.h"

@interface GKNotificationBannerViewController : UIViewController

@property (nonatomic) BOOL bannerAnimating; // ivar: _bannerAnimating
@property (retain, nonatomic) GKNotificationBannerView *bannerView; // ivar: _bannerView
@property (nonatomic) BOOL bannerVisible; // ivar: _bannerVisible
@property (retain, nonatomic) NSLayoutConstraint *bannerWidthConstraint; // ivar: _bannerWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *bannerYPositionConstraint; // ivar: _bannerYPositionConstraint


-(BOOL)useShortBanner;
-(BOOL)windowPointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)bannerWidthForViewSize:(struct CGSize )arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(struct CGPoint )_hiddenBannerPosition:(struct CGSize )arg0 ;
-(struct CGPoint )_visibleBannerCenterPosition:(struct CGSize )arg0 ;
-(void)addBannerView:(id)arg0 ;
-(void)addConstraintsForBannerView;
-(void)addConstraintsForTVOSBannerView;
-(void)handleWindowPan:(id)arg0 ;
-(void)handleWindowSingleTap:(id)arg0 ;
-(void)hideBannerQuickly:(BOOL)arg0 ;
-(void)showCurrentBanner;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)windowTouchesEnded:(id)arg0 withEvent:(id)arg1 ;


@end


#endif