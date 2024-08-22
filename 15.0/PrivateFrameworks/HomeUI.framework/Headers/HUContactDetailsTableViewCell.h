// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONTACTDETAILSTABLEVIEWCELL_H
#define HUCONTACTDETAILSTABLEVIEWCELL_H

@class UITableViewCell, CNAvatarView, NSArray, CNContact, UIView, UILabel, NSString, UIImage, UIImageView;



@interface HUContactDetailsTableViewCell : UITableViewCell

@property (readonly, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) CNContact *contact;
@property (readonly, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIImage *photo;
@property (readonly, nonatomic) UIImageView *photoView; // ivar: _photoView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) NSString *titleText;


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateConstraints;


@end


#endif