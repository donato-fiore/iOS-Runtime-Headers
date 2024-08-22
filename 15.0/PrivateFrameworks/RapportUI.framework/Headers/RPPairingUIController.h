// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RPPAIRINGUICONTROLLER_H
#define RPPAIRINGUICONTROLLER_H

@class UIViewController;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPPairingUIController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (copy, nonatomic) id *retryHandler; // ivar: _retryHandler
@property (copy, nonatomic) id *tryPINHandler; // ivar: _tryPINHandler


-(id)init;
-(void)_cleanup;
-(void)activate;
-(void)invalidate;
-(void)pairingError:(id)arg0 ;
-(void)promptWithFlags:(unsigned int)arg0 throttleSeconds:(int)arg1 ;


@end


#endif