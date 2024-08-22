// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKNOTIFICATIONBANNER_H
#define GKNOTIFICATIONBANNER_H


#import <Foundation/Foundation.h>


@interface GKNotificationBanner : NSObject



+(id)bannerViewWithTitle:(id)arg0 image:(id)arg1 player:(id)arg2 message:(id)arg3 ;
+(id)bannerViewWithTitle:(id)arg0 image:(id)arg1 player:(id)arg2 message:(id)arg3 actionMessage:(id)arg4 ;
+(id)bannerViewWithTitle:(id)arg0 image:(id)arg1 player:(id)arg2 message:(id)arg3 actionMessage:(id)arg4 shortBanner:(BOOL)arg5 ;
+(id)bannerViewWithTitle:(id)arg0 message:(id)arg1 actionMessage:(id)arg2 ;
+(void)showBannerWithTitle:(id)arg0 image:(id)arg1 message:(id)arg2 completionHandler:(id)arg3 ;
+(void)showBannerWithTitle:(id)arg0 image:(id)arg1 message:(id)arg2 touchHandler:(id)arg3 ;
+(void)showBannerWithTitle:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;
+(void)showBannerWithTitle:(id)arg0 message:(id)arg1 duration:(CGFloat)arg2 completionHandler:(id)arg3 ;
+(void)showBannerWithTitle:(id)arg0 player:(id)arg1 message:(id)arg2 completionHandler:(id)arg3 ;
+(void)showBannerWithTitle:(id)arg0 player:(id)arg1 message:(id)arg2 touchHandler:(id)arg3 ;
+(void)showWelcomeBannerWithTitle:(id)arg0 message:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif