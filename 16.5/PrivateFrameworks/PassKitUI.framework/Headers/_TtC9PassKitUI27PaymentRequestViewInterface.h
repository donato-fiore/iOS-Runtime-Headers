// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9PASSKITUI27PAYMENTREQUESTVIEWINTERFACE_H
#define _TTC9PASSKITUI27PAYMENTREQUESTVIEWINTERFACE_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface _TtC9PassKitUI27PaymentRequestViewInterface : NSObject {
    ? hostDelegate;
    ? presenter;
    ? stateMachine;
    ? context;
}


@property (nonatomic, retain) id *serviceDelegate; // ivar: serviceDelegate
@property (nonatomic, readonly) UIViewController *viewController; // ivar: viewController


-(id)init;
-(void)invalidate;
-(void)start;
-(void)stop;


@end


#endif