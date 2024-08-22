// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOCHECKINVITATIONSTATUSFORMAILBOXADDRESSRESPONSE_H
#define NPKPROTOCHECKINVITATIONSTATUSFORMAILBOXADDRESSRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoCheckInvitationStatusForMailboxAddressResponse : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasErrorData;
@property (nonatomic) BOOL hasValid;
@property (nonatomic) BOOL valid; // ivar: _valid


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