// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TUIFEEDBACKALERT_H
#define TUIFEEDBACKALERT_H


#import <Foundation/Foundation.h>


@interface TUIFeedbackAlert : NSObject



+(void)messageWithTitle:(id)arg0 message:(id)arg1 actionLabel:(id)arg2 parentController:(id)arg3 completion:(id)arg4 ;
+(void)promptWithTitle:(id)arg0 message:(id)arg1 acceptActionLabel:(id)arg2 declineActionLabel:(id)arg3 parentController:(id)arg4 completion:(id)arg5 ;


@end


#endif