// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEREQUESTPHYSICALCARDRESPONSE_H
#define PKACCOUNTWEBSERVICEREQUESTPHYSICALCARDRESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKPhysicalCard.h"

@interface PKAccountWebServiceRequestPhysicalCardResponse : PKAccountWebServiceResponse

@property (readonly, nonatomic) PKPhysicalCard *physicalCard; // ivar: _physicalCard
@property (readonly, nonatomic) NSUInteger shipmentQuoteMaximum; // ivar: _shipmentQuoteMaximum
@property (readonly, nonatomic) NSUInteger shipmentQuoteMinimum; // ivar: _shipmentQuoteMinimum


-(id)initWithData:(id)arg0 ;


@end


#endif