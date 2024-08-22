// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI26NAVIGATIONDOUBLEHEADERVIEW_H
#define _TTC12GAMECENTERUI26NAVIGATIONDOUBLEHEADERVIEW_H

@class UIView, NSString;



@interface _TtC12GameCenterUI26NavigationDoubleHeaderView : UIView {
    ? titleLabel;
    ? subtitleLabel;
    ? $__lazy_storage_$_layout;
}


@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *titleText;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif