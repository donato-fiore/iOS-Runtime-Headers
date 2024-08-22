// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMEDIASYNCSERVICEREMOVEMEDIA_H
#define NMSMEDIASYNCSERVICEREMOVEMEDIA_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NMSMediaSyncServiceRemoveMedia : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int containerType; // ivar: _containerType
@property (retain, nonatomic) NSData *dataMultiverseID; // ivar: _dataMultiverseID
@property (nonatomic) BOOL hasContainerType;
@property (readonly, nonatomic) BOOL hasDataMultiverseID;
@property (nonatomic) BOOL hasTargetPersistentID;
@property (nonatomic) NSInteger targetPersistentID; // ivar: _targetPersistentID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)containerTypeAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsContainerType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif