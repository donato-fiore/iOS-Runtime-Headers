// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSIMPLETEXTCOMPLICATIONVIEW_H
#define NTKSIMPLETEXTCOMPLICATIONVIEW_H

@class UIView, NSString, CLKDevice, CLKFont, CLKUIColoringLabel, CLKComplicationTemplateSimpleText, NSDate;
@protocol CDComplicationDisplay, CDTemplateComplicationDisplay, CDComplicationDisplayObserver;



@interface NTKSimpleTextComplicationView : UIView <CDComplicationDisplay, CDTemplateComplicationDisplay>



@property (nonatomic) BOOL canUseCurvedText; // ivar: canUseCurvedText
@property (readonly, nonatomic) NSUInteger complicationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (weak, nonatomic) NSObject<CDComplicationDisplayObserver> *displayObserver; // ivar: displayObserver
@property (retain, nonatomic) CLKFont *font;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted;
@property (retain, nonatomic) CLKUIColoringLabel *label; // ivar: _label
@property (nonatomic) BOOL shouldUseTemplateColors;
@property (readonly) Class superclass;
@property (retain, nonatomic) CLKComplicationTemplateSimpleText *template; // ivar: _template
@property (retain, nonatomic) NSDate *timeTravelDate; // ivar: _timeTravelDate


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(BOOL)supportsComplicationFamily:(NSInteger)arg0 ;
-(id)_defaultFont;
-(id)complicationTemplate;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateLabelFrame;
-(void)layoutSubviews;
-(void)setComplicationTemplate:(id)arg0 reason:(NSInteger)arg1 ;


@end


#endif