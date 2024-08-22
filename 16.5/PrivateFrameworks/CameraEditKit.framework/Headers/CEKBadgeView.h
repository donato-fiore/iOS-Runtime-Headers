// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEKBADGEVIEW_H
#define CEKBADGEVIEW_H

@class UIView, UIColor;
@protocol CEKBadgeViewDelegate;



@interface CEKBadgeView : UIView

@property (retain, nonatomic, setter=_setContentColor:) UIColor *_contentColor; // ivar: __contentColor
@property (retain, nonatomic, setter=_setFillColor:) UIColor *_fillColor; // ivar: __fillColor
@property (nonatomic, setter=_setFillCornerRadius:) CGFloat _fillCornerRadius; // ivar: __fillCornerRadius
@property (weak, nonatomic) NSObject<CEKBadgeViewDelegate> *delegate; // ivar: _delegate


-(id)_invertMaskImage:(id)arg0 ;
-(id)_maskImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;


@end


#endif