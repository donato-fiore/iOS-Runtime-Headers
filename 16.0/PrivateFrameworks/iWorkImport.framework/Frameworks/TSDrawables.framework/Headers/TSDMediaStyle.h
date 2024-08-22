// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMEDIASTYLE_H
#define TSDMEDIASTYLE_H

@class TSSStyle, NSString;
@protocol TSDMixing, TSSPreset;



@interface TSDMediaStyle : TSSStyle <TSDMixing, TSSPreset>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) Class superclass;


+(BOOL)validateFloatValue:(*float)arg0 forProperty:(int)arg1 ;
+(float)defaultFloatValueForProperty:(int)arg0 ;
+(id)defaultValueForProperty:(int)arg0 ;
+(id)imageStylePresetStyleDescriptor;
+(id)movieStylePresetStyleDescriptor;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(void)initialize;
+(void)loadMediaStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
+(void)saveMediaStylePropertyMap:(id)arg0 toArchive:(*void)arg1 archiver:(id)arg2 ;
+(void)validatePastedPropertyMap:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)boxedValueForProperty:(int)arg0 oldBoxedValue:(id)arg1 transformedByTransform:(struct CGAffineTransform )arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif