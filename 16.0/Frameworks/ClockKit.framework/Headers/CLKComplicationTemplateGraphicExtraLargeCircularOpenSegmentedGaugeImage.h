// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULAROPENSEGMENTEDGAUGEIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULAROPENSEGMENTEDGAUGEIMAGE_H



#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKGaugeProvider.h"
#import "CLKFullColorImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularOpenSegmentedGaugeImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


-(id)initWithImageProvider:(id)arg0 gaugeProvider:(id)arg1 textProvider:(id)arg2 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif