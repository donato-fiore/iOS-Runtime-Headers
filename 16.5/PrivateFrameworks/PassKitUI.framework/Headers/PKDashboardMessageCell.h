// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDASHBOARDMESSAGECELL_H
#define PKDASHBOARDMESSAGECELL_H

@class UITableViewCell, UIImageView, CNAvatarView, UIButton, CNContact, UIImage, UIColor, UILabel, NSString;



@interface PKDashboardMessageCell : UITableViewCell {
    UIImageView *_iconImageView;
    CNAvatarView *_avatarView;
    UIButton *_dismissButton;
    BOOL _isTemplateLayout;
}


@property (copy, nonatomic) id *actionOnDismiss; // ivar: _actionOnDismiss
@property (retain, nonatomic) CNContact *avatarContact; // ivar: _avatarContact
@property (retain, nonatomic) UIImage *dismissImage; // ivar: _dismissImage
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (retain, nonatomic) UIColor *iconImageTintColor; // ivar: _iconImageTintColor
@property (readonly, nonatomic) UILabel *labelMessage; // ivar: _labelMessage
@property (readonly, nonatomic) UILabel *labelSecondaryMessage; // ivar: _labelSecondaryMessage
@property (readonly, nonatomic) UILabel *labelSecondaryTitle; // ivar: _labelSecondaryTitle
@property (readonly, nonatomic) UILabel *labelTitle; // ivar: _labelTitle
@property (nonatomic) CGFloat leftContentInset; // ivar: _leftContentInset
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *secondaryMessage; // ivar: _secondaryMessage
@property (copy, nonatomic) NSString *secondaryTitle; // ivar: _secondaryTitle
@property (nonatomic) BOOL smallDevice; // ivar: _smallDevice
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateAvatarView;
-(void)dismissButtonPressed:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif