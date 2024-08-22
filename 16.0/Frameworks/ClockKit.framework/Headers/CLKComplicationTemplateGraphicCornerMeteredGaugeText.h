// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERMETEREDGAUGETEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERMETEREDGAUGETEXT_H



#import "CLKComplicationTemplate.h"
#import "CLKGaugeProvider.h"
#import "CLKTextProvider.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider; // ivar: _leadingTextProvider
@property (copy, nonatomic) CLKFullColorImageProvider *outerImageProvider; // ivar: _outerImageProvider
@property (copy, nonatomic) CLKTextProvider *outerTextProvider; // ivar: _outerTextProvider
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider; // ivar: _trailingTextProvider


-(NSInteger)compatibleFamily;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif