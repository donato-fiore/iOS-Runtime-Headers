// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOPASSSYNCSTATECHANGEPROCESSED_H
#define NPKPROTOPASSSYNCSTATECHANGEPROCESSED_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoPassSyncStateChangeProcessed : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *acceptedChangeUUID; // ivar: _acceptedChangeUUID
@property (nonatomic) BOOL changeAccepted; // ivar: _changeAccepted
@property (nonatomic) BOOL fullPassRequired; // ivar: _fullPassRequired
@property (nonatomic) BOOL hasChangeAccepted;
@property (nonatomic) BOOL hasFullPassRequired;


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