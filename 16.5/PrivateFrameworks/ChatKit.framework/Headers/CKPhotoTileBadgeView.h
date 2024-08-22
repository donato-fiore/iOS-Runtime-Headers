// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKPHOTOTILEBADGEVIEW_H
#define CKPHOTOTILEBADGEVIEW_H

@class UIView, UIImageView, UILabel, UIButton;



@interface CKPhotoTileBadgeView : UIView

@property (readonly, nonatomic) UIView *_backgroundView; // ivar: __backgroundView
@property (readonly, nonatomic) UIImageView *_badgeImageView; // ivar: __badgeImageView
@property (readonly, nonatomic) UILabel *_textLabel; // ivar: __textLabel
@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected


+(CGFloat)horizontalBadgeInset;
+(CGFloat)verticalBadgeInset;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )maximumSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateBadgeImage;
-(void)_updateBadgeText;
-(void)layoutSubviews;


@end


#endif