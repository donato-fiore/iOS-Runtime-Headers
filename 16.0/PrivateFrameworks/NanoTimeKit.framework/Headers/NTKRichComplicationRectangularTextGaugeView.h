// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONRECTANGULARTEXTGAUGEVIEW_H
#define NTKRICHCOMPLICATIONRECTANGULARTEXTGAUGEVIEW_H

@class CLKUIColoringLabel;


#import "NTKRichComplicationRectangularLargeHeadlineBaseView.h"
#import "NTKRichComplicationLineProgressView.h"

@interface NTKRichComplicationRectangularTextGaugeView : NTKRichComplicationRectangularLargeHeadlineBaseView

@property (readonly, nonatomic) CLKUIColoringLabel *bodyLabel; // ivar: _bodyLabel
@property (readonly, nonatomic) NTKRichComplicationLineProgressView *progressView; // ivar: _progressView


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)isMeteredProgressView;
+(NSInteger)progressFillStyle;
-(id)init;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_handleTemplateUpdateWithReason:(NSInteger)arg0 headerViewData:(id)arg1 headerImageProvider:(id)arg2 headerTextProvider:(id)arg3 bodyTextProvider:(id)arg4 gaugeProvider:(id)arg5 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif