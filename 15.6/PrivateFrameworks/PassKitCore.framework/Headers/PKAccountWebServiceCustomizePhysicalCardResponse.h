// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICECUSTOMIZEPHYSICALCARDRESPONSE_H
#define PKACCOUNTWEBSERVICECUSTOMIZEPHYSICALCARDRESPONSE_H

@class NSArray;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceCustomizePhysicalCardResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSArray *artworkOptions; // ivar: _artworkOptions
@property (readonly, copy, nonatomic) NSArray *nameOptions; // ivar: _nameOptions
@property (readonly, copy, nonatomic) NSArray *priceOptions; // ivar: _priceOptions


-(id)initWithData:(id)arg0 ;


@end


#endif