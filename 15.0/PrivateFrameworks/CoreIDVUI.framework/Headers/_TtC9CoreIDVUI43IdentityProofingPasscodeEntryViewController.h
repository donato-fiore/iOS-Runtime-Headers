// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9COREIDVUI43IDENTITYPROOFINGPASSCODEENTRYVIEWCONTROLLER_H
#define _TTC9COREIDVUI43IDENTITYPROOFINGPASSCODEENTRYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC9CoreIDVUI43IdentityProofingPasscodeEntryViewController : UIViewController {
    ? proofingFlowManager;
    ? orangeTint;
    ? grayTint;
    ? whiteTint;
    ? lighterGrayTint;
    ? titleText;
    ? subtitleText;
    ? displayName;
    ? placeHolder;
    ? minLength;
    ? maxLength;
    ? identityProofingCardArtResolutionHelper;
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
    ? addButton;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)addButtonClicked;
-(void)cancelButtonClicked;
-(void)dealloc;
-(void)dismissKeyboard;
-(void)keyboardDidHideWithNotification:(id)arg0 ;
-(void)keyboardDidShowWithNotification:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif