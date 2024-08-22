// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPENVIRONMENTNOTREADYSTATE_H
#define HDSPENVIRONMENTNOTREADYSTATE_H



#import "HDSPEnvironmentState.h"

@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState



-(id)_nextSystemReadyState;
-(id)nextStateWithContext:(*id)arg0 ;
-(id)stateName;
-(void)systemDidBecomeReady;


@end


#endif