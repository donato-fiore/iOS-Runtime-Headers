// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSPERSONALIZATIONVIEWCONTROLLER_H
#define PKPASSPERSONALIZATIONVIEWCONTROLLER_H

@class UITableViewController, UIBarButtonItem, UIButton, PKPass, NSString, PKContact, NSArray, OBPrivacyLinkController;
@protocol PKPassPersonalizationCellDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPassPersonalizationViewControllerDelegate;


#import "PKPassPersonalizationHeaderView.h"

@interface PKPassPersonalizationViewController : UITableViewController <PKPassPersonalizationCellDelegate, PKPassPersonalizationTermsViewControllerDelegate, PKPaymentSetupViewControllerDelegate>

 {
    PKPassPersonalizationHeaderView *_headerView;
    UIBarButtonItem *_personalizeNowButton;
    UIButton *_personalizeLaterButton;
    PKPass *_pass;
    NSString *_personalizationToken;
    PKContact *_contact;
    NSArray *_cellContexts;
    NSUInteger _personalizationSource;
    BOOL _hasScrolledToCells;
    BOOL _termsAndConditionsAccepted;
    OBPrivacyLinkController *_privacyController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassPersonalizationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_contactReadyForPersonalization;
-(BOOL)personalizationCellShouldBeginEditing:(id)arg0 ;
-(BOOL)personalizationCellShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_nextCellForIndexPath:(id)arg0 ;
-(id)initWithPass:(id)arg0 personalizationToken:(id)arg1 personalizationSource:(NSUInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_configureHeaderViewForState:(NSUInteger)arg0 ;
-(void)_personalizeLaterButtonPressed:(id)arg0 ;
-(void)_personalizeNowButtonPressed:(id)arg0 ;
-(void)_personalizePass;
-(void)_positionFooterView;
-(void)_presentPersonalizationErrorAlert;
-(void)_scrollToCellsIfNeeded;
-(void)passPersonalizationTermsViewControllerDidAcceptTerms:(id)arg0 ;
-(void)passPersonalizationTermsViewControllerDidDeclineTerms:(id)arg0 ;
-(void)personalizationCellDidChangeValue:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif