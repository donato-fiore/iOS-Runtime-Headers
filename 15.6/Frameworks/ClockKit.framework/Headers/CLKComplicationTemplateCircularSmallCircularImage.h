// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLKCOMPLICATIONTEMPLATECIRCULARSMALLCIRCULARIMAGE_H
#define CLKCOMPLICATIONTEMPLATECIRCULARSMALLCIRCULARIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"

@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider


+(id)templateWithImageProvider:(id)arg0 ;
+(void)_imageSDKSize:(struct CGSize *)arg0 deviceSize:(struct CGSize *)arg1 forSDKVersion:(NSInteger)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithImageProvider:(id)arg0 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;


@end


#endif