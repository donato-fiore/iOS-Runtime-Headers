// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUSETUPFLOW_H
#define CUSETUPFLOW_H

@class NSMutableArray;
@protocol CUActivatable, CUEnvironmentable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUEnvironment.h"
#import "CUEndpoint.h"

@interface CUSetupFlow : NSObject <CUActivatable, CUEnvironmentable>

 {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableArray *_stepArray;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) CUEnvironment *environment; // ivar: _environment
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (retain, nonatomic) CUEndpoint *peerEndpoint; // ivar: _peerEndpoint
@property (copy, nonatomic) id *runHandler; // ivar: _runHandler
@property (nonatomic) NSUInteger setupFlags; // ivar: _setupFlags


-(BOOL)run;
-(id)init;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)activateWithCompletion:(id)arg0 ;
-(void)addStep:(id)arg0 ;
-(void)invalidate;
-(void)reportError:(id)arg0 ;


@end


#endif