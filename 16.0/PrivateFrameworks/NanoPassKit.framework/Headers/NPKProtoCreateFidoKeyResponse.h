// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOCREATEFIDOKEYRESPONSE_H
#define NPKPROTOCREATEFIDOKEYRESPONSE_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface NPKProtoCreateFidoKeyResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (retain, nonatomic) NSData *fidoAttestation; // ivar: _fidoAttestation
@property (retain, nonatomic) NSData *fidoKeyHash; // ivar: _fidoKeyHash
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasFidoAttestation;
@property (readonly, nonatomic) BOOL hasFidoKeyHash;


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