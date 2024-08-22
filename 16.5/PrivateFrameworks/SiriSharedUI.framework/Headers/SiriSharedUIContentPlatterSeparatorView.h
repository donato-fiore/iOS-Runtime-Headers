// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRISHAREDUICONTENTPLATTERSEPARATORVIEW_H
#define SIRISHAREDUICONTENTPLATTERSEPARATORVIEW_H

@class UIView;



@interface SiriSharedUIContentPlatterSeparatorView : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *backgroundViewSmall; // ivar: _backgroundViewSmall
@property (nonatomic) NSInteger separatorType; // ivar: _separatorType


-(CGFloat)_scale;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_setupBackgroundView;
-(void)_setupBackgroundViewSmall;
-(void)layoutSubviews;


@end


#endif