// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGETEXTVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGETEXTVIEW_H

@class CLKUIColoringLabel;


#import "NTKRichComplicationCircularBaseView.h"
#import "NTKRichComplicationRingProgressView.h"

@interface NTKRichComplicationBaseCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CLKUIColoringLabel *centerLabel; // ivar: _centerLabel
@property (retain, nonatomic) NTKRichComplicationRingProgressView *progressView; // ivar: _progressView


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)_innerFilterStyle;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration )arg0 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif