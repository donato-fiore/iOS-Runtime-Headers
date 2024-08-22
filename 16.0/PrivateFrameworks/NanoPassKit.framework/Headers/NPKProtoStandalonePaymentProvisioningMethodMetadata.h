// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTPROVISIONINGMETHODMETADATA_H
#define NPKPROTOSTANDALONEPAYMENTPROVISIONINGMETHODMETADATA_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentDigitalIssuanceMetadata.h"

@interface NPKProtoStandalonePaymentProvisioningMethodMetadata : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *currency; // ivar: _currency
@property (retain, nonatomic) NSString *depositAmount; // ivar: _depositAmount
@property (retain, nonatomic) NPKProtoStandalonePaymentDigitalIssuanceMetadata *digitalIssuanceMetadata; // ivar: _digitalIssuanceMetadata
@property (readonly, nonatomic) BOOL hasCurrency;
@property (readonly, nonatomic) BOOL hasDepositAmount;
@property (readonly, nonatomic) BOOL hasDigitalIssuanceMetadata;
@property (readonly, nonatomic) BOOL hasMaxLoadedBalance;
@property (readonly, nonatomic) BOOL hasMinLoadedBalance;
@property (readonly, nonatomic) BOOL hasMinimumReaderModeBalance;
@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (readonly, nonatomic) BOOL hasReaderModeMetadataJson;
@property (readonly, nonatomic) BOOL hasReaderModeResourcesJson;
@property (retain, nonatomic) NSString *maxLoadedBalance; // ivar: _maxLoadedBalance
@property (retain, nonatomic) NSString *minLoadedBalance; // ivar: _minLoadedBalance
@property (retain, nonatomic) NSString *minimumReaderModeBalance; // ivar: _minimumReaderModeBalance
@property (retain, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (retain, nonatomic) NSString *readerModeMetadataJson; // ivar: _readerModeMetadataJson
@property (retain, nonatomic) NSString *readerModeResourcesJson; // ivar: _readerModeResourcesJson
@property (retain, nonatomic) NSMutableArray *requiredFields; // ivar: _requiredFields


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)requiredFieldsAtIndex:(NSUInteger)arg0 ;
-(void)addRequiredFields:(id)arg0 ;
-(void)clearRequiredFields;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif