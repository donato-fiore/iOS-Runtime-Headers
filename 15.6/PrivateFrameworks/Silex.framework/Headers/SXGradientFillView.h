// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXGRADIENTFILLVIEW_H
#define SXGRADIENTFILLVIEW_H



#import "SXFillView.h"
#import "SXClippingView.h"
#import "SXLinearGradientFill.h"
#import "SXGradientView.h"

@interface SXGradientFillView : SXFillView

@property (readonly, nonatomic) SXClippingView *clippingView; // ivar: _clippingView
@property (readonly, nonatomic) SXLinearGradientFill *gradientFill; // ivar: _gradientFill
@property (readonly, nonatomic) SXGradientView *gradientView; // ivar: _gradientView


-(id)initWithGradientFill:(id)arg0 gradientFactory:(id)arg1 ;
-(struct CGRect )contentFrame;
-(struct CGRect )fillFrameWithBoundingSize:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setContentFrame:(struct CGRect )arg0 ;


@end


#endif