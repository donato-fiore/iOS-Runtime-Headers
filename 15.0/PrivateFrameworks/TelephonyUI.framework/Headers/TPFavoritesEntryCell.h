// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPFAVORITESENTRYCELL_H
#define TPFAVORITESENTRYCELL_H

@class UICollectionViewCell, NSString, UIView, NSLayoutConstraint, CNAvatarViewController, UILabel, UIVisualEffectView, UIImage, UIImageView;



@interface TPFavoritesEntryCell : UICollectionViewCell

@property (copy, nonatomic) NSString *actionType; // ivar: _actionType
@property (readonly, nonatomic) UIView *avatarContentView; // ivar: _avatarContentView
@property (retain, nonatomic) NSLayoutConstraint *avatarContentViewHeightLayoutConstraint; // ivar: _avatarContentViewHeightLayoutConstraint
@property (readonly, nonatomic) CGFloat avatarContentViewHeightLayoutConstraintConstant;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController; // ivar: _avatarViewController
@property (retain, nonatomic) UILabel *contactNameLabel; // ivar: _contactNameLabel
@property (retain, nonatomic) NSLayoutConstraint *contactNameLabelBaselineLayoutConstraint; // ivar: _contactNameLabelBaselineLayoutConstraint
@property (readonly, nonatomic) CGFloat contactNameLabelBaselineLayoutConstraintConstant;
@property (nonatomic, getter=isContentViewLayoutConstraintsLoaded) BOOL contentViewLayoutConstraintsLoaded; // ivar: _contentViewLayoutConstraintsLoaded
@property (nonatomic, getter=isContentViewLoaded) BOOL contentViewLoaded; // ivar: _contentViewLoaded
@property (retain, nonatomic) UIVisualEffectView *primaryVisualEffectView; // ivar: _primaryVisualEffectView
@property (retain, nonatomic) UIVisualEffectView *secondaryVisualEffectView; // ivar: _secondaryVisualEffectView
@property (retain, nonatomic) UIImage *transportImage; // ivar: _transportImage
@property (retain, nonatomic) UIImageView *transportImageView; // ivar: _transportImageView
@property (retain, nonatomic) UILabel *transportNameLabel; // ivar: _transportNameLabel
@property (retain, nonatomic) NSLayoutConstraint *transportNameLabelBaselineLayoutConstraint; // ivar: _transportNameLabelBaselineLayoutConstraint
@property (readonly, nonatomic) CGFloat transportNameLabelBaselineLayoutConstraintConstant;
@property (retain, nonatomic) NSLayoutConstraint *transportNameLabelLeadingLayoutConstraint; // ivar: _transportNameLabelLeadingLayoutConstraint
@property (readonly, nonatomic) CGFloat transportNameLabelLeadingLayoutConstraintConstant;
@property (retain, nonatomic) UIView *transportView; // ivar: _transportView


+(BOOL)requiresConstraintBasedLayout;
+(id)imageForActionType:(id)arg0 ;
+(id)reuseIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)handleContentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)loadContentView;
-(void)loadContentViewLayoutConstraints;
-(void)updateConstraints;
-(void)updateConstraintsConstants;
-(void)updateFonts;


@end


#endif