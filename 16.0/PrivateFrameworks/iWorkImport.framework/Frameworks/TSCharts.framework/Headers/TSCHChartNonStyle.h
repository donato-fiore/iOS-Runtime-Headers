// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTNONSTYLE_H
#define TSCHCHARTNONSTYLE_H



#import "TSCHBaseStyle.h"

@interface TSCHChartNonStyle : TSCHBaseStyle



+(BOOL)shouldWarnWithPersistingWithoutStylesheet;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultStyleWithContext:(id)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)imageFillProperties;
+(id)properties;
+(int)defaultIntValueForProperty:(int)arg0 ;
+(int)muxDefaultPropertyForSpecificProperty:(int)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)initWithContext:(id)arg0 name:(id)arg1 overridePropertyMap:(id)arg2 isVariation:(BOOL)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)loadFromPreUFFArchiveWithUnarchiver:(id)arg0 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif