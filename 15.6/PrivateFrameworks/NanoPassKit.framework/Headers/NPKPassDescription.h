// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPASSDESCRIPTION_H
#define NPKPASSDESCRIPTION_H

@class NSArray, PKColor, PKImage, NSData, NSSet, PKPaymentApplication, NSNumber, NSDate, NSString, NSDecimalNumber, PKNFCPayload, PKTransitAppletState;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface NPKPassDescription : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *availableActions; // ivar: _availableActions
@property (retain, nonatomic) NSArray *backFieldBuckets; // ivar: _backFieldBuckets
@property (retain, nonatomic) PKColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) PKImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) NSData *backgroundImageEncoded; // ivar: _backgroundImageEncoded
@property (nonatomic, getter=isCobranded) BOOL cobranded; // ivar: _cobranded
@property (retain, nonatomic) NSData *completeHash; // ivar: _completeHash
@property (nonatomic) BOOL deletePending; // ivar: _deletePending
@property (retain, nonatomic) NSSet *devicePaymentApplications; // ivar: _devicePaymentApplications
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryContactlessPaymentApplication; // ivar: _devicePrimaryContactlessPaymentApplication
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryInAppPaymentApplication; // ivar: _devicePrimaryInAppPaymentApplication
@property (retain, nonatomic) PKPaymentApplication *devicePrimaryPaymentApplication; // ivar: _devicePrimaryPaymentApplication
@property (readonly, nonatomic) NSInteger effectiveContactlessPaymentApplicationState;
@property (nonatomic) NSInteger effectivePaymentApplicationState; // ivar: _effectivePaymentApplicationState
@property (nonatomic) NSUInteger expressPassTypesMask; // ivar: _expressPassTypesMask
@property (retain, nonatomic) PKColor *foregroundColor; // ivar: _foregroundColor
@property (retain, nonatomic) NSArray *frontFieldBuckets; // ivar: _frontFieldBuckets
@property (retain, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (nonatomic) BOOL hasAssociatedPeerPaymentAccount; // ivar: _hasAssociatedPeerPaymentAccount
@property (nonatomic) BOOL hasStoredValue; // ivar: _hasStoredValue
@property (nonatomic) BOOL hasUserSelectableContactlessPaymentApplications; // ivar: _hasUserSelectableContactlessPaymentApplications
@property (retain, nonatomic) NSDate *ingestionDate; // ivar: _ingestionDate
@property (retain, nonatomic) NSString *issuerCountryCode; // ivar: _issuerCountryCode
@property (retain, nonatomic) PKColor *labelColor; // ivar: _labelColor
@property (retain, nonatomic) NSDecimalNumber *lastAddValueAmount; // ivar: _lastAddValueAmount
@property (nonatomic) BOOL lazyLoadEncodedImages; // ivar: _lazyLoadEncodedImages
@property (retain, nonatomic) NSString *localizedDescription; // ivar: _localizedDescription
@property (retain, nonatomic) PKImage *logoImage; // ivar: _logoImage
@property (retain, nonatomic) NSData *logoImageEncoded; // ivar: _logoImageEncoded
@property (retain, nonatomic) NSString *logoText; // ivar: _logoText
@property (retain, nonatomic) NSData *manifestHash; // ivar: _manifestHash
@property (retain, nonatomic) PKNFCPayload *nfcPayload; // ivar: _nfcPayload
@property (retain, nonatomic) NSString *organizationName; // ivar: _organizationName
@property (retain, nonatomic) NSString *passTypeIdentifier; // ivar: _passTypeIdentifier
@property (retain, nonatomic) NSDate *pendingAddValueDate; // ivar: _pendingAddValueDate
@property (retain, nonatomic) PKPaymentApplication *preferredPaymentApplication; // ivar: _preferredPaymentApplication
@property (nonatomic, getter=isPrivateLabel) BOOL privateLabel; // ivar: _privateLabel
@property (retain, nonatomic) NSDate *relevantDate; // ivar: _relevantDate
@property (nonatomic) NSUInteger settings; // ivar: _settings
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSSet *subcredentials; // ivar: _subcredentials
@property (retain, nonatomic) PKTransitAppletState *transitAppletState; // ivar: _transitAppletState
@property (retain, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(BOOL)isCachingEnabled;
+(BOOL)supportsSecureCoding;
+(void)setCachingEnabled:(BOOL)arg0 ;
-(BOOL)hasValidNFCPayload;
-(BOOL)isAddValuePending;
-(BOOL)isEnroute;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsData:(id)arg0 ;
-(id)fieldForKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 lazyLoadEncodedImages:(BOOL)arg1 ;
-(id)transitProperties;
-(void)encodeObject:(id)arg0 asDataInCoder:(id)arg1 withKey:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif