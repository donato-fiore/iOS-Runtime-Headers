// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTREFERENCENODE_H
#define TSTREFERENCENODE_H

@class NSString, TSKChangeNotifier, TSKDocumentRoot, TSTReferenceColorHelper;
@protocol NSCopying;


#import "TSTExpressionNode.h"
#import "TSCECalculationEngine.h"
#import "TSCECategoryRef.h"
#import "TSTGroupBy.h"
#import "TSTTableInfo.h"
#import "TSTUIDRectRef.h"

@interface TSTReferenceNode : TSTExpressionNode <NSCopying>

 {
    NSString *_refString;
    NSString *_formulaPlainText;
}


@property (readonly) TSUModelCellCoord baseBottomRightCoord;
@property (readonly) TSCERangeCoordinate baseBoundingBox;
@property (nonatomic) unsigned char basePreserveFlags;
@property (readonly) TSUModelCellCoord baseTopLeftCoord;
@property (nonatomic) BOOL cachedIsValidReference; // ivar: _cachedIsValidReference
@property (readonly, weak, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (retain, nonatomic) TSCECategoryRef *categoryRef; // ivar: _categoryRef
@property (readonly, nonatomic) TSKUIDStruct categoryRefTableUID;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (readonly, nonatomic) TSTGroupBy *groupBy;
@property (nonatomic) BOOL hasCachedIsValidReference; // ivar: _hasCachedIsValidReference
@property (nonatomic) TSCECellRef hostCellRef; // ivar: _hostCellRef
@property (nonatomic) TSKUIDStruct hostTableUID;
@property (nonatomic) BOOL isBlankForKeyboardInsertion; // ivar: _isBlankForKeyboardInsertion
@property (readonly, nonatomic) BOOL isCategoryRef; // ivar: _isCategoryRef
@property (readonly, nonatomic) BOOL isCategorySummaryRef;
@property (readonly, nonatomic) BOOL isLocalReference;
@property (readonly, nonatomic) BOOL isNonSpanningRangeExpression;
@property (readonly, nonatomic) BOOL isRangeExpression;
@property (readonly, nonatomic) BOOL isResizable;
@property (readonly, nonatomic) BOOL isSingleColumnSpanningReference;
@property (readonly, nonatomic) BOOL isSingleRowSpanningReference;
@property (readonly, nonatomic) BOOL isSpanningCategorySummaryRef;
@property (nonatomic) unsigned char rangeContext; // ivar: _rangeContext
@property (nonatomic, getter=isRangeWithFunction) BOOL rangeWithFunction; // ivar: _rangeWithFunction
@property (retain, nonatomic) TSTReferenceColorHelper *referenceColorHelper; // ivar: _referenceColorHelper
@property (readonly, nonatomic) BOOL spansAllColumns;
@property (readonly, nonatomic) BOOL spansAllRows;
@property (readonly, nonatomic) BOOL suppressAutomaticNamedReferenceInvalidation; // ivar: _suppressAutomaticNamedReferenceInvalidation
@property (readonly, nonatomic) BOOL suppressReferenceOptionsMenu;
@property (readonly, nonatomic) TSTTableInfo *tableInfo;
@property (readonly, nonatomic) TSKUIDStruct tableUID;
@property (readonly, nonatomic) TSTUIDRectRef *uidRectRef; // ivar: _uidRectRef
@property (readonly) TSUViewCellCoord viewBottomRightCoord;
@property (readonly) TSCERangeCoordinate viewBoundingBox;
@property (nonatomic) unsigned char viewPreserveFlags;
@property (readonly) TSUViewCellCoord viewTopLeftCoord;


+(BOOL)p_rangeRef:(struct TSCERangeRef *)arg0 isContainedWithinSummaryAndLabelRowsInTable:(id)arg1 ;
+(id)p_singleCategoryRefForViewRangeRef:(*void)arg0 rangeContext:(unsigned char)arg1 calculationEngine:(id)arg2 hostCellRef:(struct TSCECellRef *)arg3 ;
+(id)p_spanningCategoryRefForViewRangeRef:(*void)arg0 groupByUid:(struct TSKUIDStruct )arg1 categoryLevel:(unsigned char)arg2 calculationEngine:(id)arg3 ;
+(struct RefTypeHolder<TSCERangeRef, 1> )p_expandedViewRangeRefForViewRangeRef:(*void)arg0 forLabelRowsInTable:(id)arg1 ;
+(struct TSUCellRect )p_cellRangeForSingleCategoryRefInViewRangeRef:(*void)arg0 inTable:(id)arg1 rangeContext:(unsigned char)arg2 ;
+(unsigned char)preserveFlagsForReference:(struct TSCERangeRef *)arg0 calcEngine:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToExpressionNode:(id)arg0 ;
-(BOOL)isValidReference;
-(NSUInteger)hash;
-(id)baseTractRef;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)exportString;
-(id)formulaPlainText;
-(id)initAsCopyOf:(id)arg0 intoContext:(id)arg1 children:(id)arg2 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 baseRangeRef:(*void)arg2 preserveFlags:(unsigned char)arg3 hostCellRef:(struct TSCECellRef *)arg4 referenceColorHelper:(id)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 categoryRef:(id)arg2 hostCellRef:(struct TSCECellRef *)arg3 referenceColorHelper:(id)arg4 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 chromeRangeRef:(*void)arg2 preserveFlags:(unsigned char)arg3 hostCellRef:(*void)arg4 referenceColorHelper:(id)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 uidRectRef:(id)arg2 categoryRef:(id)arg3 hostCellRef:(struct TSCECellRef *)arg4 referenceColorHelper:(id)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 uidRectRef:(id)arg2 hostCellRef:(struct TSCECellRef *)arg3 referenceColorHelper:(id)arg4 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg5 ;
-(id)initWithContext:(id)arg0 calculationEngine:(id)arg1 viewRangeRef:(*void)arg2 preserveFlags:(unsigned char)arg3 hostCellRef:(*void)arg4 referenceColorHelper:(id)arg5 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg6 ;
-(id)initWithReferenceStart:(id)arg0 referenceEnd:(id)arg1 suppressAutomaticNamedReferenceInvalidation:(BOOL)arg2 ;
-(id)p_convertCategoryRefToRelativeForHostCell:(struct TSUCellCoord )arg0 ;
-(id)p_subregionForRange:(id)arg0 rangeContext:(unsigned char)arg1 ;
-(id)referenceAsStringWithContext:(id)arg0 ;
-(id)string;
-(id)subregionForRange:(id)arg0 ;
-(id)subregionForReference:(id)arg0 range:(id)arg1 ;
-(id)viewTractRef;
-(int)tokenType;
-(struct RefTypeHolder<TSCERangeRef, 1> )p_boundingViewRangeRef;
-(struct RefTypeHolder<TSCERangeRef, 1> )viewRangeRefDeprecated;
-(struct TSTCSENodeData )recordHashesForSubexpressions:(id)arg0 ;
-(void)buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 hostCell:(struct TSUCellCoord )arg1 symbolTable:(*void)arg2 ;
-(void)dealloc;
-(void)excludeSummaryAndLabelRows;
-(void)insertFormulaText:(id)arg0 includeWhitespace:(BOOL)arg1 ;
-(void)invalidate;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_buildASTNodeArray:(struct TSCEASTNodeArray *)arg0 forCoord:(struct TSUCellCoord )arg1 preserveFlags:(unsigned char)arg2 hostCell:(struct TSUCellCoord )arg3 ;
-(void)p_resetMenu;
-(void)processChanges:(id)arg0 forChangeSource:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setBaseRangeRef:(*void)arg0 preserveFlags:(unsigned char)arg1 ;
-(void)setChromeRangeRef:(*void)arg0 preserveFlags:(unsigned char)arg1 ;
-(void)setViewRangeRef:(*void)arg0 preserveFlags:(unsigned char)arg1 ;


@end


#endif