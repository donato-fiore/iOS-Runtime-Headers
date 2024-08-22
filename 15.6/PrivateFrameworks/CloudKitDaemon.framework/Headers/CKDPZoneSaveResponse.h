// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPZONESAVERESPONSE_H
#define CKDPZONESAVERESPONSE_H

@class PBCodable, CKDPDate;
@protocol NSCopying;


#import "CKDPZoneCapabilities.h"

@interface CKDPZoneSaveResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPZoneCapabilities *capabilities; // ivar: _capabilities
@property (retain, nonatomic) CKDPDate *expirationTime; // ivar: _expirationTime
@property (nonatomic) BOOL expired; // ivar: _expired
@property (readonly, nonatomic) BOOL hasCapabilities;
@property (readonly, nonatomic) BOOL hasExpirationTime;
@property (nonatomic) BOOL hasExpired;


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