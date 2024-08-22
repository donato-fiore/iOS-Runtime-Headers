// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMSAPPLICATIONINTENTSHELPER_H
#define SMSAPPLICATIONINTENTSHELPER_H


#import <Foundation/Foundation.h>


@interface SMSApplicationIntentsHelper : NSObject



+(BOOL)continueWithSendMessageInteraction:(id)arg0 chatRegistry:(id)arg1 messagesController:(id)arg2 conversationList:(id)arg3 ;
+(BOOL)isSendMessageInteraction:(id)arg0 ;


@end


#endif