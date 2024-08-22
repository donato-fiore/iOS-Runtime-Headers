// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUSETUPSTEP_H
#define CUSETUPSTEP_H

@protocol CUActivatable, CUEnvironmentable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUEnvironment.h"
#import "CUSetupFlow.h"

@interface CUSetupStep : NSObject <CUActivatable, CUEnvironmentable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    int _runState;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) CUEnvironment *environment; // ivar: _environment
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (nonatomic) NSUInteger setupFlags; // ivar: _setupFlags
@property (retain, nonatomic) CUSetupFlow *setupFlow; // ivar: _setupFlow


-(BOOL)run;
-(BOOL)runAndReturnError:(*id)arg0 ;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)invalidate;


@end


#endif