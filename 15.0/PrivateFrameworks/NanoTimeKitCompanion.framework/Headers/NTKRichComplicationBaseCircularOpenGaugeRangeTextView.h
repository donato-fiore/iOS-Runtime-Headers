// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGERANGETEXTVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGERANGETEXTVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKColoringLabel.h"
#import "NTKRichComplicationCurvedProgressView.h"

@interface NTKRichComplicationBaseCircularOpenGaugeRangeTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKColoringLabel *centerLabel; // ivar: _centerLabel
@property (retain, nonatomic) NTKColoringLabel *leadingSmallLabel; // ivar: _leadingSmallLabel
@property (retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) NTKColoringLabel *trailingSmallLabel; // ivar: _trailingSmallLabel


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
+(NSInteger)progressFillStyle;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif