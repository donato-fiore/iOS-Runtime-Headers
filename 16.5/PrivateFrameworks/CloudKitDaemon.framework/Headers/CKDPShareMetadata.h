// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDPSHAREMETADATA_H
#define CKDPSHAREMETADATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "CKDPParticipant.h"
#import "CKDPRecordType.h"

@interface CKDPShareMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPParticipant *callerParticipant; // ivar: _callerParticipant
@property (readonly, nonatomic) BOOL hasCallerParticipant;
@property (readonly, nonatomic) BOOL hasOwnerParticipant;
@property (nonatomic) BOOL hasParticipantPermission;
@property (nonatomic) BOOL hasParticipantState;
@property (nonatomic) BOOL hasParticipantType;
@property (readonly, nonatomic) BOOL hasProtectedFullToken;
@property (readonly, nonatomic) BOOL hasRootRecordType;
@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (retain, nonatomic) CKDPParticipant *ownerParticipant; // ivar: _ownerParticipant
@property (nonatomic) int participantPermission; // ivar: _participantPermission
@property (nonatomic) int participantState; // ivar: _participantState
@property (nonatomic) int participantType; // ivar: _participantType
@property (retain, nonatomic) NSData *protectedFullToken; // ivar: _protectedFullToken
@property (retain, nonatomic) CKDPRecordType *rootRecordType; // ivar: _rootRecordType
@property (retain, nonatomic) NSString *routingKey; // ivar: _routingKey


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)participantPermissionAsString:(int)arg0 ;
-(id)participantStateAsString:(int)arg0 ;
-(id)participantTypeAsString:(int)arg0 ;
-(int)StringAsParticipantPermission:(id)arg0 ;
-(int)StringAsParticipantState:(id)arg0 ;
-(int)StringAsParticipantType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif