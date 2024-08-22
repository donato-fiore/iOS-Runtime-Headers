// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPZONEDELETEREQUEST_H
#define CKDPZONEDELETEREQUEST_H

@class PBRequest, CKDPDate, CKDPRecordZoneIdentifier;
@protocol NSCopying;



@interface CKDPZoneDeleteRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasLastMissingManateeIdentityErrorDate;
@property (nonatomic) BOOL hasUserPurge;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPDate *lastMissingManateeIdentityErrorDate; // ivar: _lastMissingManateeIdentityErrorDate
@property (nonatomic) BOOL userPurge; // ivar: _userPurge
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