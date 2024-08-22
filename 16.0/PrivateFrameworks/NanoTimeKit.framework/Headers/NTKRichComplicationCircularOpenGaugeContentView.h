// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONCIRCULAROPENGAUGECONTENTVIEW_H
#define NTKRICHCOMPLICATIONCIRCULAROPENGAUGECONTENTVIEW_H

@class CDRichComplicationCurvedProgressView, CLKUIColoringLabel, UIView;


#import "NTKRichComplicationCircularBaseView.h"

@interface NTKRichComplicationCircularOpenGaugeContentView : NTKRichComplicationCircularBaseView {
    CDRichComplicationCurvedProgressView *_progressView;
    CLKUIColoringLabel *_centerLabel;
    UIView *_bottomView;
}


@property (readonly, nonatomic) CLKUIColoringLabel *centerLabel;
@property (readonly, nonatomic) CDRichComplicationCurvedProgressView *progressView;


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(NSInteger)progressFillStyle;
-(NSInteger)_innerFilterStyle;
-(NSInteger)_outerFilterStyle;
-(id)bottomView;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)gaugeProvider:(*id)arg0 andCenterTextProvider:(*id)arg1 fromTemplate:(id)arg2 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif