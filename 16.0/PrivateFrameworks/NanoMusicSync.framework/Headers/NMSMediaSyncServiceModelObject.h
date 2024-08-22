// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSMEDIASYNCSERVICEMODELOBJECT_H
#define NMSMEDIASYNCSERVICEMODELOBJECT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NMSMediaSyncServiceModelObject : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int containerType; // ivar: _containerType
@property (retain, nonatomic) NSData *dataMultiverseID; // ivar: _dataMultiverseID
@property (nonatomic) BOOL hasContainerType;
@property (readonly, nonatomic) BOOL hasDataMultiverseID;


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