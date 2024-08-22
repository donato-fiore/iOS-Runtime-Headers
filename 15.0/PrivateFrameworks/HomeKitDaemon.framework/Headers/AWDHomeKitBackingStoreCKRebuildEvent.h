// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITBACKINGSTORECKREBUILDEVENT_H
#define AWDHOMEKITBACKINGSTORECKREBUILDEVENT_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitBackingStoreCKRebuildEvent : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int containerType; // ivar: _containerType
@property (nonatomic) BOOL hasContainerType;
@property (nonatomic) BOOL hasRebuildStatus;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasZoneType;
@property (nonatomic) int rebuildStatus; // ivar: _rebuildStatus
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (nonatomic) int zoneType; // ivar: _zoneType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)rebuildStatusAsString:(int)arg0 ;
-(id)zoneTypeAsString:(int)arg0 ;
-(int)StringAsContainerType:(id)arg0 ;
-(int)StringAsRebuildStatus:(id)arg0 ;
-(int)StringAsZoneType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif