// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC12GAMECENTERUI14EMPTYSTATEVIEW_H
#define _TTC12GAMECENTERUI14EMPTYSTATEVIEW_H

@class UIScrollView;



@interface _TtC12GameCenterUI14EmptyStateView : UIScrollView {
    ? imageView;
    ? wordmarkView;
    ? primaryLabel;
    ? secondaryLabel;
    ? button;
    ? $__lazy_storage_$_focusGuide;
    ? disabled;
    ? imageType;
    ? buttonActionBlock;
}


@property (nonatomic, copy) id *buttonActionBlock;


+(id)addAdditionalFriendsEmptyStateView;
+(id)addFriendsEmptyStateView;
+(id)addFriendsEmptyStateViewTVOS;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct JUMeasurements )measurementsWithFitting:(struct CGSize )arg0 in:(id)arg1 ;
-(void)didTapButton:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif