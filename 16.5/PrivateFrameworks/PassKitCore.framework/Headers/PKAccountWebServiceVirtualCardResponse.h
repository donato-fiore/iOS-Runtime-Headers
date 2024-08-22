// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEVIRTUALCARDRESPONSE_H
#define PKACCOUNTWEBSERVICEVIRTUALCARDRESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKVirtualCard.h"

@interface PKAccountWebServiceVirtualCardResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKVirtualCard *virtualCard; // ivar: _virtualCard


-(id)initWithData:(id)arg0 ;


@end


#endif