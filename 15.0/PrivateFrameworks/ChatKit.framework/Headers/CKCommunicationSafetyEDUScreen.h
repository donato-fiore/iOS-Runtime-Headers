// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCOMMUNICATIONSAFETYEDUSCREEN_H
#define CKCOMMUNICATIONSAFETYEDUSCREEN_H

@class OBWelcomeController, UIViewController;



@interface CKCommunicationSafetyEDUScreen : OBWelcomeController {
    UIViewController *_presentingViewController;
    BOOL _useLanguageForYoungChildren;
    id *_completion;
}




-(id)initWithTitleText:(id)arg0 completion:(id)arg1 ;
-(void)_addButtonsForContinueToNextEduScreen:(id)arg0 andReturnBack:(id)arg1 isSend:(BOOL)arg2 ;
-(void)_addButtonsForYes:(id)arg0 andNo:(id)arg1 ;
-(void)_continuePressedForReceive;
-(void)_continuePressedForSend;
-(void)_invokeCompletion:(BOOL)arg0 ;
-(void)_noPressed;
-(void)_notNowPressed;
-(void)_yesPressed;


@end


#endif