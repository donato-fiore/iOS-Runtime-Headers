// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSERVICEPROVIDERPURCHASE_H
#define PKSERVICEPROVIDERPURCHASE_H

@class NSArray, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKServiceProviderPurchaseData.h"

@interface PKServiceProviderPurchase : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *partnerMetadata; // ivar: _partnerMetadata
@property (copy, nonatomic) NSDate *purchaseDate; // ivar: _purchaseDate
@property (copy, nonatomic) NSString *regionIdentifier; // ivar: _regionIdentifier
@property (copy, nonatomic) PKServiceProviderPurchaseData *serviceProviderData; // ivar: _serviceProviderData
@property (copy, nonatomic) NSString *serviceProviderIdentifier; // ivar: _serviceProviderIdentifier
@property (copy, nonatomic) NSString *signature; // ivar: _signature
@property (nonatomic) NSUInteger state; // ivar: _state
@property (copy, nonatomic) NSString *visibleTransactionIdentifier; // ivar: _visibleTransactionIdentifier


+(BOOL)supportsSecureCoding;
+(id)purchaseWithDictionary:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToServiceProviderPurchase:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif