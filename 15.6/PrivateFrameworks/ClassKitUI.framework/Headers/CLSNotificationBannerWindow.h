// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSNOTIFICATIONBANNERWINDOW_H
#define CLSNOTIFICATIONBANNERWINDOW_H

@class UIWindow;
@protocol OS_dispatch_semaphore;


#import "CLSNotificationBannerViewController.h"

@interface CLSNotificationBannerWindow : UIWindow

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bannerSemaphore; // ivar: _bannerSemaphore
@property (retain, nonatomic) CLSNotificationBannerViewController *currentBannerViewController; // ivar: _currentBannerViewController


+(id)bannerWindow;
+(id)queue;
+(void)enqueBanner:(id)arg0 ;
-(BOOL)_canAffectStatusBarAppearance;
-(BOOL)_includeInDefaultImageSnapshot;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)init;
-(void)_hideBanner:(id)arg0 quickly:(BOOL)arg1 ;
-(void)_showBanner:(id)arg0 ;
-(void)handlePan:(id)arg0 ;


@end


#endif