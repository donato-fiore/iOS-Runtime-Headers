// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUPROXCARDCONTROLLER_H
#define CUPROXCARDCONTROLLER_H

@class UIWindow;
@protocol CUActivatable, CUUIEnvironmentable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUUIEnvironment.h"
#import "CUNavigationController.h"

@interface CUProxCardController : NSObject <CUActivatable, CUUIEnvironmentable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_dispatch_queue> *_uiQueue;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) CUUIEnvironment *environment; // ivar: _environment
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) CUNavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif