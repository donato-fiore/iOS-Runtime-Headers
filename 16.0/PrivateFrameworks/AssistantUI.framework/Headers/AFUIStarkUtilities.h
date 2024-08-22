// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISTARKUTILITIES_H
#define AFUISTARKUTILITIES_H


#import <Foundation/Foundation.h>


@interface AFUIStarkUtilities : NSObject



+(BOOL)isRequestForAnnnounceNotificationServerCommand:(id)arg0 ;
+(BOOL)isRequestForAnnounceNotification:(id)arg0 ;
+(BOOL)isRequestForMessageReadBannerTap:(id)arg0 ;
+(BOOL)shouldPresentForNewRequest:(id)arg0 duringCurrentRequest:(id)arg1 ;
+(BOOL)shouldStartNewRequest:(id)arg0 duringCurrentRequest:(id)arg1 ;
+(NSInteger)backgroundViewModeForRequestSource:(NSInteger)arg0 directActionEvent:(NSInteger)arg1 ;


@end


#endif