// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPZONERETRIEVECHANGESRESPONSE_H
#define CKDPZONERETRIEVECHANGESRESPONSE_H

@class PBCodable, NSMutableArray, NSData;
@protocol NSCopying;



@interface CKDPZoneRetrieveChangesResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *changedZones; // ivar: _changedZones
@property (nonatomic) BOOL hasStatus;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (nonatomic) int status; // ivar: _status
@property (retain, nonatomic) NSData *syncContinuationToken; // ivar: _syncContinuationToken


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changedZonesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusAsString:(int)arg0 ;
-(int)StringAsStatus:(id)arg0 ;
-(void)addChangedZones:(id)arg0 ;
-(void)clearChangedZones;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif