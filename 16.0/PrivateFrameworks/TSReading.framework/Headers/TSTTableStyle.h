// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLESTYLE_H
#define TSTTABLESTYLE_H



#import "TSSStyle.h"

@interface TSTTableStyle : TSSStyle



+(id)nonEmphasisTableProperties;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)styleIDForPreset:(NSUInteger)arg0 ;
+(void)initDefaultPropertyMap:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 alternate:(int)arg3 ;
+(void)initDefaultStrokePresetListInPropertyMap:(id)arg0 presetIndex:(NSUInteger)arg1 colors:(id)arg2 ;
+(void)p_populateParagraphStyle:(id)arg0 ;
-(SEL)mapThemePropertyMapSelector;
-(id)exteriorStrokeForStrokePreset:(NSUInteger)arg0 ;
-(id)horizontalStrokeForStrokePreset:(NSUInteger)arg0 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)strokeForStrokePreset:(NSUInteger)arg0 ;
-(id)verticalStrokeForStrokePreset:(NSUInteger)arg0 ;
-(unsigned int)maskForStrokePreset:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)validate;


@end


#endif