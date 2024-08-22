// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKAPPLYWEBSERVICEREQUEST_H
#define PKAPPLYWEBSERVICEREQUEST_H

@class NSDictionary, NSString;


#import "PKPaymentWebServiceRequest.h"

@interface PKApplyWebServiceRequest : PKPaymentWebServiceRequest

@property (retain, nonatomic) NSDictionary *experimentDetails; // ivar: _experimentDetails
@property (copy, nonatomic) NSString *referrerIdentifier; // ivar: _referrerIdentifier


+(BOOL)supportsSecureCoding;
-(id)_createMutableBody;
-(id)_murlRequestWithServiceURL:(id)arg0 endpointComponents:(id)arg1 queryParameters:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)_murlRequestWithURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif