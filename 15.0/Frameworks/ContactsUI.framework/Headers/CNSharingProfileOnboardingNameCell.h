// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNSHARINGPROFILEONBOARDINGNAMECELL_H
#define CNSHARINGPROFILEONBOARDINGNAMECELL_H

@class UITableViewCell, UIImage, UIImageView, UIView, NSString, UITextField;



@interface CNSharingProfileOnboardingNameCell : UITableViewCell

@property (retain, nonatomic) UIImage *avatarImage; // ivar: _avatarImage
@property (retain, nonatomic) UIImageView *avatarImageView; // ivar: _avatarImageView
@property (retain, nonatomic) UIView *fakeSeparator; // ivar: _fakeSeparator
@property (copy, nonatomic) NSString *familyName;
@property (retain, nonatomic) UITextField *familyNameField; // ivar: _familyNameField
@property (copy, nonatomic) NSString *givenName;
@property (retain, nonatomic) UITextField *givenNameField; // ivar: _givenNameField
@property (nonatomic) NSInteger nameOrder; // ivar: _nameOrder


+(CGFloat)desiredMinimumCellHeight;
+(id)cellIdentifier;
-(CGFloat)separatorHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)textFieldForIndex:(NSInteger)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif