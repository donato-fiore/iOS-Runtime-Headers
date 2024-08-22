// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI38IDENTITYPROOFINGPROGRESSVIEWCONTROLLER_H
#define _TTC9COREIDVUI38IDENTITYPROOFINGPROGRESSVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI38IdentityProofingProgressViewController : UIViewController {
    ? proofingFlowManager;
    ? progressType;
    ? config;
    ? imageResolutionHelper;
    ? $__lazy_storage_$_scrollView;
    ? activityIndicator;
    ? secondaryStackView;
    ? primaryStackView;
    ? titleLabel;
    ? primaryLabel;
    ? imageView;
    ? imageViewContainer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateViews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif