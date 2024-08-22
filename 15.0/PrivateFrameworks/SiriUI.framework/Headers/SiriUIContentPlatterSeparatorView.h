// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUICONTENTPLATTERSEPARATORVIEW_H
#define SIRIUICONTENTPLATTERSEPARATORVIEW_H

@class UIView, UIVisualEffectView;



@interface SiriUIContentPlatterSeparatorView : UIView

@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *backgroundViewSmall; // ivar: _backgroundViewSmall
@property (nonatomic) NSInteger separatorType; // ivar: _separatorType


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif