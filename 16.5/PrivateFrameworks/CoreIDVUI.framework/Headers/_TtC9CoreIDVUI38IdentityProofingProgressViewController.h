// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9COREIDVUI38IDENTITYPROOFINGPROGRESSVIEWCONTROLLER_H
#define _TTC9COREIDVUI38IDENTITYPROOFINGPROGRESSVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI38IdentityProofingProgressViewController : UIViewController {
    ? proofingFlowManager;
    ? progressType;
    ? config;
    ? imageResolutionHelper;
    ? assetProvider;
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