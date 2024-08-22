// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICETERMSDATARESPONSE_H
#define PKACCOUNTWEBSERVICETERMSDATARESPONSE_H

@class NSData, NSString;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceTermsDataResponse : PKAccountWebServiceResponse

@property (retain, nonatomic) NSData *termsData; // ivar: _termsData
@property (copy, nonatomic) NSString *termsDataFileName; // ivar: _termsDataFileName


-(id)initWithData:(id)arg0 ;


@end


#endif