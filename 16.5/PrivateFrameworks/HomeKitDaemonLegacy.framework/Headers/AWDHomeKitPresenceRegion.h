// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWDHOMEKITPRESENCEREGION_H
#define AWDHOMEKITPRESENCEREGION_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitPresenceRegion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasNumPresenceAuthUsers;
@property (nonatomic) BOOL hasNumPresenceRegionValidUsers;
@property (nonatomic) BOOL hasNumUsers;
@property (nonatomic) BOOL hasPrimaryResident;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int numPresenceAuthUsers; // ivar: _numPresenceAuthUsers
@property (nonatomic) unsigned int numPresenceRegionValidUsers; // ivar: _numPresenceRegionValidUsers
@property (nonatomic) unsigned int numUsers; // ivar: _numUsers
@property (nonatomic) BOOL primaryResident; // ivar: _primaryResident
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp


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