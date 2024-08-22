// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI46IDENTITYPROOFINGREVIEWSUBMISSIONVIEWCONTROLLER_H
#define _TTC9COREIDVUI46IDENTITYPROOFINGREVIEWSUBMISSIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI46IdentityProofingReviewSubmissionViewController : UIViewController {
    ? tableViewCellIdentifier;
    ? tableViewRowHeightConstant;
    ? documentsToBeReviewed;
    ? primaryButtonHeight;
    ? secondaryButtonHeight;
    ? bottomTrayWidthSpacing;
    ? bottomTrayBottomSpacing;
    ? scrollViewLeadingSpacing;
    ? scrollViewTrailingSpacing;
    ? primaryStackViewTopSpacingDivisor;
    ? tableViewHeightDivisor;
    ? orangeTint;
    ? grayTint;
    ? darkerGrayTint;
    ? whiteTint;
    ? viewConfiguration;
    ? proofingFlowManager;
    ? documentsRepository;
    ? biometricBindingController;
    ? analyticsReporter;
    ? context;
    ? eligibilityHelper;
    ? unboundACL;
    ? $__lazy_storage_$_tableView;
    ? $__lazy_storage_$_scrollView;
    ? $__lazy_storage_$_primaryStackView;
    ? $__lazy_storage_$_bottomTray;
    ? $__lazy_storage_$_primaryButton;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_subTitleLabel;
    ? $__lazy_storage_$_cancelBarButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelButtonClicked;
-(void)primaryButtonClicked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif