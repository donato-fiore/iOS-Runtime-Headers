// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EPTABLESTYLEFLATTENER_H
#define EPTABLESTYLEFLATTENER_H



#import "EPStyleFlattener.h"
#import "EDTable.h"

@interface EPTableStyleFlattener : EPStyleFlattener {
    EDTable *mTable;
    NSUInteger mHeaderRowCount;
    NSUInteger mTotalsRowCount;
}




-(BOOL)isObjectSupported:(id)arg0 ;
-(id)collectionFromWorksheet:(id)arg0 ;
-(id)keysInTheOrderTheyShouldBeApplied;
-(id)newExtractedCellStyleElements:(id)arg0 parentScope:(id)arg1 row:(int)arg2 column:(int)arg3 ;
-(id)newExtractedGlobalStyleElements:(id)arg0 ;
-(id)newExtractedRowStyleElements:(id)arg0 parentScope:(id)arg1 row:(int)arg2 ;
-(id)styleFromObject:(id)arg0 ;
-(int)borderFlagsForStyleType:(int)arg0 row:(int)arg1 column:(int)arg2 ;
-(int)stripeOffset:(int)arg0 row:(BOOL)arg1 ;
-(void)cacheSizes:(id)arg0 inObject:(id)arg1 ;
-(void)clearCache;


@end


#endif