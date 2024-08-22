// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFPAYMENTREQUEST_H
#define PKPROTOBUFPAYMENTREQUEST_H

@class PBRequest, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "PKProtobufAutomaticReloadPaymentRequest.h"
#import "PKProtobufShippingMethods.h"
#import "PKProtobufPaymentMerchantSession.h"
#import "PKProtobufRecurringPaymentRequest.h"

@interface PKProtobufPaymentRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int apiType; // ivar: _apiType
@property (retain, nonatomic) NSData *applicationData; // ivar: _applicationData
@property (retain, nonatomic) PKProtobufAutomaticReloadPaymentRequest *automaticReloadPaymentRequest; // ivar: _automaticReloadPaymentRequest
@property (retain, nonatomic) PKProtobufShippingMethods *availableShippingMethods; // ivar: _availableShippingMethods
@property (retain, nonatomic) NSData *billingContact; // ivar: _billingContact
@property (nonatomic) int confirmationStyle; // ivar: _confirmationStyle
@property (retain, nonatomic) NSMutableArray *contentItems; // ivar: _contentItems
@property (retain, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (retain, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (nonatomic) BOOL expectsMerchantSession; // ivar: _expectsMerchantSession
@property (nonatomic) BOOL hasApiType;
@property (readonly, nonatomic) BOOL hasApplicationData;
@property (readonly, nonatomic) BOOL hasAutomaticReloadPaymentRequest;
@property (readonly, nonatomic) BOOL hasAvailableShippingMethods;
@property (readonly, nonatomic) BOOL hasBillingContact;
@property (nonatomic) BOOL hasConfirmationStyle;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (readonly, nonatomic) BOOL hasCurrencyCode;
@property (nonatomic) BOOL hasExpectsMerchantSession;
@property (readonly, nonatomic) BOOL hasLocalizedNavigationTitle;
@property (readonly, nonatomic) BOOL hasLocalizedSummaryItemsTitle;
@property (nonatomic) BOOL hasMerchantCapabilities;
@property (readonly, nonatomic) BOOL hasMerchantIdentifier;
@property (readonly, nonatomic) BOOL hasMerchantSession;
@property (readonly, nonatomic) BOOL hasOriginatingURL;
@property (readonly, nonatomic) BOOL hasRecurringPaymentRequest;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasRequestor;
@property (nonatomic) BOOL hasRequestorDeviceType;
@property (nonatomic) BOOL hasRequiredBillingAddressFields;
@property (nonatomic) BOOL hasRequiredShippingAddressFields;
@property (nonatomic) BOOL hasRespectSupportedNetworksOrder;
@property (readonly, nonatomic) BOOL hasShippingContact;
@property (nonatomic) BOOL hasSummaryPinned;
@property (nonatomic) BOOL hasSuppressTotal;
@property (retain, nonatomic) NSString *localizedNavigationTitle; // ivar: _localizedNavigationTitle
@property (retain, nonatomic) NSString *localizedSummaryItemsTitle; // ivar: _localizedSummaryItemsTitle
@property (nonatomic) unsigned int merchantCapabilities; // ivar: _merchantCapabilities
@property (retain, nonatomic) NSString *merchantIdentifier; // ivar: _merchantIdentifier
@property (retain, nonatomic) PKProtobufPaymentMerchantSession *merchantSession; // ivar: _merchantSession
@property (retain, nonatomic) NSMutableArray *multiTokenContexts; // ivar: _multiTokenContexts
@property (retain, nonatomic) NSString *originatingURL; // ivar: _originatingURL
@property (retain, nonatomic) PKProtobufRecurringPaymentRequest *recurringPaymentRequest; // ivar: _recurringPaymentRequest
@property (nonatomic) int requestType; // ivar: _requestType
@property (nonatomic) int requestor; // ivar: _requestor
@property (nonatomic) int requestorDeviceType; // ivar: _requestorDeviceType
@property (nonatomic) unsigned int requiredBillingAddressFields; // ivar: _requiredBillingAddressFields
@property (retain, nonatomic) NSMutableArray *requiredBillingContactFields; // ivar: _requiredBillingContactFields
@property (nonatomic) unsigned int requiredShippingAddressFields; // ivar: _requiredShippingAddressFields
@property (retain, nonatomic) NSMutableArray *requiredShippingContactFields; // ivar: _requiredShippingContactFields
@property (nonatomic) BOOL respectSupportedNetworksOrder; // ivar: _respectSupportedNetworksOrder
@property (retain, nonatomic) NSData *shippingContact; // ivar: _shippingContact
@property (retain, nonatomic) NSMutableArray *shippingMethods; // ivar: _shippingMethods
@property (retain, nonatomic) NSMutableArray *summaryItems; // ivar: _summaryItems
@property (nonatomic) BOOL summaryPinned; // ivar: _summaryPinned
@property (retain, nonatomic) NSMutableArray *supportedCountries; // ivar: _supportedCountries
@property (retain, nonatomic) NSMutableArray *supportedNetworks; // ivar: _supportedNetworks
@property (nonatomic) BOOL suppressTotal; // ivar: _suppressTotal
@property (retain, nonatomic) NSMutableArray *thumbnailURLs; // ivar: _thumbnailURLs


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)confirmationStyleAsString:(int)arg0 ;
-(id)contentItemsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)multiTokenContextsAtIndex:(NSUInteger)arg0 ;
-(id)requestTypeAsString:(int)arg0 ;
-(id)requestorAsString:(int)arg0 ;
-(id)requestorDeviceTypeAsString:(int)arg0 ;
-(id)requiredBillingContactFieldsAtIndex:(NSUInteger)arg0 ;
-(id)requiredShippingContactFieldsAtIndex:(NSUInteger)arg0 ;
-(id)shippingMethodsAtIndex:(NSUInteger)arg0 ;
-(id)summaryItemsAtIndex:(NSUInteger)arg0 ;
-(id)supportedCountriesAtIndex:(NSUInteger)arg0 ;
-(id)supportedNetworksAtIndex:(NSUInteger)arg0 ;
-(id)thumbnailURLsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsConfirmationStyle:(id)arg0 ;
-(int)StringAsRequestType:(id)arg0 ;
-(int)StringAsRequestor:(id)arg0 ;
-(int)StringAsRequestorDeviceType:(id)arg0 ;
-(void)addContentItems:(id)arg0 ;
-(void)addMultiTokenContexts:(id)arg0 ;
-(void)addRequiredBillingContactFields:(id)arg0 ;
-(void)addRequiredShippingContactFields:(id)arg0 ;
-(void)addShippingMethods:(id)arg0 ;
-(void)addSummaryItems:(id)arg0 ;
-(void)addSupportedCountries:(id)arg0 ;
-(void)addSupportedNetworks:(id)arg0 ;
-(void)addThumbnailURLs:(id)arg0 ;
-(void)clearContentItems;
-(void)clearMultiTokenContexts;
-(void)clearRequiredBillingContactFields;
-(void)clearRequiredShippingContactFields;
-(void)clearShippingMethods;
-(void)clearSummaryItems;
-(void)clearSupportedCountries;
-(void)clearSupportedNetworks;
-(void)clearThumbnailURLs;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif