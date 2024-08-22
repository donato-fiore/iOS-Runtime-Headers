// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKRICHCOMPLICATIONCIRCULAROPENGAUGECONTENTVIEW_H
#define NTKRICHCOMPLICATIONCIRCULAROPENGAUGECONTENTVIEW_H

@class UIView;


#import "NTKRichComplicationCircularBaseView.h"
#import "NTKRichComplicationCurvedProgressView.h"
#import "NTKColoringLabel.h"

@interface NTKRichComplicationCircularOpenGaugeContentView : NTKRichComplicationCircularBaseView {
    NTKRichComplicationCurvedProgressView *_progressView;
    NTKColoringLabel *_centerLabel;
    UIView *_bottomView;
}


@property (readonly, nonatomic) NTKColoringLabel *centerLabel;
@property (readonly, nonatomic) NTKRichComplicationCurvedProgressView *progressView;


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(NSInteger)progressFillStyle;
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