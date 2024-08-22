// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLKCOMPLICATIONTEMPLATEGRAPHICCORNERCIRCULARIMAGE_H
#define CLKCOMPLICATIONTEMPLATEGRAPHICCORNERCIRCULARIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKFullColorImageProvider.h"

@interface CLKComplicationTemplateGraphicCornerCircularImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *imageProvider; // ivar: _imageProvider


+(id)templateWithImageProvider:(id)arg0 ;
-(NSInteger)compatibleFamily;
-(id)initWithImageProvider:(id)arg0 ;
-(void)_enumerateFullColorImageProviderKeysWithBlock:(id)arg0 ;


@end


#endif