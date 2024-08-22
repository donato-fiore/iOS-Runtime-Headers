// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPROTOBUFPAYMENTINSTRUMENT_H
#define PKPROTOBUFPAYMENTINSTRUMENT_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;


#import "PKProtobufCustomPrecisionAmount.h"

@interface PKProtobufPaymentInstrument : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *associatedWebDomains; // ivar: _associatedWebDomains
@property (retain, nonatomic) PKProtobufCustomPrecisionAmount *customPrecisionPeerPaymentAccountBalance; // ivar: _customPrecisionPeerPaymentAccountBalance
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount; // ivar: _hasAssociatedPeerPaymentAccount
@property (readonly, nonatomic) BOOL hasCustomPrecisionPeerPaymentAccountBalance;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasHasAssociatedPeerPaymentAccount;
@property (nonatomic) BOOL hasIngestedDate;
@property (readonly, nonatomic) BOOL hasIssuerCountryCode;
@property (readonly, nonatomic) BOOL hasManifestHash;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasPassID;
@property (nonatomic) BOOL hasPeerPaymentAccountBalance;
@property (readonly, nonatomic) BOOL hasPeerPaymentAccountCurrency;
@property (nonatomic) BOOL hasPeerPaymentAccountState;
@property (readonly, nonatomic) BOOL hasPrimaryAccountIdentifier;
@property (readonly, nonatomic) BOOL hasPrimaryAccountNumberSuffix;
@property (nonatomic) BOOL hasSupportsAutomaticSelection;
@property (nonatomic) CGFloat ingestedDate; // ivar: _ingestedDate
@property (retain, nonatomic) NSString *issuerCountryCode; // ivar: _issuerCountryCode
@property (retain, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSString *passID; // ivar: _passID
@property (retain, nonatomic) NSMutableArray *paymentApplications; // ivar: _paymentApplications
@property (nonatomic) NSInteger peerPaymentAccountBalance; // ivar: _peerPaymentAccountBalance
@property (retain, nonatomic) NSString *peerPaymentAccountCurrency; // ivar: _peerPaymentAccountCurrency
@property (nonatomic) unsigned int peerPaymentAccountState; // ivar: _peerPaymentAccountState
@property (retain, nonatomic) NSString *primaryAccountIdentifier; // ivar: _primaryAccountIdentifier
@property (retain, nonatomic) NSString *primaryAccountNumberSuffix; // ivar: _primaryAccountNumberSuffix
@property (nonatomic) BOOL supportsAutomaticSelection; // ivar: _supportsAutomaticSelection


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)associatedWebDomainsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)paymentApplicationsAtIndex:(NSUInteger)arg0 ;
-(void)addAssociatedWebDomains:(id)arg0 ;
-(void)addPaymentApplications:(id)arg0 ;
-(void)clearAssociatedWebDomains;
-(void)clearPaymentApplications;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif