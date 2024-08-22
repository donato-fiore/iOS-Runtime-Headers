// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIVISUALEFFECTVIEW_H
#define SIRIUIVISUALEFFECTVIEW_H

@class UIVisualEffectView, UIView;



@interface SiriUIVisualEffectView : UIVisualEffectView

@property (retain, nonatomic) UIView *customView; // ivar: _customView


-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif