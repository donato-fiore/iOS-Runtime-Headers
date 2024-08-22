// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKRPONBOARDINGSETTINGSVIEWCONTROLLER_H
#define HKRPONBOARDINGSETTINGSVIEWCONTROLLER_H

@class UIViewController, UIVisualEffectView, UIView, NSString, UILabel, HKRPOxygenSaturationOnboardingManager, UIScrollView, HKRPOxygenSaturationSettings, OBLinkTrayButton, OBBoldTrayButton;
@protocol UIScrollViewDelegate, BPSMiniFlowStepController, BPSSetupMiniFlowControllerDelegate, HKRPOnboardingDelegate;


#import "RespiratoryHealthHeroView.h"

@interface HKRPOnboardingSettingsViewController : UIViewController <UIScrollViewDelegate, BPSMiniFlowStepController>



@property (retain, nonatomic) UIVisualEffectView *blurView; // ivar: _blurView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) BOOL didLayoutSubviews; // ivar: _didLayoutSubviews
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets initialInsets; // ivar: _initialInsets
@property (nonatomic) BOOL isInitialInsetsSet; // ivar: _isInitialInsetsSet
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (retain, nonatomic) UILabel *locationLabel; // ivar: _locationLabel
@property (weak, nonatomic) NSObject<BPSSetupMiniFlowControllerDelegate> *miniFlowDelegate; // ivar: miniFlowDelegate
@property (weak, nonatomic) NSObject<HKRPOnboardingDelegate> *onboardingDelegate; // ivar: _onboardingDelegate
@property (retain, nonatomic) HKRPOxygenSaturationOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) HKRPOxygenSaturationSettings *settings; // ivar: _settings
@property (retain, nonatomic) OBLinkTrayButton *setupLaterButton; // ivar: _setupLaterButton
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) OBBoldTrayButton *suggestedChoiceButton; // ivar: _suggestedChoiceButton
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) RespiratoryHealthHeroView *watchView; // ivar: _watchView


-(CGFloat)_calculateHeroHorizontalMarginForViewFrame:(struct CGRect )arg0 ;
-(id)_headerTitleFont;
-(id)_localizedStringForKey:(id)arg0 ;
-(id)backgroundColor;
-(id)initWithStyle:(NSInteger)arg0 settings:(id)arg1 onboardingManager:(id)arg2 onboardingDelegate:(id)arg3 ;
-(id)labelColor;
-(id)pillBackgroundColor;
-(id)pillBackgroundSelectedColor;
-(id)pillTitleColor;
-(id)pillTitleSelectedColor;
-(void)_askUserToInstallWatchAppWithCompletion:(id)arg0 ;
-(void)_installWatchAppIfNeededWithCompletion:(id)arg0 ;
-(void)_onboardWithCompletion:(id)arg0 ;
-(void)_presentOnboardingError:(id)arg0 completion:(id)arg1 ;
-(void)createUI;
-(void)layoutUI;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setInsetsIfNeeded;
-(void)setupLaterButtonPressed:(id)arg0 ;
-(void)suggestedChoiceButtonPressed:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewSafeAreaInsetsDidChange;


@end


#endif