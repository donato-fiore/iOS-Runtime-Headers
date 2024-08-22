// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKNICKNAMEUPDATESCOLLECTIONVIEWCELL_H
#define CKNICKNAMEUPDATESCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;
@protocol CKNicknameUpdateInterface, CKNicknameUpdatesCollectionViewCellDelegate;


#import "CKAvatarView.h"
#import "CKNicknameUpdate.h"

@interface CKNicknameUpdatesCollectionViewCell : UICollectionViewCell <CKNicknameUpdateInterface>



@property (retain, nonatomic) CKAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) UIView *bottomSeparator; // ivar: _bottomSeparator
@property (retain, nonatomic) NSLayoutConstraint *bottomSeparatorLeadingConstraint; // ivar: _bottomSeparatorLeadingConstraint
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKNicknameUpdatesCollectionViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIButton *ignoreButton; // ivar: _ignoreButton
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL needsContextualMenu; // ivar: _needsContextualMenu
@property (retain, nonatomic) CKNicknameUpdate *nicknameUpdate; // ivar: _nicknameUpdate
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIView *topSeparator; // ivar: _topSeparator
@property (retain, nonatomic) UIButton *updateButton; // ivar: _updateButton


+(BOOL)recalculateUsesStackedButtonLayout;
+(BOOL)usesStackedButtonLayout;
+(id)reuseIdentifier;
+(void)setRecalculateUsesStackedButtonLayout:(BOOL)arg0 ;
+(void)setUsesStackedButtonLayout:(BOOL)arg0 ;
-(BOOL)__im_ff_uiConsistencyEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_ignoreButtonTapped:(id)arg0 ;
-(void)_updateButtonTapped:(id)arg0 ;
-(void)configureWithNicknameUpdate:(id)arg0 order:(NSUInteger)arg1 ;
-(void)updateInterfaceSelectedAction:(NSUInteger)arg0 ;
-(void)updateSeparatorsForOrder:(NSUInteger)arg0 ;


@end


#endif