// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPSHAREVETTINGINITIATEREQUEST_H
#define CKDPSHAREVETTINGINITIATEREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;


#import "CKDPShareIdentifier.h"

@interface CKDPShareVettingInitiateRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *baseToken; // ivar: _baseToken
@property (retain, nonatomic) NSData *encryptedKey; // ivar: _encryptedKey
@property (readonly, nonatomic) BOOL hasBaseToken;
@property (readonly, nonatomic) BOOL hasEncryptedKey;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) NSString *participantId; // ivar: _participantId
@property (retain, nonatomic) CKDPShareIdentifier *shareId; // ivar: _shareId


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif