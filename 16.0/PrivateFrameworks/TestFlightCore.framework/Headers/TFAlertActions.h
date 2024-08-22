// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TFALERTACTIONS_H
#define TFALERTACTIONS_H


#import <Foundation/Foundation.h>


@interface TFAlertActions : NSObject



+(void)didDismissWhatToTestForBundleIdentifier:(id)arg0 ;
// +(void)launchApplicationWithSuccessHandler:(id)arg0 failureHandler:(unk)arg1  ;
+(void)postAlertActionDistributedNotification:(id)arg0 userInfo:(id)arg1 ;
+(void)showCrashFeedbackForBundleIndentifier:(id)arg0 ;
+(void)showVisualFeedbackForBundleIdentifier:(id)arg0 initialImages:(id)arg1 ;
+(void)showWhatToTestForBundleIdentifier:(id)arg0 ;


@end


#endif