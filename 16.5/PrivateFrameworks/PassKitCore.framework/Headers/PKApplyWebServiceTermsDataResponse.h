// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKAPPLYWEBSERVICETERMSDATARESPONSE_H
#define PKAPPLYWEBSERVICETERMSDATARESPONSE_H

@class NSData, NSString;


#import "PKApplyWebServiceResponse.h"

@interface PKApplyWebServiceTermsDataResponse : PKApplyWebServiceResponse

@property (retain, nonatomic) NSData *termsData; // ivar: _termsData
@property (copy, nonatomic) NSString *termsDataFileName; // ivar: _termsDataFileName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif