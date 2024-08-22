// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMEDIASTYLE_H
#define TSDMEDIASTYLE_H

@class NSString;
@protocol TSDMixing, TSSPreset;


#import "TSSStyle.h"

@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>



@property (readonly, nonatomic) NSString *presetKind;


+(BOOL)validateFloatValue:(*float)arg0 forProperty:(int)arg1 ;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)imageStylePresetStyleDescriptor;
+(id)movieStylePresetStyleDescriptor;
+(id)p_magicMoveProperties;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(void)initialize;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(SEL)mapThemePropertyMapSelector;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;


@end


#endif