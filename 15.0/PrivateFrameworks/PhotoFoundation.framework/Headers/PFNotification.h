// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFNOTIFICATION_H
#define PFNOTIFICATION_H


#import <Foundation/Foundation.h>


@interface PFNotification : NSObject



+(void)postUserNotificationWithIdentifier:(id)arg0 title:(id)arg1 subtitle:(id)arg2 body:(id)arg3 category:(id)arg4 attachments:(id)arg5 userInfo:(id)arg6 caller:(char *)arg7 ;


@end


#endif