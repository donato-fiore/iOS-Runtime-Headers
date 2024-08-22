// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYWEBSERVICEAPPLICATIONDELETEREQUEST_H
#define PKAPPLYWEBSERVICEAPPLICATIONDELETEREQUEST_H

@class NSString, NSURL;


#import "PKApplyWebServiceRequest.h"

@interface PKApplyWebServiceApplicationDeleteRequest : PKApplyWebServiceRequest

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL


+(BOOL)supportsSecureCoding;
-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif