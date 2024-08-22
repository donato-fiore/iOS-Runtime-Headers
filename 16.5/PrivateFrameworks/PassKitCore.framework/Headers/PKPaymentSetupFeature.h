// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTSETUPFEATURE_H
#define PKPAYMENTSETUPFEATURE_H

@class NSString, NSDate, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentSetupFeature : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *dirtyStateIdentifier; // ivar: _dirtyStateIdentifier
@property (copy, nonatomic) NSString *discoveryCardIdentifier; // ivar: _discoveryCardIdentifier
@property (retain, nonatomic) NSDate *expiry; // ivar: _expiry
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSSet *identifiers; // ivar: _identifiers
@property (retain, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (copy, nonatomic) NSString *notificationMessage; // ivar: _notificationMessage
@property (copy, nonatomic) NSString *notificationTitle; // ivar: _notificationTitle
@property (copy, nonatomic) NSString *partnerIdentifier; // ivar: _partnerIdentifier
@property (copy, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier
@property (nonatomic) NSUInteger productState; // ivar: _productState
@property (nonatomic) NSUInteger productType; // ivar: _productType
@property (nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) NSInteger supportedDevices; // ivar: _supportedDevices
@property (nonatomic) NSInteger supportedOptions; // ivar: _supportedOptions
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)paymentSetupFeatureWithProtobuf:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 localizedDisplayName:(id)arg1 ;
-(id)protobuf;
-(void)encodeWithCoder:(id)arg0 ;
-(void)sanitizePaymentSetupFeature;


@end


#endif