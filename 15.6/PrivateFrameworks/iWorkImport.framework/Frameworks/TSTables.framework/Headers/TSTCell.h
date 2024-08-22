// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTCELL_H
#define TSTCELL_H

@class TSKFormat, TSDFill, TSDCommentStorage, NSString, NSDate, TSWPParagraphStyle, TSWPStorage, TSULocale;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTCellBorder.h"
#import "TSTCellSpec.h"
#import "TSTCellStyle.h"
#import "TSTConditionalStyleSet.h"
#import "TSCEFormulaObject.h"
#import "TSTImportWarningSet.h"
#import "TSTStockDetails.h"

@interface TSTCell : NSObject <NSCopying>

 {
    TSUDecimal _valueBigNumber;
    CGFloat _valueDouble;
    unsigned int _valueID;
    NSObject *_valueObject;
}


@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) TSKFormat *booleanFormat; // ivar: _booleanFormat
@property (nonatomic) unsigned int booleanFormatID; // ivar: _booleanFormatID
@property (retain, nonatomic) TSTCellBorder *cellBorder; // ivar: _cellBorder
@property (readonly, nonatomic) TSDFill *cellFill;
@property (nonatomic) unsigned short cellFlags; // ivar: _cellFlags
@property (readonly, nonatomic) unsigned char cellFormatKind; // ivar: _cellFormatKind
@property (retain, nonatomic) TSTCellSpec *cellSpec; // ivar: _cellSpec
@property (readonly, nonatomic) TSTCellSpec *cellSpecForDiff;
@property (retain, nonatomic) TSTCellStyle *cellStyle; // ivar: _cellStyle
@property (nonatomic) unsigned int cellStyleID; // ivar: _cellStyleID
@property (retain, nonatomic) TSDCommentStorage *commentStorage; // ivar: _commentStorage
@property (nonatomic) unsigned int commentStorageID; // ivar: _commentStorageID
@property (retain, nonatomic) TSTConditionalStyleSet *conditionalStyle; // ivar: _conditionalStyle
@property (nonatomic) unsigned char conditionalStyleAppliedRule; // ivar: _conditionalStyleAppliedRule
@property (nonatomic) unsigned int conditionalStyleID; // ivar: _conditionalStyleID
@property (nonatomic) unsigned int controlCellSpecID; // ivar: _controlCellSpecID
@property (nonatomic) TSUDecimal currencyDecimalValue;
@property (nonatomic) CGFloat currencyDoubleValue;
@property (readonly, nonatomic) TSKFormat *currencyFormat; // ivar: _currencyFormat
@property (nonatomic) unsigned int currencyFormatID; // ivar: _currencyFormatID
@property (readonly, nonatomic) BOOL currencyIsMostRecentlySet;
@property (readonly, nonatomic) TSKFormat *currentFormat;
@property (readonly, nonatomic) BOOL currentFormatIsExplicit;
@property (readonly, nonatomic) BOOL currentFormatIsExplicitForCalcEngine;
@property (readonly, nonatomic) unsigned char currentFormatNegativeStyle;
@property (readonly, nonatomic) BOOL currentFormatUsesAccountingStyle;
@property (readonly, nonatomic) NSString *customFormatString;
@property (readonly, nonatomic) BOOL dataIsReplaceable;
@property (readonly, nonatomic) TSKFormat *dateFormat; // ivar: _dateFormat
@property (nonatomic) unsigned int dateFormatID; // ivar: _dateFormatID
@property (retain, nonatomic) NSDate *dateValue;
@property (readonly, nonatomic) TSKFormat *durationFormat; // ivar: _durationFormat
@property (nonatomic) unsigned int durationFormatID; // ivar: _durationFormatID
@property (nonatomic) CGFloat durationTimeIntervalValue;
@property (readonly, nonatomic) TSWPParagraphStyle *effectiveTextStyle;
@property (nonatomic) unsigned short explicitFormatFlags; // ivar: _explicitFormatFlags
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) NSString *formattedValue;
@property (nonatomic) unsigned int formulaID; // ivar: _formulaID
@property (retain, nonatomic) TSCEFormulaObject *formulaObject;
@property (retain, nonatomic) TSWPStorage *formulaSyntaxError;
@property (nonatomic) unsigned int formulaSyntaxErrorID;
@property (readonly, nonatomic) NSString *formulaSyntaxErrorString;
@property (readonly, nonatomic) BOOL hasAnyCustomFormat;
@property (readonly, nonatomic) BOOL hasAnyExplicitFormats;
@property (readonly, nonatomic) BOOL hasAnyFormats;
@property (readonly, nonatomic) BOOL hasAnyWarning;
@property (readonly, nonatomic) BOOL hasBooleanFormat;
@property (readonly, nonatomic) BOOL hasCellSpec;
@property (readonly, nonatomic) BOOL hasCellStyle;
@property (readonly, nonatomic) BOOL hasCommentStorage;
@property (readonly, nonatomic) BOOL hasConditionalStyle;
@property (readonly, nonatomic) BOOL hasContentBreakingMergeFragment;
@property (readonly, nonatomic) BOOL hasControl;
@property (readonly, nonatomic) BOOL hasCurrencyFormat;
@property (readonly, nonatomic) BOOL hasCurrentFormat;
@property (readonly, nonatomic) BOOL hasDateFormat;
@property (readonly, nonatomic) BOOL hasDurationFormat;
@property (readonly, nonatomic) BOOL hasFormula;
@property (readonly, nonatomic) BOOL hasFormulaAnyError;
@property (readonly, nonatomic) BOOL hasFormulaEvaluationError;
@property (readonly, nonatomic) BOOL hasFormulaSyntaxError;
@property (readonly, nonatomic) BOOL hasImportWarningSet;
@property (readonly, nonatomic) BOOL hasMismatchedFormatAndValue;
@property (readonly, nonatomic) BOOL hasNumberFormat;
@property (readonly, nonatomic) BOOL hasRichText;
@property (readonly, nonatomic) BOOL hasStockFormulaForStockUI;
@property (readonly, nonatomic) BOOL hasTextFormat;
@property (readonly, nonatomic) BOOL hasTextStyle;
@property (readonly, nonatomic) BOOL hasValueOrError;
@property (retain, nonatomic) TSTImportWarningSet *importWarningSet; // ivar: _importWarningSet
@property (nonatomic) unsigned int importWarningSetID; // ivar: _importWarningSetID
@property (readonly, nonatomic) unsigned int interactionType;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isEmptyForDataStore;
@property (readonly, nonatomic) BOOL isMostRecentlyExplicitPercent;
@property (retain, nonatomic) TSULocale *locale; // ivar: _locale
@property (readonly, nonatomic) BOOL mightBeInterestedInMigration;
@property (nonatomic) TSUDecimal numberDecimalValue;
@property (nonatomic) CGFloat numberDoubleValue;
@property (readonly, nonatomic) TSKFormat *numberFormat; // ivar: _numberFormat
@property (nonatomic) unsigned int numberFormatID; // ivar: _numberFormatID
@property (readonly, nonatomic) NSUInteger popupChoiceIndex;
@property (nonatomic) unsigned int richTextID;
@property (readonly, nonatomic) TSWPStorage *richTextStorageForLayout;
@property (retain, nonatomic) TSWPStorage *richTextValue;
@property (readonly, nonatomic) TSTStockDetails *stockDetails;
@property (readonly, nonatomic) NSString *stringForDisplayWithoutColor;
@property (readonly, nonatomic) NSString *stringForEditing;
@property (readonly, nonatomic) NSString *stringForUnderlyingValue;
@property (nonatomic) unsigned int stringID;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) TSKFormat *textFormat; // ivar: _textFormat
@property (nonatomic) unsigned int textFormatID; // ivar: _textFormatID
@property (retain, nonatomic) TSWPParagraphStyle *textStyle; // ivar: _textStyle
@property (nonatomic) unsigned int textStyleID; // ivar: _textStyleID
@property (readonly, nonatomic) TSUDecimal underlyingDecimalValue;
@property (readonly, nonatomic) CGFloat underlyingDoubleValue;
@property (readonly, nonatomic) BOOL valueIsNumberOrTime;
@property (readonly, nonatomic) BOOL valueIsStringOrNumber;
@property (readonly, nonatomic) BOOL valueIsText;
@property (readonly, nonatomic) BOOL valueRepresentsDateWithoutTime;
@property (nonatomic) unsigned char valueType; // ivar: _valueType
@property (readonly, nonatomic) int writingDirection;


+(BOOL)cellFormatKindIsExpected:(unsigned char)arg0 ;
+(BOOL)cellValueTypeIsExpected:(unsigned char)arg0 ;
+(BOOL)formatType:(unsigned int)arg0 isSameCellFormatKindAs:(unsigned int)arg1 ;
+(BOOL)formatType:(unsigned int)arg0 isSameCellFormatKindAs:(unsigned int)arg1 allowNumberCurrencyMismatch:(BOOL)arg2 ;
+(BOOL)formatTypeIsExpected:(unsigned int)arg0 ;
+(BOOL)mismatchBetweenValueType:(unsigned char)arg0 andFormatType:(unsigned int)arg1 ;
+(BOOL)p_mismatchBetweenValueType:(unsigned char)arg0 andCellFormatKind:(unsigned char)arg1 ;
+(id)stringForCellValueType:(unsigned char)arg0 ;
+(unsigned char)p_cellFormatKindForValueType:(unsigned char)arg0 ;
-(BOOL)_validateCustomFormatWrapper:(id)arg0 ;
-(BOOL)coerceCellToFormatTypeUsingSpares:(unsigned int)arg0 ;
-(BOOL)coerceTextCellToBestNumberFormatUsingLimitedParsing:(BOOL)arg0 ;
-(BOOL)coerceToBaseFormat:(id)arg0 ;
-(BOOL)coerceToFormatType:(unsigned int)arg0 ;
-(BOOL)hasEqualContentToCell:(id)arg0 ;
-(BOOL)hasEqualContentToCell:(id)arg0 usingRichTextObjectComparisonBlock:(id)arg1 ;
-(BOOL)hasEqualValueToCell:(id)arg0 ;
-(BOOL)hasExplicitFormatOfType:(unsigned int)arg0 allowMismatchedSpare:(BOOL)arg1 ;
-(BOOL)hasFormatOfType:(unsigned int)arg0 allowMismatchedSpare:(BOOL)arg1 ;
-(BOOL)p_clearIfImplicitAndNotCurrentForKind:(unsigned char)arg0 format:(id)arg1 explicitFormatMask:(unsigned short)arg2 ;
-(BOOL)p_currentFormatIsEqualToOtherCellFormat:(id)arg0 ;
-(BOOL)p_formatTypeIsANumberFormatTypeForMostRecentlySet:(unsigned int)arg0 ;
-(BOOL)p_hasExplicitFormatOfCellFormatKind:(unsigned char)arg0 ;
-(BOOL)removeControlCellSpec;
-(BOOL)validateAndRepair;
-(id)candidateFormatForSliderStepperControlWithIsCurrent:(*BOOL)arg0 ;
-(id)cellByApplyingCellDiff:(id)arg0 toTable:(id)arg1 andUpdateInverse:(id)arg2 optionalConcurrentStylesheet:(id)arg3 ;
-(id)cellFillComparedToDefault:(id)arg0 suppressCS:(BOOL)arg1 isDefault:(*BOOL)arg2 ;
-(id)cellValueDescription;
-(id)cellValueTypeDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)formatForStorageFlag:(unsigned int)arg0 ;
-(id)formatOfCellFormatKind:(unsigned char)arg0 isExplicit:(*BOOL)arg1 ;
-(id)formatOfType:(unsigned int)arg0 allowMismatchedSpare:(BOOL)arg1 ;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithStorageRef:(struct TSTCellStorage *)arg0 dataStore:(id)arg1 ;
-(id)p_formatOfCellFormatKind:(unsigned char)arg0 create:(BOOL)arg1 created:(*BOOL)arg2 ;
-(id)reorganizeValueForSorting;
-(unsigned int)formatIDForStorageFlag:(unsigned int)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 supportsInlineAttachments:(BOOL)arg2 ;
-(void)applyFormulaResult:(struct TSCEValue *)arg0 ;
-(void)applyFormulaResult:(struct TSCEValue *)arg0 context:(id)arg1 hasWarnings:(BOOL)arg2 outWriteDidBeginOrEndWithTextCell:(*BOOL)arg3 propagateCheckboxesAndRatings:(BOOL)arg4 ;
-(void)applyPopupChoiceIndex:(NSUInteger)arg0 ;
-(void)bakeFormulaToValue;
-(void)clear;
-(void)clearAllFormats;
-(void)clearDataListIDs;
-(void)clearFormatOfType:(unsigned int)arg0 ;
-(void)clearStrokes;
-(void)clearValue;
-(void)copyAllFormatsToCell:(id)arg0 ;
-(void)copyJustStrokesToCell:(id)arg0 ;
-(void)copyJustStyleAndStrokesToCell:(id)arg0 ;
-(void)copyJustValueToCell:(id)arg0 ;
-(void)copyToCell:(id)arg0 ;
-(void)copyValueAndFormatToCell:(id)arg0 ;
-(void)inflateFromStorageRef:(struct TSTCellStorage *)arg0 dataStore:(id)arg1 ;
-(void)inflateFromStorageRef:(struct TSTCellStorage *)arg0 dataStore:(id)arg1 suppressingTransmutation:(BOOL)arg2 ;
-(void)p_TSTCellSetMostRecentlySetNumberFormatWithCurrencyFlag:(BOOL)arg0 ;
-(void)p_clearFormatOfCellFormatKind:(unsigned char)arg0 ;
-(void)p_setFormatExplicit:(BOOL)arg0 fromCellFormatKind:(unsigned char)arg1 setMostRecentlySet:(BOOL)arg2 ;
-(void)p_setFormatFlags:(unsigned short)arg0 explicit:(BOOL)arg1 ;
-(void)p_setFormatForFormulaResult:(id)arg0 propagation:(BOOL)arg1 ;
-(void)processCustomFormatsWithBlock:(id)arg0 ;
-(void)replaceContentWithParsableString:(id)arg0 tableInfo:(id)arg1 cellID:(struct TSUCellCoord )arg2 flags:(NSUInteger)arg3 outControlWasRemoved:(*BOOL)arg4 ;
-(void)setCurrencyOrNumberDecimalValue:(struct TSUDecimal *)arg0 ;
-(void)setCurrencyOrNumberDoubleValue:(CGFloat)arg0 ;
-(void)setDefaultFormatForValue;
-(void)setFormat:(id)arg0 isExplicit:(BOOL)arg1 ;
-(void)setFormat:(id)arg0 shouldSetExplFlags:(BOOL)arg1 isExplicit:(BOOL)arg2 makeCurrent:(BOOL)arg3 clearingID:(BOOL)arg4 ;
-(void)setFormatID:(unsigned int)arg0 forStorageFlag:(unsigned int)arg1 ;
-(void)setProvidedValueTypeBeforeUpgrade;
-(void)shallowCopyToCell:(id)arg0 ;
-(void)suggestCellFormatKind:(unsigned char)arg0 ;
-(void)updateCustomFormatFromPaste:(id)arg0 ;


@end


#endif