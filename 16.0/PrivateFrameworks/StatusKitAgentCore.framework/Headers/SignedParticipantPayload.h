// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNEDPARTICIPANTPAYLOAD_H
#define SIGNEDPARTICIPANTPAYLOAD_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "DecryptedParticipantPayload.h"

@interface SignedParticipantPayload : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) DecryptedParticipantPayload *payload; // ivar: _payload
@property (retain, nonatomic) NSData *signature; // ivar: _signature


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