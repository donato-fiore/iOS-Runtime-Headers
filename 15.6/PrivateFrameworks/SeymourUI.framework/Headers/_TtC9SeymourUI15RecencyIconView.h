// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9SEYMOURUI15RECENCYICONVIEW_H
#define _TTC9SEYMOURUI15RECENCYICONVIEW_H

@class UIView, NSLayoutYAxisAnchor;



@interface _TtC9SeymourUI15RecencyIconView : UIView {
    ? title;
    ? label;
    ? layout;
    ? imageView;
    ? layoutView;
}


@property (nonatomic, readonly) NSLayoutYAxisAnchor *firstBaselineAnchor;
@property (nonatomic, readonly) NSLayoutYAxisAnchor *lastBaselineAnchor;
@property (nonatomic, readonly) UIView *viewForFirstBaselineLayout;
@property (nonatomic, readonly) UIView *viewForLastBaselineLayout;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)layoutSubviews;


@end


#endif