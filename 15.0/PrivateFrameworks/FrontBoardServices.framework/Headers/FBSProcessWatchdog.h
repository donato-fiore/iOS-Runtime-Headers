// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSPROCESSWATCHDOG_H
#define FBSPROCESSWATCHDOG_H

@class NSString;
@protocol FBSProcessExecutionProvisionDelegate, BSDescriptionProviding, FBSProcess;

#import <Foundation/Foundation.h>

#import "FBSProcessWatchdogPolicy.h"

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding>

 {
    BOOL _active;
    BOOL _invalidated;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) FBSProcessWatchdogPolicy *policy; // ivar: _policy
@property (readonly, weak, nonatomic) NSObject<FBSProcess> *process; // ivar: _process
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithName:(id)arg0 process:(id)arg1 policy:(id)arg2 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_beginMonitoringConstraints;
-(void)_stopMonitoringConstraints;
-(void)activate;
-(void)deactivate;
-(void)dealloc;
-(void)invalidate;
-(void)provision:(id)arg0 wasViolatedWithError:(id)arg1 ;


@end


#endif