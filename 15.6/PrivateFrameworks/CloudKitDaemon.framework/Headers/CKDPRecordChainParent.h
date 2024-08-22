// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPRECORDCHAINPARENT_H
#define CKDPRECORDCHAINPARENT_H

@class PBCodable, NSData, CKDPRecordReference;
@protocol NSCopying;



@interface CKDPRecordChainParent : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasPublicKeyID;
@property (readonly, nonatomic) BOOL hasReference;
@property (retain, nonatomic) NSData *publicKeyID; // ivar: _publicKeyID
@property (retain, nonatomic) CKDPRecordReference *reference; // ivar: _reference


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