// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPZONECAPABILITIES_H
#define CKDPZONECAPABILITIES_H

@class PBCodable;
@protocol NSCopying;



@interface CKDPZoneCapabilities : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL atomicSaves; // ivar: _atomicSaves
@property (nonatomic) BOOL ckql; // ivar: _ckql
@property (nonatomic) BOOL fetchChanges; // ivar: _fetchChanges
@property (nonatomic) BOOL hasAtomicSaves;
@property (nonatomic) BOOL hasCkql;
@property (nonatomic) BOOL hasFetchChanges;
@property (nonatomic) BOOL hasHierarchicalSharing;
@property (nonatomic) BOOL hasSharingType;
@property (nonatomic) BOOL hasZoneSharing;
@property (nonatomic) BOOL hierarchicalSharing; // ivar: _hierarchicalSharing
@property (nonatomic) int sharingType; // ivar: _sharingType
@property (nonatomic) BOOL zoneSharing; // ivar: _zoneSharing


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)sharingTypeAsString:(int)arg0 ;
-(int)StringAsSharingType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif