// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARSTACKIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICEXTRALARGECIRCULARSTACKIMAGE_H



#import "CLKComplicationTemplateGraphicExtraLargeCircular.h"
#import "CLKFullColorImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicExtraLargeCircularStackImage : CLKComplicationTemplateGraphicExtraLargeCircular

@property (copy, nonatomic) CLKFullColorImageProvider *line1ImageProvider; // ivar: _line1ImageProvider
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // ivar: _line2TextProvider


+(id)templateWithLine1ImageProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(id)initWithLine1ImageProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif