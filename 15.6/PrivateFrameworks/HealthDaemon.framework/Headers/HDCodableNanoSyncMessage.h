// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLENANOSYNCMESSAGE_H
#define HDCODABLENANOSYNCMESSAGE_H

@class PBCodable, NSString, NSData;
@protocol HDNanoSyncDescription, NSCopying;


#import "HDCodableNanoSyncActivationRestore.h"
#import "HDCodableNanoSyncChangeSet.h"
#import "HDCodableSyncEntityVersionMap.h"
#import "HDCodableNanoSyncStatus.h"

@interface HDCodableNanoSyncMessage : PBCodable <HDNanoSyncDescription, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) HDCodableNanoSyncActivationRestore *activationRestore; // ivar: _activationRestore
@property (retain, nonatomic) HDCodableNanoSyncChangeSet *changeSet; // ivar: _changeSet
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HDCodableSyncEntityVersionMap *entityVersionMap; // ivar: _entityVersionMap
@property (readonly, nonatomic) BOOL hasActivationRestore;
@property (readonly, nonatomic) BOOL hasChangeSet;
@property (readonly, nonatomic) BOOL hasEntityVersionMap;
@property (readonly, nonatomic) BOOL hasHealthPairingUUID;
@property (readonly, nonatomic) BOOL hasPersistentPairingUUID;
@property (readonly, nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasVersion;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *healthPairingUUID; // ivar: _healthPairingUUID
@property (retain, nonatomic) NSData *persistentPairingUUID; // ivar: _persistentPairingUUID
@property (retain, nonatomic) HDCodableNanoSyncStatus *status; // ivar: _status
@property (readonly) Class superclass;
@property (nonatomic) int version; // ivar: _version


+(id)messageFromPersistentUserInfo:(id)arg0 ;
+(id)messageWithSyncStore:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyPersistentUserInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedHealthPairingUUID;
-(id)decodedPersistentPairingUUID;
-(id)dictionaryRepresentation;
-(id)nanoSyncDescription;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif