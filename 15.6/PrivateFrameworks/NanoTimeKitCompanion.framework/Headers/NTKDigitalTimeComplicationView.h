// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDIGITALTIMECOMPLICATIONVIEW_H
#define NTKDIGITALTIMECOMPLICATIONVIEW_H

@class UIView, NSString, CLKDevice, UIFont, CLKComplicationTemplate, UIColor, NSDate;
@protocol NTKComplicationDisplay, NTKTemplateComplicationDisplay, NTKComplicationDisplayObserver;


#import "NTKDigitalTimeLabel.h"

@interface NTKDigitalTimeComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>



@property (nonatomic) BOOL canUseCurvedText; // ivar: canUseCurvedText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<NTKComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (retain, nonatomic) CLKComplicationTemplate *template; // ivar: _template
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NTKDigitalTimeLabel *timeLabel; // ivar: _timeLabel
@property (retain, nonatomic) NSDate *timeTravelDate; // ivar: _timeTravelDate


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(NSUInteger)timelineAnimationFadeTypeOverride;
-(id)_createLabelViewWithFont:(id)arg0 ;
-(id)_labelFont;
-(id)complicationTemplate;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setComplicationTemplate:(id)arg0 reason:(NSInteger)arg1 ;
-(void)setOverrideDate:(id)arg0 ;
-(void)timeOffsetChanged;
-(void)updateDate;


@end


#endif