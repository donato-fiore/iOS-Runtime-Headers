// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTREMOTECREDENTIAL_H
#define NPKPROTOSTANDALONEPAYMENTREMOTECREDENTIAL_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentCredential.h"
#import "NPKProtoStandalonePaymentPass.h"

@interface NPKProtoStandalonePaymentRemoteCredential : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasPassURL;
@property (readonly, nonatomic) BOOL hasPaymentPass;
@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (nonatomic) BOOL hasRank;
@property (readonly, nonatomic) BOOL hasStatusDescription;
@property (readonly, nonatomic) BOOL hasSummaryMetadataDescription;
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *passURL; // ivar: _passURL
@property (retain, nonatomic) NPKProtoStandalonePaymentCredential *paymentCredential; // ivar: _paymentCredential
@property (retain, nonatomic) NPKProtoStandalonePaymentPass *paymentPass; // ivar: _paymentPass
@property (retain, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (nonatomic) unsigned int rank; // ivar: _rank
@property (retain, nonatomic) NSString *statusDescription; // ivar: _statusDescription
@property (retain, nonatomic) NSString *summaryMetadataDescription; // ivar: _summaryMetadataDescription


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