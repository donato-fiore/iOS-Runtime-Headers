// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BIOMETRICSUPPORTUSERNOTIFICATION_H
#define BIOMETRICSUPPORTUSERNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface BiometricSupportUserNotification : NSObject



+(BOOL)didDisplayPearlGlassesBannerNotificationRecently:(CGFloat)arg0 ;
+(BOOL)displayPearlGlassesBannerNotification;
+(void)displayPearlInterlockIssueNotification:(BOOL)arg0 ;
+(void)displayPearlIssueNotification;
+(void)displaySensorIssueNotificationWithHeader:(id)arg0 message:(id)arg1 button:(id)arg2 ;
+(void)displayStopAlertWithHeader:(id)arg0 andMessage:(id)arg1 ;
+(void)displayTouchIDIssueNotification;


@end


#endif