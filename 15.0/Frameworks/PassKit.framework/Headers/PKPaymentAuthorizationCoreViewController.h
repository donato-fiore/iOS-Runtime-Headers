// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTAUTHORIZATIONCOREVIEWCONTROLLER_H
#define PKPAYMENTAUTHORIZATIONCOREVIEWCONTROLLER_H

@class UIViewController, PKPaymentAuthorizationDataModel, NSString, PKPaymentAuthorizationLayout, PKPaymentAuthorizationStateMachine;
@protocol PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationHostProtocol;



@interface PKPaymentAuthorizationCoreViewController : UIViewController <PKPaymentAuthorizationServiceProtocol>



@property (readonly, nonatomic) PKPaymentAuthorizationDataModel *dataModel; // ivar: _dataModel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaymentAuthorizationHostProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPaymentAuthorizationLayout *paymentAuthorizationLayout; // ivar: _paymentAuthorizationLayout
@property (readonly, nonatomic) NSInteger paymentAuthorizationStyle; // ivar: _paymentAuthorizationStyle
@property (readonly, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;




@end


#endif