// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCDPCODESERVICEREQUESTPROTECTEDCLOUDCOMPUTEMETADATA_H
#define CKCDPCODESERVICEREQUESTPROTECTEDCLOUDCOMPUTEMETADATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface CKCDPCodeServiceRequestProtectedCloudComputeMetadata : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *cryptoSessions; // ivar: _cryptoSessions


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)cryptoSessionsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCryptoSessions:(id)arg0 ;
-(void)clearCryptoSessions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif