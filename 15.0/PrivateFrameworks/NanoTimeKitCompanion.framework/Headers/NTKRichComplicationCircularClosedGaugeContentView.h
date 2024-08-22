// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCIRCULARCLOSEDGAUGECONTENTVIEW_H
#define NTKRICHCOMPLICATIONCIRCULARCLOSEDGAUGECONTENTVIEW_H

@class UIView;


#import "NTKRichComplicationCircularBaseView.h"
#import "NTKRichComplicationRingProgressView.h"

@interface NTKRichComplicationCircularClosedGaugeContentView : NTKRichComplicationCircularBaseView {
    UIView *_innerView;
    NTKRichComplicationRingProgressView *_progressView;
}


@property (readonly, nonatomic) NTKRichComplicationRingProgressView *progressView;


-(id)gaugeProviderFromTemplate:(id)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(id)innerView;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif