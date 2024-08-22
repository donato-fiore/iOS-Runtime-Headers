// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUCONTACTVIEW_H
#define HUCONTACTVIEW_H

@class UIView, NSArray, UILabel, CNAvatarView, NSMutableArray, CNContact, NSString, NSAttributedString;



@interface HUContactView : UIView

@property (retain, nonatomic) NSArray *accounts; // ivar: _accounts
@property (retain, nonatomic) UILabel *appleIDAccountLabel; // ivar: _appleIDAccountLabel
@property (retain, nonatomic) UILabel *appleMusicAccountLabel; // ivar: _appleMusicAccountLabel
@property (nonatomic) CGFloat avatarDiameter; // ivar: _avatarDiameter
@property (retain, nonatomic) CNAvatarView *avatarView; // ivar: _avatarView
@property (retain, nonatomic) NSMutableArray *constraints; // ivar: _constraints
@property (retain, nonatomic) CNContact *contact; // ivar: _contact
@property (retain, nonatomic) NSString *contactNameFontTextStyle; // ivar: _contactNameFontTextStyle
@property (nonatomic) NSInteger contactNameFormatStyle; // ivar: _contactNameFormatStyle
@property (retain, nonatomic) NSAttributedString *message;
@property (retain, nonatomic) UILabel *messageLabel; // ivar: _messageLabel
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (nonatomic) NSUInteger numberOfLinesForMessage; // ivar: _numberOfLinesForMessage


-(BOOL)_isPhoneNumberOnlyAccount;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupViews;
-(void)_updateConstraints;
-(void)_updateNameLabelFont;


@end


#endif