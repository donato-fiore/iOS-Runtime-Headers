// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBUFORMAUTOFILLPROMPT_H
#define WBUFORMAUTOFILLPROMPT_H

@class UIAlertController;

#import <Foundation/Foundation.h>


@interface WBUFormAutoFillPrompt : NSObject {
    UIAlertController *_alertController;
}




+(void)showAutoFillPromptInWebView:(id)arg0 title:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 cancelWhenAppEntersBackground:(BOOL)arg5 makeFirstButtonSuggestedAction:(BOOL)arg6 completionHandler:(id)arg7 ;
+(void)showAutoFillPromptInWebView:(id)arg0 title:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 makeFirstButtonSuggestedAction:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)_alertTextFieldDidChange:(id)arg0 ;
-(void)showAutoFillPromptForUsernameInWebView:(id)arg0 title:(id)arg1 message:(id)arg2 suggestedUsername:(id)arg3 password:(id)arg4 isGeneratedPassword:(BOOL)arg5 completionHandler:(id)arg6 ;


@end


#endif