// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSUSERNOTIFICATIONAUTHORIZATIONTASK_H
#define AMSUSERNOTIFICATIONAUTHORIZATIONTASK_H

@class NSString, UNUserNotificationCenter;
@protocol AMSUserNotificationAuthorizationDelegate;


#import "AMSTask.h"
#import "AMSUserNotificationAuthorizationOptions.h"

@interface AMSUserNotificationAuthorizationTask : AMSTask

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (weak, nonatomic) NSObject<AMSUserNotificationAuthorizationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) AMSUserNotificationAuthorizationOptions *options; // ivar: _options


+(id)_findEngagementRequestInResponse:(id)arg0 ;
+(id)engagementRequestForFullSheet;
+(id)recordEngagementEventWithBundleIdentifier:(id)arg0 options:(id)arg1 ;
-(id)_presentDialogForUserInitiatedWithCompletion;
-(id)_startEngagementAuthorizationWithResult:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 options:(id)arg1 ;
-(id)requestAuthorization;


@end


#endif