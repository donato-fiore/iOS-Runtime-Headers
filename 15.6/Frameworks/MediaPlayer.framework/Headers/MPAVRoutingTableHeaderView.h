// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVROUTINGTABLEHEADERVIEW_H
#define MPAVROUTINGTABLEHEADERVIEW_H

@class UIView, UILabel, CAShapeLayer;



@interface MPAVRoutingTableHeaderView : UIView {
    UIEdgeInsets _edgeInsets;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    CAShapeLayer *_borderLayer;
}




-(id)_mirroringCompactDescription;
-(id)_mirroringCompactDescriptionTextAttributes;
-(id)_mirroringTitleTextAttributes;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_init;
-(void)layoutSubviews;


@end


#endif