// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTCARDVIEWPRESENTER_H
#define PKPAYMENTCARDVIEWPRESENTER_H

@class NSString;
@protocol PKPaymentAuthorizationViewPresenting;

#import <Foundation/Foundation.h>


@interface PKPaymentCardViewPresenter : NSObject <PKPaymentAuthorizationViewPresenting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_billingValueInCell:(id)arg0 forItem:(id)arg1 type:(NSUInteger)arg2 ;
+(void)presentCell:(id)arg0 withDataItem:(id)arg1 shouldShowSeperator:(BOOL)arg2 forPaymentRequest:(id)arg3 cellProvider:(id)arg4 ;


@end


#endif