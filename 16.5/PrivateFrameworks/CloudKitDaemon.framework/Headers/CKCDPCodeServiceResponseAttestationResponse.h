// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCDPCODESERVICERESPONSEATTESTATIONRESPONSE_H
#define CKCDPCODESERVICERESPONSEATTESTATIONRESPONSE_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKCDPCodeServiceResponseAttestationResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *attestations; // ivar: _attestations


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)attestationsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addAttestations:(id)arg0 ;
-(void)clearAttestations;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif