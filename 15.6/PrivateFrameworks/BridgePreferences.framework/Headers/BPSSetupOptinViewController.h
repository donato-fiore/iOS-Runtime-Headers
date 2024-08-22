// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSSETUPOPTINVIEWCONTROLLER_H
#define BPSSETUPOPTINVIEWCONTROLLER_H

@class UIButton, NSString, UILabel, UIScrollView;
@protocol BPSBuddyController;


#import "BPSSetupPageViewController.h"
#import "BPSWatchView.h"

@interface BPSSetupOptinViewController : BPSSetupPageViewController <BPSBuddyController>



@property (retain, nonatomic) UIButton *alternateChoiceButton; // ivar: _alternateChoiceButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *detailTextLabel; // ivar: _detailTextLabel
@property (retain, nonatomic) UILabel *detailTextTitleLabel; // ivar: _detailTextTitleLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *learnMoreButton; // ivar: _learnMoreButton
@property (retain, nonatomic) UIButton *okayButton; // ivar: _okayButton
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) NSUInteger style; // ivar: _style
@property (retain, nonatomic) UIButton *suggestedChoiceButton; // ivar: _suggestedChoiceButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) BPSWatchView *watchView; // ivar: _watchView


-(BOOL)wantsAlternateChoicePillButton;
-(BOOL)wantsAlternateChoiceSystemButton;
-(BOOL)wantsLearnMoreButton;
-(BOOL)wantsLightenBlendedScreen;
-(BOOL)wantsOkayPillButton;
-(BOOL)wantsSuggestedChoicePillButton;
-(BOOL)wantsToShowWatchHW;
-(CGFloat)alternateButtonDetailTextPaddingWithImage;
-(CGFloat)imageDetailPadding;
-(CGFloat)noHWDetailOffset;
-(CGFloat)noHWImageOffset;
-(CGFloat)sidePadding;
-(CGFloat)suggestedChoicePillDetailTextLabelVerticalOffset;
-(id)alternateButtonTitle;
-(id)detailAtrributedString;
-(id)detailString;
-(id)detailTitleString;
-(id)imageResource;
-(id)imageResourceBundleIdentifier;
-(id)init;
-(id)optinLocalizationBundle;
-(id)optinLocalizationStringsFile;
-(id)suggestedButtonTitle;
-(void)_madeOptinChoice:(BOOL)arg0 withAlertController:(id)arg1 ;
-(void)alternateButtonPressed:(id)arg0 ;
-(void)applyConfirmedOptin:(BOOL)arg0 ;
-(void)learnMoreButtonPressed:(id)arg0 ;
-(void)okayButtonPressed:(id)arg0 ;
-(void)showOptinConfirmationAlert:(id)arg0 optinChoice:(BOOL)arg1 ;
-(void)suggestedButtonPressed:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif