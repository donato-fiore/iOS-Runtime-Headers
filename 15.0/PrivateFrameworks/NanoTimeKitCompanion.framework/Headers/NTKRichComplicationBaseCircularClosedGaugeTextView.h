// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGETEXTVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULARCLOSEDGAUGETEXTVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKColoringLabel.h"
#import "NTKRichComplicationRingProgressView.h"

@interface NTKRichComplicationBaseCircularClosedGaugeTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKColoringLabel *centerLabel; // ivar: _centerLabel
@property (retain, nonatomic) NTKRichComplicationRingProgressView *progressView; // ivar: _progressView


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif