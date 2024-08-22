// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLKCOMPLICATIONTEMPLATECIRCULARSMALLSTACKIMAGE_H
#define CLKCOMPLICATIONTEMPLATECIRCULARSMALLSTACKIMAGE_H



#import "CLKComplicationTemplate.h"
#import "CLKImageProvider.h"
#import "CLKTextProvider.h"

@interface CLKComplicationTemplateCircularSmallStackImage : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *line1ImageProvider; // ivar: _line1ImageProvider
@property (copy, nonatomic) CLKTextProvider *line2TextProvider; // ivar: _line2TextProvider


+(id)templateWithLine1ImageProvider:(id)arg0 line2TextProvider:(id)arg1 ;
+(void)_imageSDKSize:(struct CGSize *)arg0 deviceSize:(struct CGSize *)arg1 forSDKVersion:(NSInteger)arg2 ;
-(NSInteger)compatibleFamily;
-(id)initWithLine1ImageProvider:(id)arg0 line2TextProvider:(id)arg1 ;
-(void)_enumerateImageProviderKeysWithBlock:(id)arg0 ;
-(void)_enumerateTextProviderKeysWithBlock:(id)arg0 ;


@end


#endif