// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREMOTECONTENTPASSACTIONRESPONSE_H
#define PKPAYMENTREMOTECONTENTPASSACTIONRESPONSE_H



#import "PKPaymentWebServiceResponse.h"
#import "PKPaymentPassAction.h"

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse

@property (retain, nonatomic) PKPaymentPassAction *updatedAction; // ivar: _updatedAction


-(id)initWithExistingAction:(id)arg0 data:(id)arg1 ;


@end


#endif