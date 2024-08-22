// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPZONERETRIEVEREQUEST_H
#define CKDPZONERETRIEVEREQUEST_H

@class PBRequest, NSData, CKDPRecordZoneIdentifier;
@protocol NSCopying;



@interface CKDPZoneRetrieveRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *continuationMarker; // ivar: _continuationMarker
@property (readonly, nonatomic) BOOL hasContinuationMarker;
@property (nonatomic) BOOL hasOnlyFetchPCSInfo;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (nonatomic) BOOL onlyFetchPCSInfo; // ivar: _onlyFetchPCSInfo
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


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