// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICESAVINGSSTATEMENTSRESPONSE_H
#define PKACCOUNTWEBSERVICESAVINGSSTATEMENTSRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceSavingsStatementsResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *statements; // ivar: _statements


-(id)initWithData:(id)arg0 ;


@end


#endif