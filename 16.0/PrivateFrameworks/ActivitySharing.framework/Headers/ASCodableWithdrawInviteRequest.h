// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCODABLEWITHDRAWINVITEREQUEST_H
#define ASCODABLEWITHDRAWINVITEREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface ASCodableWithdrawInviteRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *handshakeToken; // ivar: _handshakeToken
@property (readonly, nonatomic) BOOL hasHandshakeToken;


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