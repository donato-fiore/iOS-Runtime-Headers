// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEUTILITARIANLARGEFLAT_H
#define CLKCOMPLICATIONTEMPLATEUTILITARIANLARGEFLAT_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateUtilitarianLargeFlat : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (copy, nonatomic) CLKTextProvider *textProvider; // ivar: _textProvider


+(id)templateWithTextProvider:(id)arg0 ;
+(id)templateWithTextProvider:(id)arg0 imageProvider:(id)arg1 ;
-(NSInteger)compatibleFamily;
-(id)initWithTextProvider:(id)arg0 ;
-(id)initWithTextProvider:(id)arg0 imageProvider:(id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif