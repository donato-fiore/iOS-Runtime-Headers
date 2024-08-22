// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPZONERETRIEVECHANGESRESPONSECHANGEDZONE_H
#define CKDPZONERETRIEVECHANGESRESPONSECHANGEDZONE_H

@class PBCodable, CKDPRecordZoneIdentifier;
@protocol NSCopying;


#import "CKDPAnonymousZoneInfo.h"
#import "CKDPZoneCapabilities.h"

@interface CKDPZoneRetrieveChangesResponseChangedZone : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPAnonymousZoneInfo *anonymousZoneInfo; // ivar: _anonymousZoneInfo
@property (retain, nonatomic) CKDPZoneCapabilities *capabilities; // ivar: _capabilities
@property (nonatomic) int changeType; // ivar: _changeType
@property (nonatomic) int deleteType; // ivar: _deleteType
@property (readonly, nonatomic) BOOL hasAnonymousZoneInfo;
@property (readonly, nonatomic) BOOL hasCapabilities;
@property (nonatomic) BOOL hasChangeType;
@property (nonatomic) BOOL hasDeleteType;
@property (nonatomic) BOOL hasIsAnonymous;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (nonatomic) BOOL isAnonymous; // ivar: _isAnonymous
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier; // ivar: _zoneIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)changeTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deleteTypeAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsChangeType:(id)arg0 ;
-(int)StringAsDeleteType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif