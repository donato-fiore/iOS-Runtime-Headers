// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDETONATEDATTACHMENTVIEW_H
#define CKDETONATEDATTACHMENTVIEW_H

@class UIView, UIImageView, UILabel;



@interface CKDetonatedAttachmentView : UIView

@property (readonly, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)attachmentIcon;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif