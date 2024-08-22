// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EPPIVOTTABLESTYLEFLATTENER_H
#define EPPIVOTTABLESTYLEFLATTENER_H



#import "EPStyleFlattener.h"
#import "EDPivotTable.h"

@interface EPPivotTableStyleFlattener : EPStyleFlattener {
    EDPivotTable *mPivotTable;
    NSInteger mFirstHeaderRow;
    NSInteger mFirstDataRow;
    NSInteger mFirstDataColumn;
    NSUInteger mRowFieldsCount;
    NSUInteger mColumnFieldsCount;
    NSUInteger mPageFieldsCount;
}




-(BOOL)isObjectSupported:(id)arg0 ;
-(id)collectionFromWorksheet:(id)arg0 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(id)newExtractedCellStyleElements:(id)arg0 parentScope:(id)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)newExtractedRowStyleElements:(id)arg0 parentScope:(id)arg1 row:(int)arg2 ;
-(id)styleFromObject:(id)arg0 ;
-(int)borderFlagsForStyleType:(int)arg0 row:(int)arg1 column:(int)arg2 ;
-(int)stripeOffset:(int)arg0 row:(BOOL)arg1 ;
-(unsigned int)constrainLevel:(unsigned int)arg0 ;
-(void)addColumnSubheadingLevel:(unsigned int)arg0 to:(id)arg1 ;
-(void)addRowSubheadingLevel:(unsigned int)arg0 to:(id)arg1 ;
-(void)addSubtotalColumnLevel:(unsigned int)arg0 to:(id)arg1 ;
-(void)addSubtotalRowLevel:(unsigned int)arg0 to:(id)arg1 ;
-(void)cacheSizes:(id)arg0 inObject:(id)arg1 ;
-(void)clearCache;


@end


#endif