// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCERANGEPRECEDENTSTILE_H
#define TSCERANGEPRECEDENTSTILE_H

@class TSPObject;



@interface TSCERangePrecedentsTile : TSPObject {
    map<TSUCellCoord, std::set<TSUCellRect>, std::less<TSUCellCoord>, std::allocator<std::pair<const TSUCellCoord, std::set<TSUCellRect>>>> _fromCoordToReferRect;
}


@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) NSUInteger numRangeRecords;
@property (readonly, nonatomic) unsigned short toInternalOwnerID; // ivar: _toInternalOwnerID


-(BOOL)containsFromCoord:(struct TSUCellCoord *)arg0 ;
-(BOOL)containsRect:(struct TSUCellRect *)arg0 fromCoord:(struct TSUCellCoord *)arg1 ;
-(id)description;
-(id)initWithOwnerId:(unsigned short)arg0 context:(id)arg1 ;
-(void)addRect:(struct TSUCellRect *)arg0 fromCoord:(struct TSUCellCoord *)arg1 ;
-(void)enumerateAllRanges:(id)arg0 ;
-(void)enumerateAllRangesForFromCoord:(struct TSUCellCoord *)arg0 usingBlock:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)removeRect:(struct TSUCellRect *)arg0 fromCoord:(struct TSUCellCoord *)arg1 ;
-(void)removeRectsForFromCoord:(struct TSUCellCoord *)arg0 ;
-(void)saveToArchiver:(id)arg0 ;


@end


#endif