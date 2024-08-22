// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDSHAPESTYLE_H
#define TSDSHAPESTYLE_H

@protocol TSDMixing;


#import "TSSStyle.h"

@interface TSDShapeStyle : TSSStyle <TSDMixing>





+(BOOL)validateFloatValue:(*float)arg0 forProperty:(int)arg1 ;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)p_magicMoveProperties;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(void)initialize;
-(BOOL)wantsHighContrastBackgroundColor;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)fixImageFillTechniqueForSwatchOfSize:(struct CGSize )arg0 ;


@end


#endif