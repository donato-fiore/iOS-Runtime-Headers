// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMTEXTLAYOUTMANAGER_H
#define AXMTEXTLAYOUTMANAGER_H

@class NSMeasurementFormatter, NSNumberFormatter;

#import <Foundation/Foundation.h>

#import "AXMSemanticTextFactory.h"

@interface AXMTextLayoutManager : NSObject

@property (retain, nonatomic) NSMeasurementFormatter *measurementFormatter; // ivar: _measurementFormatter
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (retain, nonatomic) AXMSemanticTextFactory *semanticTextFactory; // ivar: _semanticTextFactory


-(BOOL)hasConsecutiveCharacters:(id)arg0 withLength:(NSUInteger)arg1 ;
-(BOOL)hasConsecutiveDigits:(id)arg0 withLength:(NSUInteger)arg1 ;
-(BOOL)isBoundary:(struct CGRect )arg0 withinBoundary:(struct CGRect )arg1 withNormalizedThreshold:(CGFloat)arg2 ;
-(BOOL)isBoundary:(struct CGRect )arg0 withinNormalizedDistance:(CGFloat)arg1 ofBoundary:(struct CGRect )arg2 ;
-(BOOL)verifyTable:(id)arg0 sortedColumns:(id)arg1 ;
-(id)_assembleLayoutCellsWithFeatures:(id)arg0 ;
-(id)_assembleLayoutColumn:(id)arg0 ;
-(id)_assembleLayoutHeader:(id)arg0 ;
-(id)_assembleLayoutLines:(id)arg0 ;
-(id)_assembleLayoutRegions:(id)arg0 ;
-(id)_assembleLayoutRow:(id)arg0 ;
-(id)_assembleLayoutRowFromCell:(id)arg0 ;
-(id)_assembleLayoutSequences:(id)arg0 ;
-(id)_assembleLayoutTable:(id)arg0 header:(id)arg1 columnItems:(id)arg2 ;
-(id)_assembleNutritionLabelLayoutWithRows:(id)arg0 ;
-(id)_assembleReceipt:(id)arg0 ;
-(id)documentWithNutritionLabel:(id)arg0 canvasSize:(struct CGSize )arg1 requestHandler:(id)arg2 metrics:(id)arg3 error:(*id)arg4 ;
-(id)documentWithReceipt:(id)arg0 withTextSkew:(CGFloat)arg1 canvasSize:(struct CGSize )arg2 preferredLocales:(id)arg3 requestHandler:(id)arg4 metrics:(id)arg5 error:(*id)arg6 ;
-(id)documentWithTable:(id)arg0 canvasSize:(struct CGSize )arg1 preferredLocales:(id)arg2 requestHandler:(id)arg3 metrics:(id)arg4 error:(*id)arg5 ;
-(id)documentWithTextFeatures:(id)arg0 canvasSize:(struct CGSize )arg1 preferredLocales:(id)arg2 applySemanticAnalysis:(BOOL)arg3 error:(*id)arg4 ;
-(id)envelopeWithTextFeatures:(id)arg0 canvasSize:(struct CGSize )arg1 preferredLocales:(id)arg2 applySemanticAnalysis:(BOOL)arg3 error:(*id)arg4 ;
-(id)extractDataFromEnvelopeWithFeatures:(id)arg0 preferredLocales:(id)arg1 canvasSize:(struct CGSize )arg2 ;
-(id)featureCellsForNutritionLabelRows:(id)arg0 withRequestHandler:(id)arg1 withCanvasSize:(struct CGSize )arg2 ;
-(id)filterReceiptForGarbageText:(id)arg0 ;
-(id)fractionDenominatorValues;
-(id)fractionDenominatorValuesWithOneAsNumerator;
-(id)getReceiptRows:(id)arg0 preferredLocales:(id)arg1 canvasSize:(struct CGSize )arg2 ;
-(id)getTableColumns:(id)arg0 ;
-(id)getTableRows:(id)arg0 ;
-(id)initWithSemanticTextFactory:(id)arg0 ;
-(id)largestDetectedContoursForImage:(id)arg0 ;
-(id)measurementAbbreviationsToVerboseString;
-(id)nutritionLabelRowsForContourResults:(id)arg0 normalizedNutritionLabelFrame:(struct CGRect )arg1 fullImageFrame:(struct CGRect )arg2 processedImageFrame:(struct CGRect )arg3 ;
-(id)preprocessNutritionLabel:(id)arg0 finalFrame:(struct CGRect *)arg1 ;
-(id)preprocessReceipt:(id)arg0 withTextSkew:(CGFloat)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 metrics:(id)arg4 requestHandler:(id)arg5 finalFrame:(struct CGRect *)arg6 ;
-(id)preprocessTable:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 metrics:(id)arg3 ;
-(id)processFraction:(id)arg0 ;
-(id)processMeasurement:(id)arg0 ;
-(id)processNutritionLabelText:(id)arg0 ;
-(id)processReceiptText:(id)arg0 foundMerchantName:(*BOOL)arg1 preferredLocales:(id)arg2 ;
-(id)receiptRegularExpressions;
-(id)sortContourColumnResults:(id)arg0 maxWidth:(CGFloat)arg1 maxHeight:(CGFloat)arg2 ;
-(id)sortContourRowResults:(id)arg0 maxWidth:(CGFloat)arg1 maxHeight:(CGFloat)arg2 minWidth:(CGFloat)arg3 minHeight:(CGFloat)arg4 ;
-(id)textColumnsForTable:(id)arg0 sourceImage:(id)arg1 requestHandler:(id)arg2 canvasSize:(struct CGSize )arg3 ;
-(id)textRowsForTable:(id)arg0 sourceImage:(id)arg1 requestHandler:(id)arg2 canvasSize:(struct CGSize )arg3 ;
-(struct CGRect )detectCenterContourFromContours:(id)arg0 withImageExtent:(struct CGRect )arg1 ;
-(struct CGRect )imageRectForNormalizedRect:(struct CGRect )arg0 imageWidth:(NSUInteger)arg1 imageHeight:(NSUInteger)arg2 ;


@end


#endif