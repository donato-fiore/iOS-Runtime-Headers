// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLSQUARE_H
#define CLKCOMPLICATIONTEMPLATEUTILITARIANSMALLSQUARE_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"

@interface CLKComplicationTemplateUtilitarianSmallSquare : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider


+(id)templateWithImageProvider:(id)arg0 ;
-(NSInteger)compatibleFamily;
-(id)initWithImageProvider:(id)arg0 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;


@end


#endif