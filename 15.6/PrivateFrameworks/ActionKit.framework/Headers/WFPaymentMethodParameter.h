// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFPAYMENTMETHODPARAMETER_H
#define WFPAYMENTMETHODPARAMETER_H

@class WFDynamicEnumerationParameter, NSString;
@protocol WFActionEventObserver;



@interface WFPaymentMethodParameter : WFDynamicEnumerationParameter <WFActionEventObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)parameterStateIsValid:(id)arg0 ;
-(Class)singleStateClass;


@end


#endif