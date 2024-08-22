// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGESWIFTUIVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGESWIFTUIVIEW_H

@class CDComplicationHostingView;


#import "NTKRichComplicationCircularClosedGaugeContentView.h"

@interface NTKRichComplicationBaseCircularClosedGaugeSwiftUIView : NTKRichComplicationCircularClosedGaugeContentView {
    CDComplicationHostingView *_swiftUIView;
}




-(id)gaugeProviderFromTemplate:(id)arg0 ;
-(id)innerView;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif