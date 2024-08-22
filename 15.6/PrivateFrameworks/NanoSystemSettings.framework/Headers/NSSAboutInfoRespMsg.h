// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSABOUTINFORESPMSG_H
#define NSSABOUTINFORESPMSG_H

@class PBCodable;
@protocol NSCopying;



@interface NSSAboutInfoRespMsg : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger availableStorageInBytes; // ivar: _availableStorageInBytes
@property (nonatomic) NSUInteger batteryCurrentCapacity; // ivar: _batteryCurrentCapacity
@property (nonatomic) BOOL batteryIsCharging; // ivar: _batteryIsCharging
@property (nonatomic) BOOL hasAvailableStorageInBytes;
@property (nonatomic) BOOL hasBatteryCurrentCapacity;
@property (nonatomic) BOOL hasBatteryIsCharging;
@property (nonatomic) BOOL hasNumberOfApps;
@property (nonatomic) BOOL hasNumberOfPhotos;
@property (nonatomic) BOOL hasNumberOfSongs;
@property (nonatomic) BOOL hasPurgeableSpace;
@property (nonatomic) BOOL hasUserDeletableSpace;
@property (nonatomic) NSUInteger numberOfApps; // ivar: _numberOfApps
@property (nonatomic) NSUInteger numberOfPhotos; // ivar: _numberOfPhotos
@property (nonatomic) NSUInteger numberOfSongs; // ivar: _numberOfSongs
@property (nonatomic) NSUInteger purgeableSpace; // ivar: _purgeableSpace
@property (nonatomic) NSUInteger userDeletableSpace; // ivar: _userDeletableSpace


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