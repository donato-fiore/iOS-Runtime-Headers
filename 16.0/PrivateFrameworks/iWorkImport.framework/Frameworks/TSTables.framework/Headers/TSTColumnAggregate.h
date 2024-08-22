// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTCOLUMNAGGREGATE_H
#define TSTCOLUMNAGGREGATE_H

@class TSKSosBase;
@protocol NSCopying;



@interface TSTColumnAggregate : TSKSosBase <NSCopying>

 {
    UUIDData<TSP::UUIDData> _columnUid;
    UUIDData<TSP::UUIDData> _columnAggregateUid;
    UUIDData<TSP::UUIDData> _runningTotalGroupingColumnUid;
    BOOL _definedColumnAggregateUid;
    BOOL _definedRunningTotalGroupingColumnUid;
}


@property (nonatomic) unsigned char aggregateType; // ivar: _aggregateType
@property (readonly, nonatomic) TSKUIDStruct columnAggregateUid;
@property (readonly, nonatomic) TSKUIDStruct columnUid;
@property (readonly, nonatomic) int level; // ivar: _level
@property (readonly, nonatomic) TSKUIDStruct runningTotalGroupingColumnUid;
@property (readonly, nonatomic) unsigned char showAsType; // ivar: _showAsType


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initAsEmptyAggregate;
-(id)initForCategoriesWithColumnUid:(struct TSKUIDStruct )arg0 aggregateType:(unsigned char)arg1 level:(int)arg2 ;
-(id)initForPivotWithColumnAggregateUid:(struct TSKUIDStruct )arg0 columnUid:(struct TSKUIDStruct )arg1 aggregateType:(unsigned char)arg2 showAsType:(unsigned char)arg3 runningTotalGroupingColumnUid:(struct TSKUIDStruct )arg4 ;
-(id)initForPivotWithColumnUid:(struct TSKUIDStruct )arg0 aggregateType:(unsigned char)arg1 ;
-(id)initForPivotWithColumnUid:(struct TSKUIDStruct )arg0 aggregateType:(unsigned char)arg1 showAsType:(unsigned char)arg2 runningTotalGroupingColumnUid:(struct TSKUIDStruct )arg3 ;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithColumnAggregateUid:(struct TSKUIDStruct )arg0 columnUid:(struct TSKUIDStruct )arg1 aggregateType:(unsigned char)arg2 level:(int)arg3 showAsType:(unsigned char)arg4 runningTotalGroupingColumnUid:(struct TSKUIDStruct )arg5 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)getUUIDBytesForColumn:(unsigned char)arg0 ;
-(void)getUUIDBytesForColumnAggregate:(unsigned char)arg0 ;
-(void)getUUIDBytesForRunningTotalGroupingColumn:(unsigned char)arg0 ;


@end


#endif