// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEVIRTUALCARDLISTRESPONSE_H
#define PKACCOUNTWEBSERVICEVIRTUALCARDLISTRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceVirtualCardListResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *virtualCards; // ivar: _virtualCards


-(id)initWithData:(id)arg0 ;


@end


#endif