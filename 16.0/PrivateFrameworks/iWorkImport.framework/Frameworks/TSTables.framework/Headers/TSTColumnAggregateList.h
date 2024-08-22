// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCOLUMNAGGREGATELIST_H
#define TSTCOLUMNAGGREGATELIST_H

@class TSKSosBase, NSArray;
@protocol NSCopying;



@interface TSTColumnAggregateList : TSKSosBase <NSCopying>

 {
    NSArray *_columnAggregates;
}


@property (readonly, nonatomic) NSArray *asArray;
@property (readonly, nonatomic) NSArray *columnAggregateUuids;
@property (readonly, nonatomic) NSUInteger count;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFunctionallyEquivalent:(id)arg0 ;
-(id)aggregateAtIndex:(NSUInteger)arg0 ;
-(id)aggregatesOnLevel:(unsigned char)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithColumnAggregates:(id)arg0 ;
-(struct TSKUIDStructVectorTemplate<TSKUIDStruct> )columnAggregateUidList;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif