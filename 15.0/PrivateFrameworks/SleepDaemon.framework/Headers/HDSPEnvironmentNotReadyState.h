// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPENVIRONMENTNOTREADYSTATE_H
#define HDSPENVIRONMENTNOTREADYSTATE_H



#import "HDSPEnvironmentState.h"

@interface HDSPEnvironmentNotReadyState : HDSPEnvironmentState



-(id)stateName;
-(void)enterMigrationOrReadyState;
-(void)systemDidBecomeReady;
-(void)updateState;


@end


#endif