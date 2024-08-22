// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RPPAIRINGMANAGERUICONTROLLER_H
#define RPPAIRINGMANAGERUICONTROLLER_H

@class UIViewController, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface RPPairingManagerUIController : NSObject

@property (nonatomic) BOOL allowManualIP; // ivar: _allowManualIP
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) UIViewController *presentingViewController; // ivar: _presentingViewController
@property (nonatomic) BOOL runInProcess; // ivar: _runInProcess
@property (copy, nonatomic) NSString *serviceType; // ivar: _serviceType


-(id)init;
-(void)_cleanup;
-(void)activate;
-(void)invalidate;


@end


#endif