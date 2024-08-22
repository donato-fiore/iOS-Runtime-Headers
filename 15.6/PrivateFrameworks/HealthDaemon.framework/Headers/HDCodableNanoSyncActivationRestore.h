// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLENANOSYNCACTIVATIONRESTORE_H
#define HDCODABLENANOSYNCACTIVATIONRESTORE_H

@class PBCodable, NSString, NSMutableArray, NSData;
@protocol HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying;



@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultSourceBundleIdentifier; // ivar: _defaultSourceBundleIdentifier
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasDefaultSourceBundleIdentifier;
@property (readonly, nonatomic) BOOL hasRestoreIdentifier;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasStatusCode;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *obliteratedHealthPairingUUIDs; // ivar: _obliteratedHealthPairingUUIDs
@property (retain, nonatomic) NSData *restoreIdentifier; // ivar: _restoreIdentifier
@property (nonatomic) NSInteger sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) int statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)activationRestoreWithRestoreUUID:(id)arg0 sequenceNumber:(NSInteger)arg1 statusCode:(int)arg2 ;
+(id)persistentUserInfoKey;
+(id)retreiveFromPersistentUserInfo:(id)arg0 ;
-(BOOL)hasRequiredFields;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyForPersistentUserInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedObliteratedHealthPairingUUIDs;
-(id)decodedRestoreUUID;
-(id)dictionaryRepresentation;
-(id)nanoSyncDescription;
-(id)obliteratedHealthPairingUUIDsAtIndex:(NSUInteger)arg0 ;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addObliteratedHealthPairingUUIDs:(id)arg0 ;
-(void)addToPersistentUserInfo:(id)arg0 ;
-(void)clearObliteratedHealthPairingUUIDs;
-(void)copyTo:(id)arg0 ;
-(void)encodeObliteratedHealthPairingUUIDs:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif