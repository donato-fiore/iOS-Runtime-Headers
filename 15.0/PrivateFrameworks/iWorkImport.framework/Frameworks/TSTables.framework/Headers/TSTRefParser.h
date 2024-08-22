// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTREFPARSER_H
#define TSTREFPARSER_H

@class TSCECalculationEngine, NSString, NSCharacterSet;
@protocol TSCERefParsingProtocol;

#import <Foundation/Foundation.h>


@interface TSTRefParser : NSObject <TSCERefParsingProtocol>



@property (readonly, weak, nonatomic) TSCECalculationEngine *calcEngine; // ivar: _calcEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSCharacterSet *whitespaceCharSet; // ivar: _whitespaceCharSet


+(id)p_baseReferenceForChromeReference:(id)arg0 calcEngine:(id)arg1 ;
+(id)p_baseReferencesForChromeReferences:(id)arg0 calcEngine:(id)arg1 ;
+(id)p_chromeReferenceForBaseReference:(id)arg0 calcEngine:(id)arg1 ;
+(id)p_chromeReferencesForMixedReferences:(id)arg0 calcEngine:(id)arg1 ;
+(struct RefTypeHolder<TSCERangeRef, 0> )p_baseRangeRefForChromeRangeRef:(struct RefTypeHolder<TSCERangeRef, 2> )arg0 calcEngine:(id)arg1 ;
+(struct RefTypeHolder<TSCERangeRef, 2> )p_chromeRangeRefForBaseRangeRef:(struct RefTypeHolder<TSCERangeRef, 0> )arg0 calcEngine:(id)arg1 ;
-(BOOL)p_parseComponentsOfReference:(id)arg0 gettingSheetName:(*id)arg1 gettingTableName:(*id)arg2 gettingRest:(*id)arg3 ;
-(id)initWithCalcEngine:(id)arg0 ;
-(id)p_parseAsCategoryRefWithSheet:(id)arg0 tableName:(id)arg1 columnNameAndGroupValuesStartAt:(NSUInteger)arg2 withParsingContext:(id)arg3 ;
-(id)parseAsCategoryRefWithParsingContext:(id)arg0 ;
-(id)parseAsChromeRefWithParsingContext:(id)arg0 ;
-(id)parseAsTractRefWithParsingContext:(id)arg0 ;
-(id)parseStringAsCategoryRef:(id)arg0 withParsingContext:(id)arg1 ;
-(struct RefTypeHolder<TSCERangeRef, 0> )parseStringAsBaseReference:(id)arg0 withParsingContext:(id)arg1 ;
-(struct RefTypeHolder<TSCERangeRef, 2> )p_parseStringAsReferenceComponentIntersection:(id)arg0 inResolver:(struct TSCETableResolver *)arg1 inTableNamed:(id)arg2 preferredGeometricResolver:(struct TSCETableResolver *)arg3 withParsingContext:(id)arg4 ;
-(struct RefTypeHolder<TSCERangeRef, 2> )parseStringAsChromeReference:(id)arg0 withParsingContext:(id)arg1 ;
-(struct TSCERangeRef )parseR1C1Reference:(id)arg0 containingCell:(struct TSCECellRef *)arg1 preserveFlagsOut:(struct TSUPreserveFlags *)arg2 ;
-(struct TSKUIDStruct )p_findFirstColumnNameInComponent:(id)arg0 tableName:(id)arg1 refResolver:(id)arg2 calcEngine:(id)arg3 outPreserveFlags:(struct TSUPreserveFlags *)arg4 usedWordCount:(*NSUInteger)arg5 ;
-(struct TSUCellCoord )parseR1C1Coord:(id)arg0 containingCell:(struct TSCECellRef *)arg1 preserveFlagsOut:(struct TSUPreserveFlags *)arg2 ;
-(struct TSUChromeCellCoord )p_parseStringAsGeometricReferenceComponent:(id)arg0 inResolver:(struct TSCETableResolver *)arg1 outPreserveFlags:(struct TSUPreserveFlags *)arg2 gettingReferencesMatchingInputAsPrefix:(*id)arg3 ;


@end


#endif