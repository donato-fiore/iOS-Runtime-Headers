// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGESIMPLETEXTVIEW_H
#define NTKRICHCOMPLICATIONBASECIRCULAROPENGAUGESIMPLETEXTVIEW_H



#import "NTKRichComplicationCircularBaseView.h"
#import "NTKColoringLabel.h"
#import "NTKRichComplicationCurvedProgressView.h"

@interface NTKRichComplicationBaseCircularOpenGaugeSimpleTextView : NTKRichComplicationCircularBaseView

@property (retain, nonatomic) NTKColoringLabel *centerLabel; // ivar: _centerLabel
@property (retain, nonatomic) NTKRichComplicationCurvedProgressView *progressView; // ivar: _progressView
@property (retain, nonatomic) NTKColoringLabel *smallLabel; // ivar: _smallLabel


+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)initWithFamily:(NSInteger)arg0 ;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif