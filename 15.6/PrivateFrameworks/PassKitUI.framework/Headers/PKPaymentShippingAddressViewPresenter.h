// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPAYMENTSHIPPINGADDRESSVIEWPRESENTER_H
#define PKPAYMENTSHIPPINGADDRESSVIEWPRESENTER_H

@class NSString;
@protocol PKPaymentAuthorizationViewPresenting;

#import <Foundation/Foundation.h>


@interface PKPaymentShippingAddressViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)presentCell:(id)arg0 withDataItem:(id)arg1 shouldShowSeperator:(BOOL)arg2 forPaymentRequest:(id)arg3 cellProvider:(id)arg4 ;


@end


#endif