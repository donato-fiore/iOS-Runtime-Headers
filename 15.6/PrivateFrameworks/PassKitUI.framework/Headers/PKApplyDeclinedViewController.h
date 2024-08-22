// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLYDECLINEDVIEWCONTROLLER_H
#define PKAPPLYDECLINEDVIEWCONTROLLER_H



#import "PKApplyExplanationViewController.h"
#import "PKBusinessChatController.h"

@interface PKApplyDeclinedViewController : PKApplyExplanationViewController {
    PKBusinessChatController *_businessChatController;
}




-(void)explanationViewControllerDidSelectCancel:(id)arg0 ;
-(void)explanationViewDidSelectContinue:(id)arg0 ;
-(void)explanationViewDidSelectSetupLater:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif