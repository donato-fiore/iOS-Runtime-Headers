// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOGENERATETRANSACTIONKEYWITHPARAMETERSRESPONSE_H
#define NPKPROTOGENERATETRANSACTIONKEYWITHPARAMETERSRESPONSE_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface NPKProtoGenerateTransactionKeyWithParametersResponse : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *appletIdentifier; // ivar: _appletIdentifier
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (readonly, nonatomic) BOOL hasAppletIdentifier;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasTransactionKeyIdentifier;
@property (retain, nonatomic) NSMutableArray *transactionKeyCertChains; // ivar: _transactionKeyCertChains
@property (retain, nonatomic) NSString *transactionKeyIdentifier; // ivar: _transactionKeyIdentifier


+(Class)transactionKeyCertChainType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)transactionKeyCertChainAtIndex:(NSUInteger)arg0 ;
-(void)addTransactionKeyCertChain:(id)arg0 ;
-(void)clearTransactionKeyCertChains;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif