// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERSEGMENTEDGAUGEIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERSEGMENTEDGAUGEIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKGaugeProvider.h"
#import "CLKFullColorImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCornerSegmentedGaugeImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider; // ivar: _leadingTextProvider


-(NSInteger)compatibleFamily;
-(id)initWithImageProvider:(id)arg0 gaugeProvider:(id)arg1 textProvider:(id)arg2 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif