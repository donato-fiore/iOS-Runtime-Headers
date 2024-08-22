// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULAROPENGAUGEIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULAROPENGAUGEIMAGE_H



#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKFullColorImageProvider.h"
#import "CLKTextProvider.h"
#import "CLKGaugeProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenGaugeImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKFullColorImageProvider *bottomImageProvider; // ivar: _bottomImageProvider
@property (copy, nonatomic) CLKTextProvider *centerTextProvider; // ivar: _centerTextProvider
@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider


+(id)templateWithGaugeProvider:(id)arg0 bottomImageProvider:(id)arg1 centerTextProvider:(id)arg2 ;
-(id)initWithGaugeProvider:(id)arg0 bottomImageProvider:(id)arg1 centerTextProvider:(id)arg2 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif