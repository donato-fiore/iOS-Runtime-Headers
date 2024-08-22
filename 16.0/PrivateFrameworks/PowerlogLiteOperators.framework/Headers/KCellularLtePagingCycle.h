// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KCELLULARLTEPAGINGCYCLE_H
#define KCELLULARLTEPAGINGCYCLE_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularLtePagingCycle : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int earfcn; // ivar: _earfcn
@property (nonatomic) BOOL hasEarfcn;
@property (nonatomic) BOOL hasNbMs;
@property (nonatomic) BOOL hasPagingCycleMs;
@property (nonatomic) BOOL hasPhyCellId;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int nbMs; // ivar: _nbMs
@property (nonatomic) unsigned int pagingCycleMs; // ivar: _pagingCycleMs
@property (nonatomic) unsigned int phyCellId; // ivar: _phyCellId
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif