// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDSHAPESTYLE_H
#define TSDSHAPESTYLE_H

@class TSSStyle, NSString;
@protocol TSSPreset, TSDMixing;



@interface TSDShapeStyle : TSSStyle <TSSPreset, TSDMixing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasLineEnds;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;
@property (readonly) BOOL wantsHighContrastBackgroundColor;


+(BOOL)validateFloatValue:(*float)arg0 forProperty:(int)arg1 ;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(void)initialize;
+(void)loadShapeStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
+(void)saveShapeStylePropertyMap:(id)arg0 toArchive:(*void)arg1 archiver:(id)arg2 ;
-(BOOL)wantsHighContrastBackgroundColorWithColor:(id)arg0 ;
-(BOOL)wantsHighContrastFillColorWithColor:(id)arg0 ;
-(BOOL)wantsHighContrastStrokeColorWithColor:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif