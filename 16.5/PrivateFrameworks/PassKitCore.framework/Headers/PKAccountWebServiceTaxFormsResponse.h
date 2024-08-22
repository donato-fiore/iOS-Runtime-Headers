// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICETAXFORMSRESPONSE_H
#define PKACCOUNTWEBSERVICETAXFORMSRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceTaxFormsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *taxForms; // ivar: _taxForms


-(id)initWithData:(id)arg0 ;


@end


#endif