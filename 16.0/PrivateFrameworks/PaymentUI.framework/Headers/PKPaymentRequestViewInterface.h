// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTREQUESTVIEWINTERFACE_H
#define PKPAYMENTREQUESTVIEWINTERFACE_H


#import <Foundation/Foundation.h>

#import "_TtC9PaymentUI27PaymentRequestViewInterface.h"

@interface PKPaymentRequestViewInterface : NSObject

@property (readonly, nonatomic) id *serviceDelegate;
@property (retain, nonatomic) _TtC9PaymentUI27PaymentRequestViewInterface *wrappedInterface; // ivar: _wrappedInterface


-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 ;
-(id)viewController;
-(void)invalidate;
-(void)start;
-(void)stop;


@end


#endif