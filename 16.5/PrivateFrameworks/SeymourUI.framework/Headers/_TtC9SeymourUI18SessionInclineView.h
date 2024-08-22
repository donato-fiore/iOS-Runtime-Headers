// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SEYMOURUI18SESSIONINCLINEVIEW_H
#define _TTC9SEYMOURUI18SESSIONINCLINEVIEW_H

@class UIView;



@interface _TtC9SeymourUI18SessionInclineView : UIView {
    ? presenter;
    ? walkingImageView;
    ? runningImageView;
    ? walkingImage;
    ? runningImage;
    ? walkingValueLabel;
    ? runningValueLabel;
}


@property (nonatomic, readonly) CGSize intrinsicContentSize;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif