// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVISUALIDENTITYAVATARSTYLESECTIONHEADERVIEW_H
#define CNVISUALIDENTITYAVATARSTYLESECTIONHEADERVIEW_H

@class UICollectionReusableView, UILabel;



@interface CNVisualIdentityAvatarStyleSectionHeaderView : UICollectionReusableView

@property (readonly, nonatomic) UILabel *label; // ivar: _label


+(id)font;
+(id)reuseID;
+(struct CGSize )sizeWithText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif