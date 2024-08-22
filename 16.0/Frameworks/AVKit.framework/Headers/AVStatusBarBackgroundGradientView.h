// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSTATUSBARBACKGROUNDGRADIENTVIEW_H
#define AVSTATUSBARBACKGROUNDGRADIENTVIEW_H

@class UIView, CABackdropLayer;


#import "AVStatusBarBackgroundGradientViewSubview.h"

@interface AVStatusBarBackgroundGradientView : UIView

@property (retain, nonatomic) AVStatusBarBackgroundGradientViewSubview *gradientView; // ivar: _gradientView
@property (readonly, nonatomic) CABackdropLayer *layer;


-(CGFloat)alpha;
-(void)layoutSubviews;
-(void)setAlpha:(CGFloat)arg0 ;


@end


#endif