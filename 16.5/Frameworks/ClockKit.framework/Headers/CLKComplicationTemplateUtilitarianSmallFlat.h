// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLFLAT_H
#define CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLFLAT_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateUtilitarianSmallFlat : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


+(id)templateWithTextProvider:(id)arg0 ;
+(id)templateWithTextProvider:(id)arg0 imageProvider:(id)arg1 ;
-(BOOL)isCompatibleWithFamily:(NSInteger)arg0 ;
-(NSInteger)compatibleFamily;
-(id)initWithTextProvider:(id)arg0 ;
-(id)initWithTextProvider:(id)arg0 imageProvider:(id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif