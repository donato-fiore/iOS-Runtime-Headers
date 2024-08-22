// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARCLOSEDGAUGEIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCIRCULARCLOSEDGAUGEIMAGE_H



#import "CLKComplicationTemplateGraphicCircular.h"
#import "CLKGaugeProvider.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicCircularClosedGaugeImage : CLKComplicationTemplateGraphicCircular

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider


+(id)templateWithGaugeProvider:(id)arg0 imageProvider:(id)arg1 ;
-(id)initWithGaugeProvider:(id)arg0 imageProvider:(id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;


@end


#endif