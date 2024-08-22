// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKRICHCOMPLICATIONCORNERGAUGESWIFTUIVIEW_H
#define NTKRICHCOMPLICATIONCORNERGAUGESWIFTUIVIEW_H

@class CDRichComplicationCornerGaugeCustomView, CDComplicationHostingView;



@interface NTKRichComplicationCornerGaugeSwiftUIView : CDRichComplicationCornerGaugeCustomView {
    CDComplicationHostingView *_swiftUIView;
}




+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)_outerView;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif