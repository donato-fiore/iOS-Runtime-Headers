// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICEVERIFICATIONRESENDREQUEST_H
#define PKAPPLYWEBSERVICEVERIFICATIONRESENDREQUEST_H

@class NSString, NSURL;


#import "PKApplyWebServiceRequest.h"

@interface PKApplyWebServiceVerificationResendRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger verificationType; // ivar: _verificationType


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif