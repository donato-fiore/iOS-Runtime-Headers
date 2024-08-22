// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOSTANDALONEPAYMENTDIGITALISSUANCEMETADATA_H
#define NPKPROTOSTANDALONEPAYMENTDIGITALISSUANCEMETADATA_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface NPKProtoStandalonePaymentDigitalIssuanceMetadata : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *action; // ivar: _action
@property (retain, nonatomic) NSMutableArray *defaultSuggestions; // ivar: _defaultSuggestions
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) BOOL hasMerchantID;
@property (readonly, nonatomic) BOOL hasServiceProviderCountryCode;
@property (readonly, nonatomic) BOOL hasServiceProviderDictJson;
@property (readonly, nonatomic) BOOL hasServiceProviderIdentifier;
@property (retain, nonatomic) NSString *merchantID; // ivar: _merchantID
@property (retain, nonatomic) NSMutableArray *serviceProviderAcceptedNetworks; // ivar: _serviceProviderAcceptedNetworks
@property (retain, nonatomic) NSMutableArray *serviceProviderCapabilities; // ivar: _serviceProviderCapabilities
@property (retain, nonatomic) NSString *serviceProviderCountryCode; // ivar: _serviceProviderCountryCode
@property (retain, nonatomic) NSString *serviceProviderDictJson; // ivar: _serviceProviderDictJson
@property (retain, nonatomic) NSString *serviceProviderIdentifier; // ivar: _serviceProviderIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultSuggestionsAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)serviceProviderAcceptedNetworksAtIndex:(NSUInteger)arg0 ;
-(id)serviceProviderCapabilitiesAtIndex:(NSUInteger)arg0 ;
-(void)addDefaultSuggestions:(id)arg0 ;
-(void)addServiceProviderAcceptedNetworks:(id)arg0 ;
-(void)addServiceProviderCapabilities:(id)arg0 ;
-(void)clearDefaultSuggestions;
-(void)clearServiceProviderAcceptedNetworks;
-(void)clearServiceProviderCapabilities;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif