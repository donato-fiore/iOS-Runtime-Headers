// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPROTOSTANDALONEPAYMENTSETUPPRODUCT_H
#define NPKPROTOSTANDALONEPAYMENTSETUPPRODUCT_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "NPKProtoStandalonePaymentSetupProductImageAssetURLs.h"

@interface NPKProtoStandalonePaymentSetupProduct : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) NSInteger flags; // ivar: _flags
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasFlags;
@property (nonatomic) BOOL hasHsa2Requirement;
@property (readonly, nonatomic) BOOL hasImageAssetURLs;
@property (readonly, nonatomic) BOOL hasPartnerIdentifier;
@property (readonly, nonatomic) BOOL hasPartnerName;
@property (readonly, nonatomic) BOOL hasProductIdentifier;
@property (readonly, nonatomic) BOOL hasReaderModeMetadataJson;
@property (nonatomic) BOOL hasSupportedProvisioningMethods;
@property (nonatomic) BOOL hasSuppressPendingPurchases;
@property (readonly, nonatomic) BOOL hasTermsURL;
@property (nonatomic) NSInteger hsa2Requirement; // ivar: _hsa2Requirement
@property (retain, nonatomic) NPKProtoStandalonePaymentSetupProductImageAssetURLs *imageAssetURLs; // ivar: _imageAssetURLs
@property (retain, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (retain, nonatomic) NSString *partnerName; // ivar: _partnerName
@property (retain, nonatomic) NSMutableArray *paymentOptions; // ivar: _paymentOptions
@property (retain, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (retain, nonatomic) NSString *readerModeMetadataJson; // ivar: _readerModeMetadataJson
@property (retain, nonatomic) NSMutableArray *regions; // ivar: _regions
@property (retain, nonatomic) NSMutableArray *requestedProvisioningMethods; // ivar: _requestedProvisioningMethods
@property (retain, nonatomic) NSMutableArray *requiredFields; // ivar: _requiredFields
@property (retain, nonatomic) NSMutableArray *supportedProtocols; // ivar: _supportedProtocols
@property (nonatomic) NSInteger supportedProvisioningMethods; // ivar: _supportedProvisioningMethods
@property (nonatomic) BOOL suppressPendingPurchases; // ivar: _suppressPendingPurchases
@property (retain, nonatomic) NSString *termsURL; // ivar: _termsURL


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paymentOptionsAtIndex:(NSUInteger)arg0 ;
-(id)regionsAtIndex:(NSUInteger)arg0 ;
-(id)requestedProvisioningMethodsAtIndex:(NSUInteger)arg0 ;
-(id)requiredFieldsAtIndex:(NSUInteger)arg0 ;
-(id)supportedProtocolsAtIndex:(NSUInteger)arg0 ;
-(void)addPaymentOptions:(id)arg0 ;
-(void)addRegions:(id)arg0 ;
-(void)addRequestedProvisioningMethods:(id)arg0 ;
-(void)addRequiredFields:(id)arg0 ;
-(void)addSupportedProtocols:(id)arg0 ;
-(void)clearPaymentOptions;
-(void)clearRegions;
-(void)clearRequestedProvisioningMethods;
-(void)clearRequiredFields;
-(void)clearSupportedProtocols;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif