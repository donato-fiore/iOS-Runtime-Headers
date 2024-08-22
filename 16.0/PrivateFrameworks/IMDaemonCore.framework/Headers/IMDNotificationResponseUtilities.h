// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDNOTIFICATIONRESPONSEUTILITIES_H
#define IMDNOTIFICATIONRESPONSEUTILITIES_H

@class NSString, UNUserNotificationCenter;
@protocol UNUserNotificationCenterDelegate;

#import <Foundation/Foundation.h>

#import "IMDFamilyInviteReponseHandler.h"
#import "IMDScreenTimeAskReponseHandler.h"

@interface IMDNotificationResponseUtilities : NSObject <UNUserNotificationCenterDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) IMDFamilyInviteReponseHandler *familyInviteResponseHandler; // ivar: _familyInviteResponseHandler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (retain, nonatomic) IMDScreenTimeAskReponseHandler *screenTimeAskReponseHandler; // ivar: _screenTimeAskReponseHandler
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_markMessageAsRead:(id)arg0 inChat:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_setupNotificationCenter;
-(void)userNotificationCenter:(id)arg0 didReceiveNotificationResponse:(id)arg1 withCompletionHandler:(id)arg2 ;


@end


#endif