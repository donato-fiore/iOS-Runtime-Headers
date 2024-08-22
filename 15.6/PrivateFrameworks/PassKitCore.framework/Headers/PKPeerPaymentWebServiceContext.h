// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTWEBSERVICECONTEXT_H
#define PKPEERPAYMENTWEBSERVICECONTEXT_H

@class NSString, NSURL, NSData;


#import "PKWebServiceContext.h"

@interface PKPeerPaymentWebServiceContext : PKWebServiceContext

@property (readonly, copy, nonatomic) NSString *companionSerialNumber; // ivar: _companionSerialNumber
@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (copy, nonatomic) NSString *pushToken; // ivar: _pushToken
@property (readonly, copy, nonatomic) NSString *pushTopic; // ivar: _pushTopic
@property (readonly, copy, nonatomic) NSURL *serviceURL; // ivar: _serviceURL
@property (copy, nonatomic) NSData *signedEnrollmentDataSignature; // ivar: _signedEnrollmentDataSignature


+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateContextWithDeviceRegistrationData:(id)arg0 registrationResponse:(id)arg1 ;


@end


#endif