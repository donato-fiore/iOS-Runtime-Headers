// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUBADGEANDDISCLOSUREACCESSORYVIEW_H
#define HUBADGEANDDISCLOSUREACCESSORYVIEW_H

@class UIView, UIImageView, UILabel;



@interface HUBadgeAndDisclosureAccessoryView : UIView

@property (retain, nonatomic) UIView *badgeContainerView; // ivar: _badgeContainerView
@property (nonatomic) NSInteger badgeCount; // ivar: _badgeCount
@property (retain, nonatomic) UIImageView *badgeImageView; // ivar: _badgeImageView
@property (retain, nonatomic) UILabel *badgeLabel; // ivar: _badgeLabel
@property (retain, nonatomic) UIImageView *disclosureImageView; // ivar: _disclosureImageView


+(id)_disclosureImage;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif