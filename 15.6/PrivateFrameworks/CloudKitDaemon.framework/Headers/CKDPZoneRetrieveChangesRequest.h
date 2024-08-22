// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPZONERETRIEVECHANGESREQUEST_H
#define CKDPZONERETRIEVECHANGESREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxChangedZones;
@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (nonatomic) unsigned int maxChangedZones; // ivar: _maxChangedZones
@property (retain, nonatomic) NSData *syncContinuationToken; // ivar: _syncContinuationToken


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif