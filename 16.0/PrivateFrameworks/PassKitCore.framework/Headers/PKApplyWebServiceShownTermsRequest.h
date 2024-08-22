// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYWEBSERVICESHOWNTERMSREQUEST_H
#define PKAPPLYWEBSERVICESHOWNTERMSREQUEST_H

@class NSString, NSURL;


#import "PKApplyWebServiceRequest.h"

@interface PKApplyWebServiceShownTermsRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier
@property (copy, nonatomic) NSString *termsType; // ivar: _termsType


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif