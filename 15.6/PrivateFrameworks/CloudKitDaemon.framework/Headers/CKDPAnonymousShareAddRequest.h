// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPANONYMOUSSHAREADDREQUEST_H
#define CKDPANONYMOUSSHAREADDREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;



@interface CKDPAnonymousShareAddRequest : PBRequest <NSCopying>



@property (retain, nonatomic) NSString *anonymousShareTupleHash; // ivar: _anonymousShareTupleHash
@property (retain, nonatomic) NSData *encryptedShareTuple; // ivar: _encryptedShareTuple
@property (readonly, nonatomic) BOOL hasAnonymousShareTupleHash;
@property (readonly, nonatomic) BOOL hasEncryptedShareTuple;


+(id)options;
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