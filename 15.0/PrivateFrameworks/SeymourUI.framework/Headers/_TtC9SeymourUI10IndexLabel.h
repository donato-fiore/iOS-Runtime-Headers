// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC9SEYMOURUI10INDEXLABEL_H
#define _TTC9SEYMOURUI10INDEXLABEL_H

@class UIView, NSLayoutYAxisAnchor;



@interface _TtC9SeymourUI10IndexLabel : UIView {
    ? layout;
    ? label;
    ? background;
    ? textStyle;
    ? labelCenterYConstraint;
    ? index;
}


@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)textSizeUpdated:(id)arg0 ;


@end


#endif