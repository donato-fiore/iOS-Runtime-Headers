// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVSTACKBACKDROPMASKINGVIEW_H
#define _TVSTACKBACKDROPMASKINGVIEW_H

@class UIView, CAGradientLayer;


#import "_TVStackBackdropView.h"

@interface _TVStackBackdropMaskingView : UIView {
    CAGradientLayer *_gradientLayer;
}


@property (retain, nonatomic) _TVStackBackdropView *backdropView; // ivar: _backdropView
@property (nonatomic) CGFloat gradientScale; // ivar: _gradientScale
@property (nonatomic) CGFloat gradientStop; // ivar: _gradientStop


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif