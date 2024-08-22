// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELLSTYLE_H
#define TSTCELLSTYLE_H



#import "TSSStyle.h"

@interface TSTCellStyle : TSSStyle



+(id)nonEmphasisCellProperties;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)regionStringForTableArea:(unsigned int)arg0 ;
+(id)styleIDForPreset:(NSUInteger)arg0 andTableArea:(unsigned int)arg1 ;
+(id)textStyleIDForPreset:(NSUInteger)arg0 andTableArea:(unsigned int)arg1 ;
+(void)initDefaultPropertyMap:(id)arg0 forTableArea:(unsigned int)arg1 presetIndex:(NSUInteger)arg2 colors:(id)arg3 alternate:(int)arg4 ;
+(void)p_initBodyRegionPropertyMap:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 alternate:(int)arg3 ;
+(void)p_initFooterRowRegionPropertyMap:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 alternate:(int)arg3 ;
+(void)p_initHeaderColumnRegionPropertyMap:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 alternate:(int)arg3 ;
+(void)p_initHeaderRowRegionPropertyMap:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 alternate:(int)arg3 ;
-(SEL)mapThemePropertyMapSelector;
-(void)dealloc;
-(void)tstMapCellStylePropertyMap:(id)arg0 ;
-(void)validate;


@end


#endif