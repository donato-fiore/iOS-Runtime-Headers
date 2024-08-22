// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICERESPONSE_H
#define PKAPPLYWEBSERVICERESPONSE_H

@class NSString;


#import "PKPaymentWebServiceResponse.h"

@interface PKApplyWebServiceResponse : PKPaymentWebServiceResponse

@property (copy, nonatomic) NSString *conversationIdentifier; // ivar: _conversationIdentifier


+(BOOL)supportsSecureCoding;


@end


#endif