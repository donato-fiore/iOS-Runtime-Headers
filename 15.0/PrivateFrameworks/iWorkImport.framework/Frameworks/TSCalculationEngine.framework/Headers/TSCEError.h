// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCEERROR_H
#define TSCEERROR_H

@class NSMutableDictionary, NSNumber, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCEAnyReference.h"
#import "TSCEWrappedRangeRef.h"

@interface TSCEError : NSObject <NSCopying>

 {
    NSMutableDictionary *_errorDictionary;
}


@property (nonatomic) BOOL afterMatch;
@property (retain, nonatomic) TSCEAnyReference *anyReference;
@property (retain, nonatomic) NSNumber *argIndex;
@property (retain, nonatomic) NSNumber *argIndex1;
@property (retain, nonatomic) NSNumber *argIndex2;
@property (nonatomic) BOOL argsAscending;
@property (nonatomic) BOOL attachmentErrorRaisedInTextCell;
@property (retain, nonatomic) NSNumber *chooseIndex;
@property (retain, nonatomic) NSNumber *dateAsTimeInterval;
@property (nonatomic) BOOL equalityPermitted;
@property (nonatomic) NSInteger errorType; // ivar: _errorType
@property (readonly, nonatomic) NSString *errorTypeKey;
@property (retain, nonatomic) NSNumber *extraInfoNumber;
@property (retain, nonatomic) NSString *extraInfoString;
@property (retain, nonatomic) NSString *functionName;
@property (nonatomic) BOOL invalidReferenceToMerge;
@property (retain, nonatomic) NSNumber *lowerBound;
@property (nonatomic) BOOL lowerBoundInclusive;
@property (retain, nonatomic) NSNumber *matchesFound;
@property (retain, nonatomic) NSNumber *maxArgsAllowed;
@property (retain, nonatomic) NSNumber *occurrence;
@property (nonatomic) TSKUIDStruct ownerUID;
@property (retain, nonatomic) NSString *previousMatch;
@property (nonatomic) BOOL previousValueIsRegex;
@property (retain, nonatomic) NSString *problemExpressionString;
@property (retain, nonatomic) NSString *problemMode;
@property (nonatomic) BOOL problemNodeIsCellReference;
@property (retain, nonatomic) NSNumber *providedArgs;
@property (retain, nonatomic) NSArray *referenceArray;
@property (nonatomic) BOOL referenceEndCellInvalid;
@property (retain, nonatomic) NSString *unitName;
@property (retain, nonatomic) NSNumber *upperBound;
@property (nonatomic) BOOL upperBoundInclusive;
@property (retain, nonatomic) NSString *valueToMatch;
@property (retain, nonatomic) TSCEWrappedRangeRef *wrappedRangeRef;


+(BOOL)errorForRichTextStorage:(id)arg0 outValue:(struct TSCEValue *)arg1 ;
+(BOOL)exceptionIsCircularReferenceError:(id)arg0 ;
+(BOOL)exceptionIsFromCalcEngine:(id)arg0 ;
+(BOOL)exceptionIsInvalidMergeReference:(id)arg0 ;
+(BOOL)exceptionIsRangeUsageError:(id)arg0 ;
+(BOOL)p_DictionaryRepresentsInvalidMergeReference:(id)arg0 ;
+(id)abortError;
+(id)attachmentError;
+(id)autoNumberAttachmentError;
+(id)circularReferenceError;
+(id)durationNotAllowedError:(id)arg0 argumentNumber:(int)arg1 ;
+(id)errorForErrorType:(NSInteger)arg0 ;
+(id)errorForErrorType:(NSInteger)arg0 functionName:(id)arg1 ;
+(id)errorForErrorType:(NSInteger)arg0 functionName:(id)arg1 argIndex:(int)arg2 ;
+(id)errorForToken:(id)arg0 ;
+(id)errorWithDictionary:(id)arg0 ;
+(id)indirectErrorForRangeReference:(struct TSCERangeRef )arg0 hostTableUID:(struct TSKUIDStruct *)arg1 ;
+(id)invalidAggregateColumnErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(id)invalidCurrencyPairError;
+(id)invalidDateManipulationError;
+(id)invalidGroupingColumnErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(id)invalidHistoricalCurrencyAttributeError;
+(id)invalidHistoricalDateError;
+(id)invalidHistoricalStockAttributeError;
+(id)invalidLiveCurrencyAttributeError;
+(id)invalidLiveStockAttributeError;
+(id)invalidMergeReference:(struct TSCERangeRef )arg0 contextEntityUID:(struct TSKUIDStruct *)arg1 ;
+(id)invalidReferenceError;
+(id)invalidReferenceNameAttributeError;
+(id)invalidStockCodeError:(id)arg0 ;
+(id)missingPivotTableErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(id)missingRunningTotalInFieldError;
+(id)noTradingInformationErrorWithNextAvailableDate:(id)arg0 ;
+(id)notAReferenceToAFormulaError;
+(id)notReadyError;
+(id)referenceToNonexistentTableError:(struct TSKUIDStruct )arg0 ;
+(id)remoteDataServerError;
+(id)remoteDataUnavailableErrorWithAttribute:(id)arg0 ;
+(id)sumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg0 ;
+(id)syntaxError;
+(id)typeErrorForValue:(struct TSCEValue )arg0 functionSpec:(id)arg1 argumentIndex:(int)arg2 locale:(id)arg3 ;
+(void)raiseAbortError;
+(void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseArgumentSetUsedOutOfContextError;
+(void)raiseArrayElementNoDataError;
+(void)raiseAttachmentErrorInTextCell:(BOOL)arg0 ;
+(void)raiseAutoNumberAttachmentErrorInTextCell:(BOOL)arg0 ;
+(void)raiseCharInputOutOfBoundsError;
+(void)raiseCircularReferenceErrorWithReference:(id)arg0 ;
+(void)raiseComparisonTypeExceptionForLeftType:(char)arg0 rightType:(char)arg1 ;
+(void)raiseConvertOriginUnitMismatchError;
+(void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseDataInvalidDimensionsError;
+(void)raiseDataInvalidLengthError;
+(void)raiseDataInvalidWidthError;
+(void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg0 ;
+(void)raiseDifferentDimensionsErrorForFunctionName:(id)arg0 ;
+(void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg0 ;
+(void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg0 ;
+(void)raiseDisallowedStockModeError:(id)arg0 ;
+(void)raiseDivideByZeroError;
+(void)raiseDurationDisallowedForNormdistPDFError;
+(void)raiseDurationNotAllowedError:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseEmptyArgumentError;
+(void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg0 ;
+(void)raiseEmptyArrayError;
+(void)raiseErrorForError:(id)arg0 ;
+(void)raiseErrorForInvalidReference;
+(void)raiseErrorForInvalidReference:(struct TSCERangeRef )arg0 orString:(id)arg1 contextEntityUID:(struct TSKUIDStruct *)arg2 ;
+(void)raiseErrorForInvalidReference:(struct TSCERangeRef )arg0 orString:(id)arg1 contextEntityUID:(struct TSKUIDStruct *)arg2 invalidMergeReference:(BOOL)arg3 disqualifiedFromEndCell:(BOOL)arg4 ;
+(void)raiseIndirectErrorForRangeReference:(struct TSCERangeRef )arg0 hostTableUID:(struct TSKUIDStruct *)arg1 ;
+(void)raiseInvalidAltitudeError;
+(void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg0 argIndex1:(int)arg1 argIndex2:(int)arg2 ;
+(void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg0 hasInitialUnrelatedArgument:(BOOL)arg1 ;
+(void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg0 argIndex1:(int)arg1 argIndex2:(int)arg2 argsAscending:(BOOL)arg3 equalityPermitted:(BOOL)arg4 ;
+(void)raiseInvalidArgumentsErrorForFunctionName:(id)arg0 argumentIndex:(int)arg1 ;
+(void)raiseInvalidArrayContentsError;
+(void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg0 base:(short)arg1 ;
+(void)raiseInvalidComparisonError;
+(void)raiseInvalidCurrencyComparisonError;
+(void)raiseInvalidDateError;
+(void)raiseInvalidDateManipulationError;
+(void)raiseInvalidFrequencyErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseInvalidHeadingError;
+(void)raiseInvalidHistoricalCurrencyAttributeError;
+(void)raiseInvalidHistoricalDateError;
+(void)raiseInvalidHistoricalStockAttributeError;
+(void)raiseInvalidHyperlinkError;
+(void)raiseInvalidIndexForChooseError:(int)arg0 ;
+(void)raiseInvalidIntersectionError:(struct vector<TSCEReferenceValue, std::allocator<TSCEReferenceValue>> )arg0 hostTableUID:(struct TSKUIDStruct *)arg1 calcEngine:(id)arg2 ;
+(void)raiseInvalidLatitudeLongitudeError;
+(void)raiseInvalidLiveCurrencyAttributeError;
+(void)raiseInvalidLiveStockAttributeError;
+(void)raiseInvalidMatchModeError;
+(void)raiseInvalidProbabilityErrorForFunctionName:(id)arg0 ;
+(void)raiseInvalidRangeUsageErrorForReference:(struct TSCERangeRef )arg0 ;
+(void)raiseInvalidReferenceNameAttributeError;
+(void)raiseInvalidRegexError:(id)arg0 ;
+(void)raiseInvalidSubtotalFunctionNumberError;
+(void)raiseInvalidTailErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseInvalidTimeError;
+(void)raiseInvalidTokenInFormulaError;
+(void)raiseInvalidTypeErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseInvalidUnitStringError:(id)arg0 ;
+(void)raiseLinestHighlyCorrelatedVariableError;
+(void)raiseLinestMatrixUnderdeterminedError;
+(void)raiseLocationHeadingFailureError;
+(void)raiseLocationHeadingUnknownError;
+(void)raiseLocationNetworkError;
+(void)raiseLocationServicesNotEnabledError;
+(void)raiseLocationUnknownError;
+(void)raiseLocationUserDeniedError;
+(void)raiseMatchNotFoundErrorForValue:(id)arg0 isRegex:(BOOL)arg1 afterMatch:(BOOL)arg2 previousValueToMatch:(id)arg3 previousValueIsRegex:(BOOL)arg4 occurrence:(int)arg5 matchesFound:(int)arg6 functionName:(id)arg7 ;
+(void)raiseMatchNotFoundErrorForValue:(id)arg0 isRegex:(BOOL)arg1 functionName:(id)arg2 ;
+(void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg0 ;
+(void)raiseMismatchedMaxUnitsError;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg0 ;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg0 argumentNumberString:(id)arg1 ;
+(void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg0 ;
+(void)raiseMultipleDurationsErrorForFunctionName:(id)arg0 ;
+(void)raiseNegativeReceivedAmountError;
+(void)raiseNegativeVectorValueErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseNoConditionIsTrueErrorForFunctionName:(id)arg0 ;
+(void)raiseNoModeError;
+(void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg0 requiredType:(char)arg1 ;
+(void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg0 ;
+(void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg0 ;
+(void)raiseNotAReferenceErrorForFunctionName:(id)arg0 ;
+(void)raiseNotAReferenceToAFormulaError;
+(void)raiseNotAVectorError;
+(void)raiseNotEnoughInputsErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 required:(int)arg2 ;
+(void)raiseNotReadyError;
+(void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg0 ;
+(void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg0 ;
+(void)raiseNumberError;
+(void)raiseNumberErrorForFunctionName:(id)arg0 ;
+(void)raiseNumberMinusDateError;
+(void)raiseNumberSmallerThanZeroError;
+(void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg0 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg0 functionName:(id)arg1 lowerBound:(CGFloat)arg2 lowerBoundInclusive:(BOOL)arg3 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg0 functionName:(id)arg1 lowerBound:(CGFloat)arg2 lowerBoundInclusive:(BOOL)arg3 upperBound:(CGFloat)arg4 upperBoundInclusive:(BOOL)arg5 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg0 functionName:(id)arg1 upperBound:(CGFloat)arg2 upperBoundInclusive:(BOOL)arg3 ;
+(void)raisePercentRankExcInputOutOfRangeError;
+(void)raisePercentRankInputOutOfRangeError;
+(void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg0 ;
+(void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg0 ;
+(void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg0 rangeReference:(struct TSCERangeRef )arg1 ;
+(void)raiseRemoteDataUnavailableErrorWithAttribute:(id)arg0 ;
+(void)raiseSignsMustMatchErrorForFunctionName:(id)arg0 ;
+(void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg0 ;
+(void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg0 string:(id)arg1 ;
+(void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg0 string:(id)arg1 ;
+(void)raiseStringTooLongError;
+(void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg0 ;
+(void)raiseTooFewDataPointsErrorForFunctionName:(id)arg0 ;
+(void)raiseTooManyArguments:(id)arg0 maximum:(int)arg1 provided:(int)arg2 ;
+(void)raiseTypeExceptionForValue:(struct TSCEValue )arg0 functionSpec:(id)arg1 argumentIndex:(int)arg2 locale:(id)arg3 ;
+(void)raiseUnionInsideIntersectionError;
+(void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseUnknownFunctionErrorForString:(id)arg0 ;
+(void)raiseUnsupportedFeatureError;
+(void)raiseUnsupportedFunctionError;
+(void)raiseUnsupportedR1C1StyleError;
+(void)raiseValueErrorForFunctionName:(id)arg0 ;
+(void)raiseValueNotAvailableErrorForFunctionName:(id)arg0 ;
+(void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg0 argumentNumber:(int)arg1 ;
+(void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg0 provided:(int)arg1 ;
+(void)raiseZeroToPowerOfZeroError;
-(BOOL)boolean;
-(BOOL)booleanForFunction:(id)arg0 argumentIndex:(int)arg1 warningReportingContext:(struct TSCEWarningReportingContext *)arg2 ;
-(BOOL)errorIsRangeUsageError;
-(BOOL)isAbortedError;
-(BOOL)isCircularReferenceError;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isErrorReferenceError;
-(BOOL)isFromCalcEngine;
-(BOOL)isInvalidMergeReference;
-(BOOL)isInvalidReferenceError;
-(BOOL)isMismatchedUnitsError;
-(BOOL)isNativelyEqual:(struct TSCEValue )arg0 ;
-(BOOL)isNotReadyError;
-(BOOL)isUnsupportedFeatureError;
-(BOOL)isUnsupportedFunctionError;
-(CGFloat)doubleValue;
-(char)deepType;
-(char)nativeType;
-(id)bakedString;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)date;
-(id)dateForFunction:(id)arg0 argumentIndex:(int)arg1 warningReportingContext:(struct TSCEWarningReportingContext *)arg2 ;
-(id)dateValue;
-(id)displayStringWithCalculationEngine:(id)arg0 forTable:(struct TSKUIDStruct )arg1 andCellID:(struct TSUCellCoord )arg2 ;
-(id)error;
-(id)errorDictionary;
-(id)initWithErrorType:(NSInteger)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)string;
-(id)stringForFunction:(id)arg0 argumentIndex:(int)arg1 warningReportingContext:(struct TSCEWarningReportingContext *)arg2 ;
-(id)stringValue;
-(id)tokenString;
-(struct TSCEGrid )formattedGridForFunction:(id)arg0 argumentIndex:(int)arg1 context:(struct TSCEEvaluationContext *)arg2 format:(struct TSCEFormat *)arg3 ;
-(struct TSCEGrid *)vector;
-(struct TSCENumberValue *)number;
-(struct TSCENumberValue *)numberForFunction:(id)arg0 argumentIndex:(int)arg1 warningReportingContext:(struct TSCEWarningReportingContext *)arg2 ;
-(struct TSCERangeRef )rangeRef;
-(struct TSCEReferenceValue *)referenceValue;
-(struct TSCEReferenceValue *)referenceValueForFunction:(id)arg0 argumentIndex:(int)arg1 warningReportingContext:(struct TSCEWarningReportingContext *)arg2 ;
-(void)raiseException;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif