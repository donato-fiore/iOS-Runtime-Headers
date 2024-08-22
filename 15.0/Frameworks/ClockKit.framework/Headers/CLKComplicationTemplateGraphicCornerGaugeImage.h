// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERGAUGEIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERGAUGEIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKGaugeProvider.h"
#import "CLKFullColorImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCornerGaugeImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKGaugeProvider *gaugeProvider; // ivar: _gaugeProvider
@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) CLKTextProvider *leadingTextProvider; // ivar: _leadingTextProvider
@property (copy, nonatomic) CLKTextProvider *trailingTextProvider; // ivar: _trailingTextProvider


+(id)templateWithGaugeProvider:(id)arg0 imageProvider:(id)arg1 ;
+(id)templateWithGaugeProvider:(id)arg0 leadingTextProvider:(id)arg1 trailingTextProvider:(id)arg2 imageProvider:(id)arg3 ;
-(NSInteger)compatibleFamily;
-(id)initWithGaugeProvider:(id)arg0 imageProvider:(id)arg1 ;
-(id)initWithGaugeProvider:(id)arg0 leadingTextProvider:(id)arg1 trailingTextProvider:(id)arg2 imageProvider:(id)arg3 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateGaugeProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif