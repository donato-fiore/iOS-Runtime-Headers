// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUSETUPHANDLER_H
#define CUSETUPHANDLER_H

@protocol CUActivatable, CUEnvironmentable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUEnvironment.h"

@interface CUSetupHandler : NSObject <CUActivatable, CUEnvironmentable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) CUEnvironment *environment; // ivar: _environment
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler


-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif