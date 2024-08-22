// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTSUPPORTTOPICSVIEWCONTROLLER_H
#define PKACCOUNTSUPPORTTOPICSVIEWCONTROLLER_H

@class PKAccount, NSString, PKAccountSupportTopic;
@protocol PKAccountSupportTopicsSectionControllerDelegate, PKAccountSupportTopicExplanationViewControllerDelegate;


#import "PKPaymentSetupOptionsViewController.h"
#import "PKAccountSupportTopicsSectionController.h"
#import "PKAccountSupportSectionController.h"
#import "PKBusinessChatController.h"

@interface PKAccountSupportTopicsViewController : PKPaymentSetupOptionsViewController <PKAccountSupportTopicsSectionControllerDelegate, PKAccountSupportTopicExplanationViewControllerDelegate>

 {
    PKAccount *_account;
    PKAccountSupportTopicsSectionController *_sectionTopicController;
    PKAccountSupportSectionController *_sectionAccountController;
    PKBusinessChatController *_businessChatController;
    BOOL _loadingTopics;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKAccountSupportTopic *suggestedTopic; // ivar: _suggestedTopic
@property (readonly) Class superclass;


-(BOOL)shouldShowSupportLink:(id)arg0 ;
-(id)initWithAccount:(id)arg0 ;
-(void)_cancelTapped;
-(void)_continueToChat;
-(void)_fetchCommonSupportTopics;
-(void)_reloadSectionControllerWithTopics:(id)arg0 ;
-(void)_updateContentUnavailableConfigurationUsingState:(id)arg0 ;
-(void)deselectCells;
-(void)openBusinessChatForTopic:(id)arg0 ;
-(void)reloadItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)showExplanationForTopic:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif