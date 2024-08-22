// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SMSAPPLICATIONINTENTSHELPER_H
#define SMSAPPLICATIONINTENTSHELPER_H


#import <Foundation/Foundation.h>


@interface SMSApplicationIntentsHelper : NSObject



+(BOOL)continueWithSendMessageInteraction:(id)arg0 chatRegistry:(id)arg1 navigationProvider:(id)arg2 conversationList:(id)arg3 chatController:(id)arg4 ;
+(BOOL)isSendMessageInteraction:(id)arg0 ;


@end


#endif