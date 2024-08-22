// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPUSHPARSABLERICHNOTIFICATION_H
#define AMSPUSHPARSABLERICHNOTIFICATION_H

@class NSString;
@protocol AMSPushParsable, AMSUserNotificationIntentDelegate;

#import <Foundation/Foundation.h>


@interface AMSPushParsableRichNotification : NSObject <AMSPushParsable, AMSUserNotificationIntentDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldSkipAccountCheck;
+(void)handleNotificationPayload:(id)arg0 config:(id)arg1 bag:(id)arg2 ;
+(void)userNotification:(id)arg0 selectedButtonAction:(id)arg1 bag:(id)arg2 ;


@end


#endif