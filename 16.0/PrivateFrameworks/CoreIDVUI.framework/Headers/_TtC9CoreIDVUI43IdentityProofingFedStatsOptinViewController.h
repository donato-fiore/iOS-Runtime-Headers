// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC9COREIDVUI43IDENTITYPROOFINGFEDSTATSOPTINVIEWCONTROLLER_H
#define _TTC9COREIDVUI43IDENTITYPROOFINGFEDSTATSOPTINVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI43IdentityProofingFedStatsOptinViewController : UIViewController {
    ? proofingFlowManager;
    ? confimationResult;
    ? uiConfigFactory;
    ? viewModels;
    ? primaryStackView;
    ? titleLabel;
    ? subtitleLabel;
    ? confirmButton;
    ? tableView;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)confirmButtonClicked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif