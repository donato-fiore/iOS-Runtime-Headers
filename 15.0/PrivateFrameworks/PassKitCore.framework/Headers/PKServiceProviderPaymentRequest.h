// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSERVICEPROVIDERPAYMENTREQUEST_H
#define PKSERVICEPROVIDERPAYMENTREQUEST_H

@class NSString;
@protocol NSSecureCoding;


#import "PKPaymentRequest.h"
#import "PKServiceProviderOrder.h"

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding>



@property (readonly, nonatomic) PKServiceProviderOrder *serviceProviderOrder; // ivar: _serviceProviderOrder
@property (readonly, copy, nonatomic) NSString *targetDeviceSerialNumber; // ivar: _targetDeviceSerialNumber


+(BOOL)supportsSecureCoding;
+(id)availableNetworks;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServiceProviderOrder:(id)arg0 ;
-(id)initWithServiceProviderOrder:(id)arg0 targetDeviceSerialNumber:(id)arg1 ;
-(id)merchantIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif