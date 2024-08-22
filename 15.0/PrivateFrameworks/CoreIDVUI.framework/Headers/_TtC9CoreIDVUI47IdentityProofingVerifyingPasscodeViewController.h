// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI47IDENTITYPROOFINGVERIFYINGPASSCODEVIEWCONTROLLER_H
#define _TTC9COREIDVUI47IDENTITYPROOFINGVERIFYINGPASSCODEVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI47IdentityProofingVerifyingPasscodeViewController : UIViewController {
    ? proofingFlowManager;
    ? orangeTint;
    ? grayTint;
    ? whiteTint;
    ? lighterGrayTint;
    ? thresholdTimer;
    ? identityProofingCardArtResolutionHelper;
    ? titleText;
    ? subtitleText;
    ? displayName;
    ? scrollView;
    ? activityIndicator;
    ? secondaryStackView;
    ? primaryStackView;
    ? titleLabel;
    ? primaryLabel;
    ? imageView;
    ? imageViewContainer;
    ? textField;
    ? $__lazy_storage_$_textFieldView;
    ? config;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif