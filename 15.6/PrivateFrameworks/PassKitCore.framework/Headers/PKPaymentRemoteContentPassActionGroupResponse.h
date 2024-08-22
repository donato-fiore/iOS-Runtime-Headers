// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTREMOTECONTENTPASSACTIONGROUPRESPONSE_H
#define PKPAYMENTREMOTECONTENTPASSACTIONGROUPRESPONSE_H



#import "PKPaymentWebServiceResponse.h"
#import "PKPaymentPassActionGroup.h"

@interface PKPaymentRemoteContentPassActionGroupResponse : PKPaymentWebServiceResponse

@property (retain, nonatomic) PKPaymentPassActionGroup *updatedActionGroup; // ivar: _updatedActionGroup


-(id)initWithExistingActionGroup:(id)arg0 data:(id)arg1 ;


@end


#endif