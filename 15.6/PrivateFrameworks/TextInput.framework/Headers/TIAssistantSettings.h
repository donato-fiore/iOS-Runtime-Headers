// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIASSISTANTSETTINGS_H
#define TIASSISTANTSETTINGS_H


#import <Foundation/Foundation.h>


@interface TIAssistantSettings : NSObject



// +(void)connectForOperations:(id)arg0 withErrorHandler:(unk)arg1  ;
+(void)dismissDialog;
+(void)dismissEnableDataSharingPrompt;
+(void)dismissEnableDictationPrompt;
+(void)dismissedDataSharingWithResponse:(NSInteger)arg0 ;
+(void)launchDictationSettings;
+(void)launchKeyboardSettings;
+(void)presentDialogForType:(NSInteger)arg0 withCompletionHandler:(id)arg1 ;
+(void)promptReminderDataSharingWithCompletionHandler:(id)arg0 ;
+(void)promptToEnableDataSharingWithCompletionHandler:(id)arg0 ;
+(void)promptToEnableDictationWithCompletionHandler:(id)arg0 ;
+(void)promptToRemindDataSharingWithCompletionHandler:(id)arg0 ;
+(void)setTestBlock:(id)arg0 ;


@end


#endif