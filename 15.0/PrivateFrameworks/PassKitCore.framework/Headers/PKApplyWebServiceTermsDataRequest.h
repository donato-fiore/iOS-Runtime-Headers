// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLYWEBSERVICETERMSDATAREQUEST_H
#define PKAPPLYWEBSERVICETERMSDATAREQUEST_H

@class NSString, NSURL;


#import "PKApplyWebServiceRequest.h"

@interface PKApplyWebServiceTermsDataRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSString *termsDataFormat; // ivar: _termsDataFormat
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif