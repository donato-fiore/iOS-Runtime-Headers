// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9COREIDVUI43IDENTITYPROOFINGFEDSTATSOPTINVIEWCONTROLLER_H
#define _TTC9COREIDVUI43IDENTITYPROOFINGFEDSTATSOPTINVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI43IdentityProofingFedStatsOptinViewController : UIViewController {
    ? proofingFlowManager;
    ? consentResult;
    ? uiConfigFactory;
    ? viewModels;
    ? uiConfig;
    ? learnMoreURL;
    ? primaryStackView;
    ? titleLabel;
    ? subtitleLabel;
    ? confirmButton;
    ? tableView;
    ? learnMoreButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)confirmButtonClicked;
-(void)learnMoreButtonClicked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif