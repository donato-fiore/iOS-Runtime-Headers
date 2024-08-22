// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNGROUPIDENTITYHEADERVIEWCONTROLLER_H
#define CNGROUPIDENTITYHEADERVIEWCONTROLLER_H

@class UIViewController, UIButton, NSString, NSLayoutConstraint, UIImage, CNContactFormatter, UILabel, NSArray, UIStackView, UIFont;
@protocol CNGroupIdentityHeaderContainerViewwDelegate, CNGroupIdentityInlineActionsViewControllerDelegate, CNGroupIdentityHeaderViewControllerDelegate;


#import "CNGroupIdentityInlineActionsViewConfiguration.h"
#import "CNGroupIdentityInlineActionsViewController.h"
#import "CNBadgingAvatarBadgeStyleSettings.h"
#import "CNGroupIdentity.h"
#import "CNGroupAvatarViewController.h"
#import "CNAvatarAccessoryView.h"

@interface CNGroupIdentityHeaderViewController : UIViewController <CNGroupIdentityHeaderContainerViewwDelegate, CNGroupIdentityInlineActionsViewControllerDelegate>



@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (retain, nonatomic) NSString *actionButtonTitle; // ivar: _actionButtonTitle
@property (retain, nonatomic) NSLayoutConstraint *actionButtonZeroHeightConstraint; // ivar: _actionButtonZeroHeightConstraint
@property (readonly, nonatomic) CNGroupIdentityInlineActionsViewConfiguration *actionsViewConfiguration; // ivar: _actionsViewConfiguration
@property (retain, nonatomic) CNGroupIdentityInlineActionsViewController *actionsViewController; // ivar: _actionsViewController
@property (nonatomic) CGFloat actionsViewTopMargin; // ivar: _actionsViewTopMargin
@property (retain, nonatomic) UIImage *avatarBadgeImage; // ivar: _avatarBadgeImage
@property (retain, nonatomic) CNBadgingAvatarBadgeStyleSettings *avatarBadgeStyleSettings; // ivar: _avatarBadgeStyleSettings
@property (retain, nonatomic) CNContactFormatter *contactFormatter; // ivar: _contactFormatter
@property (retain, nonatomic) UILabel *customSubtitleLabel; // ivar: _customSubtitleLabel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNGroupIdentityHeaderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNGroupIdentity *group; // ivar: _group
@property (retain, nonatomic) CNGroupAvatarViewController *groupAvatarViewController; // ivar: _groupAvatarViewController
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *horizontalTitleLabelConstraints; // ivar: _horizontalTitleLabelConstraints
@property (nonatomic) BOOL isMarkedForSyndication; // ivar: _isMarkedForSyndication
@property (retain, nonatomic) CNAvatarAccessoryView *mediaContextBadge; // ivar: _mediaContextBadge
@property (nonatomic) CGSize previousSize; // ivar: _previousSize
@property (nonatomic) BOOL shouldShowContactBusy; // ivar: _shouldShowContactBusy
@property (readonly) Class superclass;
@property (retain, nonatomic) UIStackView *titleBadgeStackView; // ivar: _titleBadgeStackView
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIFont *titleLabelFont; // ivar: _titleLabelFont
@property (retain, nonatomic) UIStackView *titleLabelStackView; // ivar: _titleLabelStackView
@property (retain, nonatomic) UIFont *titleLabelWrappedFont; // ivar: _titleLabelWrappedFont


+(id)descriptorForRequiredKeys;
-(BOOL)_canShowWhileLocked;
-(BOOL)preferredContentSizeCategoryIsXL;
-(BOOL)shouldShowActionButton;
-(BOOL)shouldShowActionsView;
-(BOOL)shouldUseTitleLabelWrappedFontGivenBoundingRect:(struct CGRect )arg0 ;
-(id)displayNameForGroupIdentity;
-(id)initWithGroupIdentity:(id)arg0 ;
-(id)initWithGroupIdentity:(id)arg0 actionsViewConfiguration:(id)arg1 ;
-(id)initWithGroupIdentity:(id)arg0 actionsViewConfiguration:(id)arg1 avatarViewControllerSettings:(id)arg2 ;
-(id)viewForActionAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )titleLabelBoundingRectForFont:(id)arg0 text:(id)arg1 maxWidth:(CGFloat)arg2 context:(id)arg3 ;
-(struct CGSize )estimatedSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeForLayoutInContainerSize:(struct CGSize )arg0 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)didTapActionButton;
-(void)groupIdentityDidUpdate:(id)arg0 ;
-(void)groupIdentityInlineActionsViewController:(id)arg0 didPerformActionOfType:(id)arg1 fromDisambiguation:(BOOL)arg2 ;
-(void)groupIdentityInlineActionsViewController:(id)arg0 willPresentDisambiguationUIForActionType:(id)arg1 ;
-(void)hideTitleLabel:(BOOL)arg0 ;
-(void)loadView;
-(void)setShouldHideTitleLabel:(BOOL)arg0 ;
-(void)setupActionButton;
-(void)setupActionsView;
-(void)setupAvatarView;
-(void)setupEmptyActionsView;
-(void)setupPopulatedActionsView;
-(void)setupTitleLabel;
-(void)updateActionButton;
-(void)updateActionButtonFont;
-(void)updateTitleLabel;
-(void)updateTitleLabelFont;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif