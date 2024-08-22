// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKRICHCOMPLICATIONCORNERGAUGETEXTVIEW_H
#define NTKRICHCOMPLICATIONCORNERGAUGETEXTVIEW_H



#import "NTKRichComplicationCornerBaseGaugeView.h"
#import "NTKCurvedColoringLabel.h"

@interface NTKRichComplicationCornerGaugeTextView : NTKRichComplicationCornerBaseGaugeView

@property (readonly, nonatomic) NTKCurvedColoringLabel *outerLabel; // ivar: _outerLabel


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)init;
-(void)_editingDidEnd;
-(void)_enumerateLabelsWithBlock:(id)arg0 ;
-(void)_handleTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif