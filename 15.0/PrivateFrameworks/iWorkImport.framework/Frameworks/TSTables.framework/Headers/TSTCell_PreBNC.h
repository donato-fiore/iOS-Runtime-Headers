// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTCELL_PREBNC_H
#define TSTCELL_PREBNC_H

@class TSKFormat, TSDFill, TSDCommentStorage, NSString, NSDate, TSWPParagraphStyle, TSCEFormulaObject, TSWPStorage, TSULocale;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSTCellBorder.h"
#import "TSTCellSpec.h"
#import "TSTCellStyle.h"
#import "TSTConditionalStyleSet.h"
#import "TSTImportWarningSet.h"

@interface TSTCell_PreBNC : NSObject <NSCopying>

 {
    CGFloat _valueDouble;
    unsigned int _valueID;
    NSObject *_valueObject;
}


@property (readonly, nonatomic) TSKFormat *baseFormat; // ivar: _baseFormat
@property (nonatomic) unsigned int baseFormatID; // ivar: _baseFormatID
@property (nonatomic) BOOL boolValue;
@property (retain, nonatomic) TSTCellBorder *cellBorder; // ivar: _cellBorder
@property (readonly, nonatomic) TSDFill *cellFill;
@property (nonatomic) unsigned short cellFlags; // ivar: _cellFlags
@property (retain, nonatomic) TSTCellSpec *cellSpec; // ivar: _cellSpec
@property (readonly, nonatomic) TSTCellSpec *cellSpecForDiff;
@property (retain, nonatomic) TSTCellStyle *cellStyle; // ivar: _cellStyle
@property (nonatomic) unsigned int cellStyleID; // ivar: _cellStyleID
@property (retain, nonatomic) TSDCommentStorage *commentStorage; // ivar: _commentStorage
@property (nonatomic) unsigned int commentStorageID; // ivar: _commentStorageID
@property (retain, nonatomic) TSTConditionalStyleSet *conditionalStyle; // ivar: _conditionalStyle
@property (nonatomic) unsigned char conditionalStyleAppliedRule; // ivar: _conditionalStyleAppliedRule
@property (nonatomic) unsigned int conditionalStyleID; // ivar: _conditionalStyleID
@property (readonly, nonatomic) TSKFormat *controlFormat; // ivar: _controlFormat
@property (nonatomic) unsigned int controlFormatID; // ivar: _controlFormatID
@property (readonly, nonatomic) TSKFormat *currencyFormat; // ivar: _currencyFormat
@property (nonatomic) unsigned int currencyFormatID; // ivar: _currencyFormatID
@property (readonly, nonatomic) TSKFormat *currentFormat; // ivar: _currentFormat
@property (nonatomic) unsigned int currentFormatID; // ivar: _currentFormatID
@property (readonly, nonatomic) BOOL currentFormatIsExplicit;
@property (readonly, nonatomic) unsigned char currentFormatNegativeStyle;
@property (readonly, nonatomic) BOOL currentFormatUsesAccountingStyle;
@property (readonly, nonatomic) TSKFormat *customFormat; // ivar: _customFormat
@property (nonatomic) unsigned int customFormatID; // ivar: _customFormatID
@property (readonly, nonatomic) NSString *customFormatString;
@property (readonly, nonatomic) BOOL dataIsReplaceable;
@property (readonly, nonatomic) TSKFormat *dateFormat; // ivar: _dateFormat
@property (nonatomic) unsigned int dateFormatID; // ivar: _dateFormatID
@property (retain, nonatomic) NSDate *dateValue;
@property (nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) TSKFormat *durationFormat; // ivar: _durationFormat
@property (nonatomic) unsigned int durationFormatID; // ivar: _durationFormatID
@property (nonatomic) CGFloat durationTimeIntervalValue;
@property (readonly, nonatomic) TSWPParagraphStyle *effectiveTextStyle;
@property (nonatomic) unsigned short explicitFormatFlags; // ivar: _explicitFormatFlags
@property (readonly, nonatomic) unsigned int formatType;
@property (readonly, nonatomic) NSString *formattedValue;
@property (retain, nonatomic) TSCEFormulaObject *formula;
@property (nonatomic) unsigned int formulaID; // ivar: _formulaID
@property (retain, nonatomic) TSWPStorage *formulaSyntaxError;
@property (nonatomic) unsigned int formulaSyntaxErrorID;
@property (readonly, nonatomic) NSString *formulaSyntaxErrorString;
@property (readonly, nonatomic) BOOL hasAnyFormats;
@property (readonly, nonatomic) BOOL hasCellSpec;
@property (readonly, nonatomic) BOOL hasCellStyle;
@property (readonly, nonatomic) BOOL hasCommentStorage;
@property (readonly, nonatomic) BOOL hasConditionalStyle;
@property (readonly, nonatomic) BOOL hasControl;
@property (readonly, nonatomic) BOOL hasCurrentFormat;
@property (readonly, nonatomic) BOOL hasFormula;
@property (readonly, nonatomic) BOOL hasFormulaAnyError;
@property (readonly, nonatomic) BOOL hasFormulaEvaluationError;
@property (readonly, nonatomic) BOOL hasFormulaSyntaxError;
@property (readonly, nonatomic) BOOL hasImportWarningSet;
@property (readonly, nonatomic) BOOL hasMismatchedFormatAndValue;
@property (readonly, nonatomic) BOOL hasRichText;
@property (readonly, nonatomic) BOOL hasTextStyle;
@property (readonly, nonatomic) BOOL hasValueOrError;
@property (retain, nonatomic) TSTImportWarningSet *importWarningSet; // ivar: _importWarningSet
@property (nonatomic) unsigned int importWarningSetID; // ivar: _importWarningSetID
@property (readonly, nonatomic) unsigned int interactionType;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isEmptyForDataStore;
@property (readonly, nonatomic) BOOL isMostRecentlyExplicitPercent;
@property (readonly, nonatomic) TSULocale *locale; // ivar: _locale
@property (readonly, nonatomic) TSKFormat *multipleChoiceListFormat; // ivar: _multipleChoiceListFormat
@property (nonatomic) unsigned int multipleChoiceListFormatID; // ivar: _multipleChoiceListFormatID
@property (readonly, nonatomic) TSKFormat *numberFormat; // ivar: _numberFormat
@property (nonatomic) unsigned int numberFormatID; // ivar: _numberFormatID
@property (nonatomic) unsigned int richTextID;
@property (readonly, nonatomic) TSWPStorage *richTextStorageForLayout;
@property (retain, nonatomic) TSWPStorage *richTextValue;
@property (readonly, nonatomic) NSString *stringForEditing;
@property (readonly, nonatomic) NSString *stringForUnderlyingValue;
@property (nonatomic) unsigned int stringID;
@property (retain, nonatomic) NSString *stringValue;
@property (retain, nonatomic) TSWPParagraphStyle *textStyle; // ivar: _textStyle
@property (nonatomic) unsigned int textStyleID; // ivar: _textStyleID
@property (readonly, nonatomic) BOOL valueIsNumberOrTime;
@property (readonly, nonatomic) BOOL valueIsStringOrNumber;
@property (readonly, nonatomic) BOOL valueIsText;
@property (nonatomic) unsigned char valueType; // ivar: _valueType
@property (readonly, nonatomic) int writingDirection;


+(BOOL)formatType:(unsigned int)arg0 sharesASpareSlotWithFormatType:(unsigned int)arg1 ;
+(BOOL)hasASlotForFormatType:(unsigned int)arg0 ;
+(BOOL)mismatchBetweenValueType:(unsigned char)arg0 andFormatType:(unsigned int)arg1 ;
+(BOOL)p_TSTCellFormatIsANumberFormatTypeForMostRecentlySet:(unsigned int)arg0 ;
+(id)stringForCellValueType:(unsigned char)arg0 ;
-(BOOL)clearNoncurrentImplicitFormats;
-(BOOL)hasEqualContentToCell:(id)arg0 ;
-(BOOL)hasEqualContentToCell:(id)arg0 usingRichTextObjectComparisonBlock:(id)arg1 ;
-(BOOL)hasEqualValueToCell:(id)arg0 ;
-(BOOL)hasExplicitFormatOfType:(unsigned int)arg0 allowMismatchedSpare:(BOOL)arg1 ;
-(BOOL)hasFormatOfType:(unsigned int)arg0 allowMismatchedSpare:(BOOL)arg1 ;
-(BOOL)p_currentFormatIsEqualToOtherCellFormat:(id)arg0 ;
-(id)cellFillComparedToDefault:(id)arg0 suppressCS:(BOOL)arg1 isDefault:(*BOOL)arg2 ;
-(id)cellValueDescription;
-(id)cellValueTypeDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLocale:(id)arg0 ;
-(id)initWithStorageRef:(struct ? *)arg0 dataStore:(id)arg1 ;
-(id)p_spareFormatOfType:(unsigned int)arg0 allowMismatchedSpare:(BOOL)arg1 explicitOnly:(BOOL)arg2 ;
-(id)spareFormatOfType:(unsigned int)arg0 allowMismatchedSpare:(BOOL)arg1 ;
-(id)upgradedBraveNewCell;
-(int)p_mostRecentlySetDateFormatType;
-(int)p_mostRecentlySetNumberFormatType;
-(int)p_mostRecentlySetTextFormatType;
-(void)applyPopupChoiceIndex:(NSUInteger)arg0 ;
-(void)bakeFormulaToValue;
-(void)clear;
-(void)clearAllFormats;
-(void)clearDataListIDs;
-(void)clearSpareFormatOfType:(unsigned int)arg0 ;
-(void)clearStrokes;
-(void)clearValue;
-(void)copyAllFormatsToCell:(id)arg0 ;
-(void)copyJustStrokesToCell:(id)arg0 ;
-(void)copyJustStyleAndStrokesToCell:(id)arg0 ;
-(void)copyToCell:(id)arg0 ;
-(void)inflateFromStorageRef:(struct ? *)arg0 dataStore:(id)arg1 ;
-(void)inflateFromStorageRef:(struct ? *)arg0 dataStore:(id)arg1 suppressingTransmutation:(BOOL)arg2 ;
-(void)p_TSTCellSetMostRecentlySetDateFormat:(int)arg0 ;
-(void)p_TSTCellSetMostRecentlySetNumberFormat:(int)arg0 ;
-(void)p_TSTCellSetMostRecentlySetTextFormat:(int)arg0 ;
-(void)p_setFormatExplicit:(BOOL)arg0 fromFormatType:(unsigned int)arg1 setMostRecentlySet:(BOOL)arg2 ;
-(void)p_setFormatFlags:(unsigned short)arg0 explicit:(BOOL)arg1 ;
-(void)p_setFormatForFormulaResult:(id)arg0 propagation:(BOOL)arg1 ;
-(void)setDefaultFormatForValue;
-(void)setFormat:(id)arg0 shouldSetExplFlags:(BOOL)arg1 isExplicit:(BOOL)arg2 makeCurrent:(BOOL)arg3 clearingID:(BOOL)arg4 ;
-(void)setSpareFormat:(id)arg0 isExplicit:(BOOL)arg1 ;
-(void)updateCustomFormatFromPaste:(id)arg0 ;


@end


#endif