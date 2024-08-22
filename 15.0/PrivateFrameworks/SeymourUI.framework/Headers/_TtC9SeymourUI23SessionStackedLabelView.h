// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI23SESSIONSTACKEDLABELVIEW_H
#define _TTC9SEYMOURUI23SESSIONSTACKEDLABELVIEW_H

@class UIView, UILabel;



@interface _TtC9SeymourUI23SessionStackedLabelView : UIView {
    ? stackView;
}


@property (nonatomic, readonly) UILabel *primaryLabel; // ivar: primaryLabel
@property (nonatomic, readonly) UILabel *secondaryLabel; // ivar: secondaryLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif