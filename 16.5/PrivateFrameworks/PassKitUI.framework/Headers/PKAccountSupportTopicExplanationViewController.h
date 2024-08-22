// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPICEXPLANATIONVIEWCONTROLLER_H
#define PKACCOUNTSUPPORTTOPICEXPLANATIONVIEWCONTROLLER_H

@class PKAccountSupportTopic, PKAccount;
@protocol PKAccountSupportTopicExplanationSectionControllerDelegate, PKAccountSupportTopicExplanationViewControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKAccountSupportTopicExplanationSectionController.h"
#import "PKBusinessChatController.h"

@interface PKAccountSupportTopicExplanationViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicExplanationSectionControllerDelegate>

 {
    PKAccountSupportTopic *_topic;
    PKAccount *_account;
    id<PKAccountSupportTopicExplanationViewControllerDelegate> *_delegate;
    PKAccountSupportTopicExplanationSectionController *_sectionController;
    PKBusinessChatController *_businessChatController;
}




-(BOOL)shouldShowSupportLink:(id)arg0 ;
-(id)initWithAccount:(id)arg0 topic:(id)arg1 delegate:(id)arg2 ;
-(void)_cancelTapped;
-(void)_openSupportLinkURL:(id)arg0 ;
-(void)_performPrimaryAction;
-(void)_showMerchantDetails;
-(void)deselectCells;
-(void)openSupportLink:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif