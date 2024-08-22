// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9PAYMENTUI27PAYMENTREQUESTVIEWINTERFACE_H
#define _TTC9PAYMENTUI27PAYMENTREQUESTVIEWINTERFACE_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface _TtC9PaymentUI27PaymentRequestViewInterface : NSObject {
    ? hostDelegate;
    ? stateMachine;
    ? context;
}


@property (nonatomic, retain) id *serviceDelegate; // ivar: serviceDelegate
@property (nonatomic, readonly) UIViewController *viewController; // ivar: viewController


-(id)init;
-(id)initWithConfiguration:(id)arg0 delegate:(id)arg1 ;
-(void)invalidate;
-(void)start;
-(void)stop;


@end


#endif