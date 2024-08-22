// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREMOTEPAYMENTINSTRUMENT_H
#define PKREMOTEPAYMENTINSTRUMENT_H

@class NSArray, NSString, NSDate, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmount.h"
#import "PKPaymentApplication.h"

@interface PKRemotePaymentInstrument : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *associatedWebDomains; // ivar: _associatedWebDomains
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount; // ivar: _hasAssociatedPeerPaymentAccount
@property (retain, nonatomic) NSDate *ingestedDate; // ivar: _ingestedDate
@property (copy, nonatomic) NSString *issuerCountryCode; // ivar: _issuerCountryCode
@property (copy, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (copy, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (copy, nonatomic) NSString *passIdentifier; // ivar: _passIdentifier
@property (retain, nonatomic) NSArray *paymentApplications; // ivar: _paymentApplications
@property (retain, nonatomic) PKCurrencyAmount *peerPaymentAccountBalance; // ivar: _peerPaymentAccountBalance
@property (nonatomic) NSUInteger peerPaymentAccountState; // ivar: _peerPaymentAccountState
@property (copy, nonatomic) NSString *primaryAccountIdentifier; // ivar: _primaryAccountIdentifier
@property (copy, nonatomic) NSString *primaryAccountNumberSuffix; // ivar: _primaryAccountNumberSuffix
@property (retain, nonatomic) PKPaymentApplication *primaryPaymentApplication; // ivar: _primaryPaymentApplication
@property (nonatomic) BOOL supportsAutomaticSelection; // ivar: _supportsAutomaticSelection


+(BOOL)supportsSecureCoding;
+(id)remotePaymentInstrumentWithProtobuf:(id)arg0 ;
+(id)sortDescriptorForDefaultPaymentInstrument:(id)arg0 paymentSupportedQuery:(id)arg1 ;
+(id)thumbnailCachePathForManifestHash:(id)arg0 size:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRemotePaymentInstrument:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPaymentPass:(id)arg0 ;
-(id)protobuf;
-(id)sortedPaymentApplications:(id)arg0 ascending:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif