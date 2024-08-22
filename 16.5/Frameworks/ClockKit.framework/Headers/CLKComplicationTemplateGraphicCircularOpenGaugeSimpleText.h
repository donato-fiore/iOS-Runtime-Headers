// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULAROPENGAUGESIMPLETEXT_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULAROPENGAUGESIMPLETEXT_H



#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKTextProvider.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicCircularOpenGaugeSimpleText : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKTextProvider *bottomTextProvider; // ivar: _bottomTextProvider
@property (copy, nonatomic) CLKTextProvider *centerTextProvider; // ivar: _centerTextProvider
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider


+(id)templateWithGaugeProvider:(id)arg0 bottomTextProvider:(id)arg1 centerTextProvider:(id)arg2 ;
-(id)initWithGaugeProvider:(id)arg0 bottomTextProvider:(id)arg1 centerTextProvider:(id)arg2 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif