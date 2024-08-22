// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARCLOSEDGAUGEIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARCLOSEDGAUGEIMAGE_H



#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKGaugeProvider.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularClosedGaugeImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider


+(id)templateWithGaugeProvider:(id)arg0 imageProvider:(id)arg1 ;
-(id)initWithGaugeProvider:(id)arg0 imageProvider:(id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;


@end


#endif