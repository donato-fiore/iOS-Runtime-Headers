// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERTEXTIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERTEXTIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKFullColorImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateGraphicCornerTextImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


+(id)templateWithTextProvider:(id)arg0 imageProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)initWithTextProvider:(id)arg0 imageProvider:(id)arg1 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif