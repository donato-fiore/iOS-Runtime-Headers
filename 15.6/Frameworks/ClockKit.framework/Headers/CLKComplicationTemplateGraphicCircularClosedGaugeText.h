// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARCLOSEDGAUGETEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARCLOSEDGAUGETEXT_H



#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKTextProvider.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicCircularClosedGaugeText : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKTextProvider *centerTextProvider; // ivar: _centerTextProvider
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider


+(id)templateWithGaugeProvider:(id)arg0 centerTextProvider:(id)arg1 ;
-(id)initWithGaugeProvider:(id)arg0 centerTextProvider:(id)arg1 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif