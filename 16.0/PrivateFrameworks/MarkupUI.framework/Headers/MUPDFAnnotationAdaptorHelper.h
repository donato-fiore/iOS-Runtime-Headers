// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUPDFANNOTATIONADAPTORHELPER_H
#define MUPDFANNOTATIONADAPTORHELPER_H


#import <Foundation/Foundation.h>


@interface MUPDFAnnotationAdaptorHelper : NSObject



+(BOOL)_shouldUseAKAnnotation:(id)arg0 toRepresentCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 ;
+(CGFloat)_pointSizeFromAppearanceTokens:(id)arg0 ;
+(id)_colorFromAppearanceTokens:(id)arg0 ;
+(id)_colorFromPDFArray:(struct CGPDFArray *)arg0 ;
+(id)_fontNameFromAppearanceTokens:(id)arg0 ;
+(id)_getColorFromAppearanceString:(struct CGPDFString *)arg0 ;
+(id)_getFontFromAppearanceString:(struct CGPDFString *)arg0 ofPDFPage:(struct CGPDFPage *)arg1 ;
+(id)_tokenizeAppearanceString:(id)arg0 ;
+(id)getFullFieldNameFromAnnotationDictionary:(struct CGPDFDictionary *)arg0 ;
+(id)getRGBColorForKey:(char *)arg0 fromAnnotationDictionary:(struct CGPDFDictionary *)arg1 ;
+(id)getTextStringForKey:(char *)arg0 fromAnnotationDictionary:(struct CGPDFDictionary *)arg1 ;
+(id)newAKAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 ;
+(void)addAKAnnotation:(id)arg0 toAnnotationDictionary:(struct __CFDictionary *)arg1 ;
+(void)addAppearanceStreamOfAnnotation:(id)arg0 forPage:(struct CGPDFPage *)arg1 toDictionary:(id)arg2 ;
+(void)addBorderStyleOfAnnotation:(id)arg0 toDictionary:(id)arg1 ;
+(void)addBoundsOfAnnotation:(id)arg0 forPage:(struct CGPDFPage *)arg1 toDictionary:(id)arg2 ;
+(void)addContentsStringOfAnnotation:(id)arg0 toDictionary:(id)arg1 ;
+(void)addDefaultAppearanceStreamOfAnnotation:(id)arg0 toDictionary:(id)arg1 ;
+(void)addFlagsOfAnnotation:(id)arg0 toDictionary:(id)arg1 ;
+(void)addModificationDateOfAnnotation:(id)arg0 toDictionary:(id)arg1 ;
+(void)addQuaddingOfAnnotation:(id)arg0 toDictionary:(id)arg1 ;
+(void)addRGBColor:(id)arg0 forKey:(id)arg1 toDictionary:(id)arg2 ;
+(void)addString:(id)arg0 toDictionary:(id)arg1 forKey:(id)arg2 ;
+(void)addTextLabelOfAnnotation:(id)arg0 toDictionary:(id)arg1 ;
+(void)addTextOfAnnotation:(id)arg0 toDictionary:(id)arg1 forKey:(id)arg2 canUsePlaceholder:(BOOL)arg3 ;
+(void)migrateAKFilledAnnotationPropertiesTo:(id)arg0 fromAnnotationDictionary:(struct CGPDFDictionary *)arg1 ofPDFPage:(struct CGPDFPage *)arg2 ;
+(void)migrateAKRectangularShapeAnnotationPropertiesTo:(id)arg0 fromAnnotationDictionary:(struct CGPDFDictionary *)arg1 ofPDFPage:(struct CGPDFPage *)arg2 ;
+(void)migrateAKStrokedAnnotationPropertiesTo:(id)arg0 fromAnnotationDictionary:(struct CGPDFDictionary *)arg1 ofPDFPage:(struct CGPDFPage *)arg2 ;
+(void)migrateAKTextAnnotationPropertiesTo:(id)arg0 fromAnnotationDictionary:(struct CGPDFDictionary *)arg1 ofPDFPage:(struct CGPDFPage *)arg2 ;
+(void)migrateAppearanceStreamFromCGPDFAnnotationDict:(struct CGPDFDictionary *)arg0 toAKAnnotation:(id)arg1 compensatingForPageRotation:(NSUInteger)arg2 ;
+(void)readDefaultAppearanceStringFromPDFDictionary:(struct CGPDFDictionary *)arg0 ofPage:(struct CGPDFPage *)arg1 toDictionary:(id)arg2 ;
+(void)readQuaddingFromPDFDictionary:(struct CGPDFDictionary *)arg0 toDictionary:(id)arg1 ;


@end


#endif