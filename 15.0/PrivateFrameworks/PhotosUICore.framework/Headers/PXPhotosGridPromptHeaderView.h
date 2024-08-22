// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSGRIDPROMPTHEADERVIEW_H
#define PXPHOTOSGRIDPROMPTHEADERVIEW_H

@class UICollectionReusableView, UILabel, UIView, NSString;



@interface PXPhotosGridPromptHeaderView : UICollectionReusableView {
    UILabel *_titleLabel;
    UIView *_separatorView;
}


@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_newTitleLabel;
+(struct CGSize )_instanceLayoutSubviews:(id)arg0 forTitle:(id)arg1 inBounds:(struct CGRect )arg2 ;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 forTitle:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif