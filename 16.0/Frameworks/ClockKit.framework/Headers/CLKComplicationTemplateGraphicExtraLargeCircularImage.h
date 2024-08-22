// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARIMAGE_H



#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider


+(id)templateWithImageProvider:(id)arg0 ;
-(id)initWithImageProvider:(id)arg0 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;


@end


#endif