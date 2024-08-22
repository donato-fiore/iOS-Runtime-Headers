// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGESIMPLETEXTVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGESIMPLETEXTVIEW_H

@class CLKUIColoringLabel, CDRichComplicationCurvedProgressView;


#import "NTKRichComplicationCircularBaseView.h"

@interface NTKRichComplicationBaseCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) CLKUIColoringLabel *centerLabel; // ivar: _centerLabel
@property (retain, nonatomic) CDRichComplicationCurvedProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) CLKUIColoringLabel *smallLabel; // ivar: _smallLabel


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSInteger)_innerFilterStyle;
-(NSInteger)_outerFilterStyle;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration )arg0 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif