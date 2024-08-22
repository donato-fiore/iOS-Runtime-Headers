// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPOPERATION_H
#define CKDPOPERATION_H

@class PBCodable, CKDPIdentifier, NSString, NSData;
@protocol NSCopying;



@interface CKDPOperation : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CKDPIdentifier *anonymousCKUserID; // ivar: _anonymousCKUserID
@property (readonly, nonatomic) BOOL hasAnonymousCKUserID;
@property (nonatomic) BOOL hasLast;
@property (readonly, nonatomic) BOOL hasOperationUUID;
@property (readonly, nonatomic) BOOL hasRequestSignature;
@property (nonatomic) BOOL hasSynchronousMode;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL last; // ivar: _last
@property (retain, nonatomic) NSString *operationUUID; // ivar: _operationUUID
@property (retain, nonatomic) NSData *requestSignature; // ivar: _requestSignature
@property (nonatomic) BOOL synchronousMode; // ivar: _synchronousMode
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif