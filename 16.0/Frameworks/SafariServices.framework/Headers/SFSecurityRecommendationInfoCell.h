// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSECURITYRECOMMENDATIONINFOCELL_H
#define SFSECURITYRECOMMENDATIONINFOCELL_H

@class UITableViewCell, UIImageView, UILabel, UIView, NSArray, NSLayoutConstraint, UIButton, NSString, UIImage, WBSSavedAccount;
@protocol SFAccountTableViewCell, SFSecurityRecommendationInfoCellDelegate;



@interface SFSecurityRecommendationInfoCell : UITableViewCell <SFAccountTableViewCell>

 {
    UIImageView *_iconView;
    UIImageView *_completedUpgradeCheckmarkView;
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
    NSUInteger _configuration;
    NSArray *_completedUpgradeCheckmarkViewConstraints;
    NSLayoutConstraint *_standardTitleTrailingConstraint;
    UIButton *_hideButton;
    NSArray *_hideButtonConstraints;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFSecurityRecommendationInfoCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *icon;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount; // ivar: _savedAccount
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(id)initWithConfiguration:(NSUInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_createHideButton;
-(void)_hideButtonPressed:(id)arg0 ;
-(void)setShowsHideButton:(BOOL)arg0 ;
-(void)setShowsUpgradeCompletionCheckmark:(BOOL)arg0 ;
-(void)showCheckmarkForDetailView;
-(void)showPlaceholderImageForDomain:(id)arg0 backgroundColor:(id)arg1 ;


@end


#endif