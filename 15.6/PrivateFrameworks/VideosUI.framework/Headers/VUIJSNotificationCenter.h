// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIJSNOTIFICATIONCENTER_H
#define VUIJSNOTIFICATIONCENTER_H

@class WLKNotificationCenter, NSString;
@protocol WLKNotificationCenterDelegate, VUIJSNotificationCenter;


#import "VUIJSObject.h"

@interface VUIJSNotificationCenter : VUIJSObject <WLKNotificationCenterDelegate, VUIJSNotificationCenter>

 {
    WLKNotificationCenter *_center;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)showAppInstallCompletePushNotificationWithAppContext:(id)arg0 appName:(id)arg1 contentName:(id)arg2 punchoutURL:(id)arg3 ;
+(void)showSignupAlertPushNotificationWithAppContext:(id)arg0 ;
-(id)badgeData;
-(id)initWithAppContext:(id)arg0 ;
-(void)clearBadgeData;
-(void)handleAction:(id)arg0 ;
-(void)post:(id)arg0 ;
-(void)setBadgeNumber:(id)arg0 ;
-(void)setBadgeString:(id)arg0 ;


@end


#endif