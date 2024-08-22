// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARWCDMARABSTATUS_H
#define KCELLULARWCDMARABSTATUS_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularWcdmaRabStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasHsRabCount;
@property (nonatomic) BOOL hasR99RabCount;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTotalRabCount;
@property (nonatomic) unsigned int hsRabCount; // ivar: _hsRabCount
@property (nonatomic) unsigned int r99RabCount; // ivar: _r99RabCount
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int totalRabCount; // ivar: _totalRabCount


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