// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTVERIFICATIONOBSERVER_H
#define PKPAYMENTVERIFICATIONOBSERVER_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_source, PKPaymentVerificationObserverDelegate;

#import <Foundation/Foundation.h>

#import "PKPaymentPass.h"
#import "PKVerificationChannel.h"

@interface PKPaymentVerificationObserver : NSObject {
    BOOL _observing;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
}


@property (weak, nonatomic) NSObject<PKPaymentVerificationObserverDelegate> *delegate; // ivar: _delegate
@property (readonly, retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, retain, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (readonly, retain, nonatomic) PKVerificationChannel *verificationChannel; // ivar: _verificationChannel


-(id)initWithPaymentPass:(id)arg0 verificationChannel:(id)arg1 identifier:(id)arg2 ;
-(void)dealloc;
-(void)startObservingVerificationSourceWithTimeout:(CGFloat)arg0 ;
-(void)stop;


@end


#endif