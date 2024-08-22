// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRICHCOMPLICATIONCORNERGAUGETEXTVIEW_H
#define NTKRICHCOMPLICATIONCORNERGAUGETEXTVIEW_H

@class CDRichComplicationCornerBaseGaugeView, CLKUICurvedColoringLabel;



@interface NTKRichComplicationCornerGaugeTextView : CDRichComplicationCornerBaseGaugeView

@property (readonly, nonatomic) CLKUICurvedColoringLabel *outerLabel; // ivar: _outerLabel


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)init;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration )arg0 ;
-(void)layoutSubviews;
-(void)setFontStyle:(NSInteger)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif