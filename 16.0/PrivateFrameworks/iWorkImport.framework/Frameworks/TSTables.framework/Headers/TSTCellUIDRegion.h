// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCELLUIDREGION_H
#define TSTCELLUIDREGION_H

@class TSKSosBase;



@interface TSTCellUIDRegion : TSKSosBase {
    ? _cellUIDRangeList;
}


@property (readonly, nonatomic) NSUInteger cellCount;
@property (readonly, nonatomic) BOOL isEmpty;


+(id)cellUIDRegionFromRegion:(id)arg0 inTable:(id)arg1 ;
+(id)cellUIDRegionFromRegion:(id)arg0 inTableModel:(id)arg1 ;
-(?)rowBasedSubRangesOfCellCount;
-(id)cellRegionFromTable:(id)arg0 ;
-(id)initFromMessage:(*void)arg0 ;
-(id)initWithCellUIDRange:(*void)arg0 ;
-(id)initWithCellUIDRangeVector:(*void)arg0 ;
-(id)pruneAgainstTable:(id)arg0 ;
-(void)enumerateCellUIDRangesUsingBlock:(id)arg0 ;
-(void)enumerateCellUIDUsingBlock:(id)arg0 ;
-(void)enumerateColumnUIDUsingBlock:(id)arg0 ;
-(void)enumerateRowUIDUsingBlock:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 ;


@end


#endif