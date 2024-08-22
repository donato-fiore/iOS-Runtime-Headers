// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLENANOSYNCCHANGESET_H
#define HDCODABLENANOSYNCCHANGESET_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying;


#import "HDCodableError.h"

@interface HDCodableNanoSyncChangeSet : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *changes; // ivar: _changes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSessionError;
@property (nonatomic) BOOL hasSessionStartDate;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (nonatomic) BOOL hasStatusCode;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HDCodableError *sessionError; // ivar: _sessionError
@property (nonatomic) CGFloat sessionStartDate; // ivar: _sessionStartDate
@property (retain, nonatomic) NSData *sessionUUID; // ivar: _sessionUUID
@property (nonatomic) int statusCode; // ivar: _statusCode
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)changeSetWithChanges:(id)arg0 sessionUUID:(id)arg1 startDate:(id)arg2 sessionError:(id)arg3 statusCode:(int)arg4 ;
+(id)persistentUserInfoKey;
+(id)retreiveFromPersistentUserInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)changesAtIndex:(NSUInteger)arg0 ;
-(id)copyForPersistentUserInfo;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedSessionError;
-(id)decodedSessionStartDate;
-(id)decodedSessionUUID;
-(id)dictionaryRepresentation;
-(id)nanoSyncDescription;
-(id)statusCodeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(void)addChanges:(id)arg0 ;
-(void)addToPersistentUserInfo:(id)arg0 ;
-(void)clearChanges;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif