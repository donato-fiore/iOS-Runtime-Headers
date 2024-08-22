// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NFECOMMERCEPAYMENTSESSION_H
#define NFECOMMERCEPAYMENTSESSION_H

@class NSDictionary, NSString;
@protocol NFECommercePaymentSessionCallbacks;


#import "NFSession.h"

@interface NFECommercePaymentSession : NFSession <NFECommercePaymentSessionCallbacks>

 {
    NSDictionary *_appletsById;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allApplets;
-(id)appletWithIdentifier:(id)arg0 ;
-(id)performECommercePayment:(id)arg0 request:(id)arg1 ;
-(id)performECommercePayment:(id)arg0 request:(id)arg1 error:(*id)arg2 ;
-(void)didStartSession:(id)arg0 ;


@end


#endif