// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICEFEATURETERMSDATAREQUEST_H
#define PKAPPLYWEBSERVICEFEATURETERMSDATAREQUEST_H

@class NSString;


#import "PKApplyWebServiceRequest.h"

@interface PKApplyWebServiceFeatureTermsDataRequest : PKApplyWebServiceRequest

@property (nonatomic) NSUInteger featureIdentifier; // ivar: _featureIdentifier
@property (copy, nonatomic) NSString *termsDataFormat; // ivar: _termsDataFormat
@property (copy, nonatomic) NSString *termsIdentifier; // ivar: _termsIdentifier


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif