// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUVISUALEFFECTCONTAINERVIEW_H
#define HUVISUALEFFECTCONTAINERVIEW_H

@class UIVisualEffectView, UIView;



@interface HUVisualEffectContainerView : UIVisualEffectView

@property (retain, nonatomic) UIView *innerContentView; // ivar: _innerContentView


-(id)initWithInnerContentView:(id)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;


@end


#endif