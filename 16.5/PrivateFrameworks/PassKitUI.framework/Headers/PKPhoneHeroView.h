// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPHONEHEROVIEW_H
#define PKPHONEHEROVIEW_H

@class UIView;



@interface PKPhoneHeroView : UIView

@property (readonly, nonatomic) CGFloat deviceCornerRadius;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateCornerRadius;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif