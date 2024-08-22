// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARFULLIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICRECTANGULARFULLIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicRectangularFullImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider


+(id)templateWithImageProvider:(id)arg0 ;
-(NSInteger)compatibleFamily;
-(id)initWithImageProvider:(id)arg0 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;


@end


#endif