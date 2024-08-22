// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYDECLINEDVIEWCONTROLLER_H
#define PKAPPLYDECLINEDVIEWCONTROLLER_H



#import "PKApplyExplanationViewController.h"
#import "PKBusinessChatController.h"

@interface PKApplyDeclinedViewController : PKApplyExplanationViewController {
    PKBusinessChatController *_businessChatController;
}




-(void)_auxiliaryAction;
-(void)_cancelAction;
-(void)_continueAction;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif