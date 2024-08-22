// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCELLSTYLE_H
#define TSTCELLSTYLE_H

@class TSSStyle;
@protocol TSTCellDiffing, TSDMixing;



@interface TSTCellStyle : TSSStyle <TSTCellDiffing, TSDMixing>





+(id)categoriesCellProperties;
+(id)cellDiffProperties;
+(id)nonEmphasisCellProperties;
+(id)p_regionStringForTableStyleArea:(NSUInteger)arg0 ;
+(id)properties;
+(id)propertiesAllowingNSNull;
+(id)styleIDForPreset:(NSUInteger)arg0 andTableStyleArea:(NSUInteger)arg1 ;
+(id)textStyleIDForPreset:(NSUInteger)arg0 andTableStyleArea:(NSUInteger)arg1 ;
+(void)initDefaultPropertyMap:(id)arg0 forTableStyleArea:(NSUInteger)arg1 presetID:(NSUInteger)arg2 colors:(id)arg3 alternate:(NSUInteger)arg4 ;
+(void)p_initBodyRegionPropertyMap:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 alternate:(NSUInteger)arg3 ;
+(void)p_initFooterRowRegionPropertyMap:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 alternate:(NSUInteger)arg3 ;
+(void)p_initHeaderColumnRegionPropertyMap:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 alternate:(NSUInteger)arg3 ;
+(void)p_initHeaderRowRegionPropertyMap:(id)arg0 presetID:(NSUInteger)arg1 colors:(id)arg2 alternate:(NSUInteger)arg3 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectByRemovingPropertiesInMap:(id)arg0 addingPropertiesInMap:(id)arg1 updateInverseResetPropertyMap:(id)arg2 updateInverseSetPropertyMap:(id)arg3 ;
-(id)objectByRemovingPropertiesInMap:(id)arg0 addingPropertiesInMap:(id)arg1 updateInverseResetPropertyMap:(id)arg2 updateInverseSetPropertyMap:(id)arg3 optionalConcurrentStylesheet:(id)arg4 ;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(void)loadCellStyleFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadCellStylePropertiesIntoPropertyMap:(id)arg0 fromArchive:(*void)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveCellStylePropertiesToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveCellStyleToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)upgradeIfNecessary;
-(void)validate;


@end


#endif