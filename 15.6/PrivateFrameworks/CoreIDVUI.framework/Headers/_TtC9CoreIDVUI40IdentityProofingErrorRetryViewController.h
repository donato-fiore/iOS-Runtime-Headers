// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI40IDENTITYPROOFINGERRORRETRYVIEWCONTROLLER_H
#define _TTC9COREIDVUI40IDENTITYPROOFINGERRORRETRYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI40IdentityProofingErrorRetryViewController : UIViewController {
    ? viewConfig;
    ? proofingFlowManager;
    ? primaryButtonTargetAction;
    ? secondaryButtonTargetAction;
    ? bodyButtonTargetAction;
    ? $__lazy_storage_$_scrollView;
    ? $__lazy_storage_$_primaryStackView;
    ? $__lazy_storage_$_bottomTray;
    ? $__lazy_storage_$_titleLabel;
    ? $__lazy_storage_$_primaryLabel;
    ? $__lazy_storage_$_primaryButton;
    ? $__lazy_storage_$_secondaryButton;
    ? $__lazy_storage_$_bodyButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)bodyButtonClicked;
-(void)primaryButtonClicked;
-(void)secondaryButtonClicked;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif