// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGESWIFTUIVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGESWIFTUIVIEW_H

@class CDComplicationHostingView;


#import "NTKRichComplicationCircularOpenGaugeContentView.h"

@interface NTKRichComplicationBaseCircularOpenGaugeSwiftUIView : NTKRichComplicationCircularOpenGaugeContentView {
    CDComplicationHostingView *_bottomSwiftUIView;
}




-(id)bottomView;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)gaugeProvider:(*id)arg0 andCenterTextProvider:(*id)arg1 fromTemplate:(id)arg2 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif