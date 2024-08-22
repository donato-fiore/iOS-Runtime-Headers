// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KCELLULARCELLPLMNSEARCHCOUNT_H
#define KCELLULARCELLPLMNSEARCHCOUNT_H

@class PBCodable;
@protocol NSCopying;



@interface KCellularCellPlmnSearchCount : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int cdma1xSearchCount; // ivar: _cdma1xSearchCount
@property (nonatomic) unsigned int cdmaEvdoSearchCount; // ivar: _cdmaEvdoSearchCount
@property (nonatomic) unsigned int durationMs; // ivar: _durationMs
@property (nonatomic) unsigned int gsmSearchCount; // ivar: _gsmSearchCount
@property (nonatomic) BOOL hasCdma1xSearchCount;
@property (nonatomic) BOOL hasCdmaEvdoSearchCount;
@property (nonatomic) BOOL hasDurationMs;
@property (nonatomic) BOOL hasGsmSearchCount;
@property (nonatomic) BOOL hasLteSearchCount;
@property (nonatomic) BOOL hasSubsId;
@property (nonatomic) BOOL hasTdscdmaSearchCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUmtsSearchCount;
@property (nonatomic) unsigned int lteSearchCount; // ivar: _lteSearchCount
@property (nonatomic) unsigned int subsId; // ivar: _subsId
@property (nonatomic) unsigned int tdscdmaSearchCount; // ivar: _tdscdmaSearchCount
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) unsigned int umtsSearchCount; // ivar: _umtsSearchCount


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