// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKENHANCEDMERCHANTSVIEWCONTROLLER_H
#define PKENHANCEDMERCHANTSVIEWCONTROLLER_H

@class PKAccount, PKAccountService, PKAccountEnhancedMerchantsFetcher, NSString;
@protocol PKRewardsHubSectionControllerDelegate, PKViewControllerPreflightable;


#import "PKDynamicCollectionViewController.h"
#import "PKEnhancedMerchantsListSectionController.h"

@interface PKEnhancedMerchantsViewController : PKDynamicCollectionViewController <PKRewardsHubSectionControllerDelegate, PKViewControllerPreflightable>

 {
    PKAccount *_account;
    PKAccountService *_accountService;
    PKAccountEnhancedMerchantsFetcher *_enhancedMerchantsFetcher;
    PKEnhancedMerchantsListSectionController *_enhancedMerchantsListSectionController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
-(id)_nonNilSections;
-(id)initWithAccount:(id)arg0 accountService:(id)arg1 enhancedMerchantsFetcher:(id)arg2 ;
-(id)rewardsHubCollectionView;
-(void)navigateToRewardsHubDestination:(NSInteger)arg0 ;
-(void)openLinkedApplication:(id)arg0 ;
-(void)openURL:(id)arg0 sensitive:(BOOL)arg1 preferInApp:(BOOL)arg2 ;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presentDisplayableError:(id)arg0 ;
-(void)reportEventIfNecessary:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif