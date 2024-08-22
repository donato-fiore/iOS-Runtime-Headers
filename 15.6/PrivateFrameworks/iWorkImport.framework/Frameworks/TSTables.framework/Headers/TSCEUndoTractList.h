// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEUNDOTRACTLIST_H
#define TSCEUNDOTRACTLIST_H

@class NSMutableArray;
@protocol NSCopying, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface TSCEUndoTractList : NSObject <NSCopying, NSFastEnumeration>

 {
    NSMutableArray *_tracts;
}


@property (nonatomic) TSUPreserveFlags preserveFlags; // ivar: _preserveFlags


-(BOOL)hasFullTupleInformation;
-(BOOL)remapUsingColumnUidMap:(*void)arg0 rowUidMap:(*void)arg1 clearIfMissing:(BOOL)arg2 ;
-(BOOL)remapUsingUidMap:(*void)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)activeUidTract;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)excludedUidsTract;
-(id)firstTractWithPurpose:(unsigned char)arg0 ;
-(id)includedUidsTract;
-(id)initAsFullTupleForColumnHeaderUid:(struct TSKUIDStruct )arg0 rowHeaderUid:(struct TSKUIDStruct )arg1 aggregateRuleUid:(struct TSKUIDStruct )arg2 flatteningDimension:(int)arg3 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)preMergeUidTract;
-(id)preMoveRegionUidTract;
-(id)removedByMoveUidTract;
-(id)uidTractAtIndex:(unsigned char)arg0 ;
-(int)flatteningDimension;
-(struct TSKUIDStruct )aggregateRuleUid;
-(struct TSKUIDStruct )columnHeaderUid;
-(struct TSKUIDStruct )rowHeaderUid;
-(unsigned char)tractCount;
-(void)addRowColumnRuleValuePair:(struct TSKUIDStruct )arg0 valueUid:(struct TSKUIDStruct )arg1 ;
-(void)addToExcludedTractUids:(*void)arg0 isRows:(BOOL)arg1 ;
-(void)addToExcludedUidsTractColumnUids:(*void)arg0 ;
-(void)addToExcludedUidsTractRowUids:(*void)arg0 ;
-(void)addToIncludedUidsTractColumnUid:(struct TSKUIDStruct )arg0 rowUid:(struct TSKUIDStruct )arg1 ;
-(void)addToIncludedUidsTractColumnUids:(*void)arg0 rowUids:(*void)arg1 ;
-(void)addToIncludedUidsTractColumnUids:(*void)arg0 rowUids:(*void)arg1 isRangeRef:(BOOL)arg2 preserveRectangularRange:(BOOL)arg3 ;
-(void)addTractAtFront:(id)arg0 ;
-(void)appendUidTract:(id)arg0 ;
-(void)dropTract:(id)arg0 ;
-(void)enumerateRowColumnRuleValuePairsUsingBlock:(id)arg0 ;
-(void)pruneMergeUidTractsAtAndAboveIndex:(unsigned char)arg0 ;
-(void)removeFromExcludedUidsTractColumnUids:(*void)arg0 ;
-(void)removeFromExcludedUidsTractColumnUidsSet:(*void)arg0 ;
-(void)removeFromExcludedUidsTractRowUids:(*void)arg0 ;
-(void)removeFromExcludedUidsTractRowUidsSet:(*void)arg0 ;
-(void)saveToArchive:(*void)arg0 ;


@end


#endif