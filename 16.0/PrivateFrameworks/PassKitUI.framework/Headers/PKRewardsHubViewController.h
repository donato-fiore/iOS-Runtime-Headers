// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKREWARDSHUBVIEWCONTROLLER_H
#define PKREWARDSHUBVIEWCONTROLLER_H

@class PKAccount, PKAccountService, PKTransactionSourceCollection, PKRewardsSummaryFetcher, PKAccountEnhancedMerchantsFetcher, NSString;
@protocol PKRewardsHubSectionControllerDelegate, PKViewControllerPreflightable;


#import "PKDynamicCollectionViewController.h"
#import "PKRewardsHubSummarySectionController.h"
#import "PKEnhancedMerchantsShelfSectionController.h"
#import "PKAccountPromotionsSectionController.h"

@interface PKRewardsHubViewController : PKDynamicCollectionViewController <PKRewardsHubSectionControllerDelegate, PKViewControllerPreflightable>

 {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKTransactionSourceCollection *_transactionSourceCollection;
    PKRewardsSummaryFetcher *_rewardsFetcher;
    PKAccountEnhancedMerchantsFetcher *_enhancedMerchantsFetcher;
    PKRewardsHubSummarySectionController *_summariesSectionController;
    PKEnhancedMerchantsShelfSectionController *_enhancedMerchantsShelfSectionController;
    PKAccountPromotionsSectionController *_promotionsSectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)_nonNilSections;
-(id)initWithAccount:(id)arg0 transactionSourceCollection:(id)arg1 accountService:(id)arg2 ;
-(id)rewardsHubCollectionView;
-(void)_pushEnhancedMerchantsListWithCompletion:(id)arg0 ;
-(void)navigateToRewardsHubDestination:(NSInteger)arg0 ;
-(void)openLinkedApplication:(id)arg0 ;
-(void)openURL:(id)arg0 sensitive:(BOOL)arg1 preferInApp:(BOOL)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presentEducationViewController;
-(void)presentEnhancedMerchant:(id)arg0 ;
-(void)reportEventIfNecessary:(id)arg0 ;
-(void)scrollToPromotionWithProgramIdentifier:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif