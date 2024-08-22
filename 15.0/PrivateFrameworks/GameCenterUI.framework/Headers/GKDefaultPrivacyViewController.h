// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKDEFAULTPRIVACYVIEWCONTROLLER_H
#define GKDEFAULTPRIVACYVIEWCONTROLLER_H

@class UIViewController, UIView, NSLayoutConstraint, UIButton, UILabel;



@interface GKDefaultPrivacyViewController : UIViewController

@property (retain, nonatomic) UIView *buttonContainer; // ivar: _buttonContainer
@property (retain, nonatomic) NSLayoutConstraint *continueButtonBottomConstraint; // ivar: _continueButtonBottomConstraint
@property (retain, nonatomic) NSLayoutConstraint *continueButtonEqualMainTitleWidthConstraint; // ivar: _continueButtonEqualMainTitleWidthConstraint
@property (retain, nonatomic) NSLayoutConstraint *continueButtonWidthConstraint; // ivar: _continueButtonWidthConstraint
@property (retain, nonatomic) UIButton *friendsOnlyButton; // ivar: _friendsOnlyButton
@property (retain, nonatomic) UILabel *friendsOnlySubtitle; // ivar: _friendsOnlySubtitle
@property (retain, nonatomic) UILabel *friendsOnlyTitle; // ivar: _friendsOnlyTitle
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewLeadingConstraint; // ivar: _mainStackViewLeadingConstraint
@property (retain, nonatomic) NSLayoutConstraint *mainStackViewTrailingConstraint; // ivar: _mainStackViewTrailingConstraint
@property (retain, nonatomic) UILabel *mainTitle; // ivar: _mainTitle
@property (retain, nonatomic) UIButton *meOnlyButton; // ivar: _meOnlyButton
@property (retain, nonatomic) UILabel *meOnlySubtitle; // ivar: _meOnlySubtitle
@property (retain, nonatomic) UILabel *meOnlyTitle; // ivar: _meOnlyTitle
@property (retain, nonatomic) UIButton *nextButton; // ivar: _nextButton
@property NSInteger numberOfClicksOnPrivacySelection; // ivar: _numberOfClicksOnPrivacySelection
@property (nonatomic) int profilePrivacyVisibility; // ivar: _profilePrivacyVisibility
@property (retain, nonatomic) UIButton *publicButton; // ivar: _publicButton
@property (retain, nonatomic) UIView *publicContainer; // ivar: _publicContainer
@property (retain, nonatomic) UIView *publicDivider; // ivar: _publicDivider
@property (retain, nonatomic) UILabel *publicSubTitle; // ivar: _publicSubTitle
@property (retain, nonatomic) UILabel *publicTitle; // ivar: _publicTitle
@property (retain, nonatomic) UILabel *subTitle; // ivar: _subTitle
@property (retain, nonatomic) NSLayoutConstraint *topMargin; // ivar: _topMargin
@property (retain, nonatomic) UILabel *underageHintLabel; // ivar: _underageHintLabel


-(void)button1Pressed:(id)arg0 ;
-(void)button2Pressed:(id)arg0 ;
-(void)button3Pressed:(id)arg0 ;
-(void)nextPressed:(id)arg0 ;
-(void)notNowButtonPressed:(id)arg0 ;
-(void)reportPrivacySelectionClickAnalytics;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)updateUI;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif