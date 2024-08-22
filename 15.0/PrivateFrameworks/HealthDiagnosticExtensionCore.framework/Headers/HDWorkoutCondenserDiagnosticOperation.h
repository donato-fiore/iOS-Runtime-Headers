// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTCONDENSERDIAGNOSTICOPERATION_H
#define HDWORKOUTCONDENSERDIAGNOSTICOPERATION_H



#import "HDDiagnosticOperation.h"

@interface HDWorkoutCondenserDiagnosticOperation : HDDiagnosticOperation



-(id)reportFilename;
-(void)_reportCondensableWorkoutsWithTaskClient:(id)arg0 ;
-(void)_reportCondensedWorkoutsWithTaskClient:(id)arg0 ;
-(void)_reportWorkoutCondenserTTRValuesWithDatabase:(id)arg0 ;
-(void)run;


@end


#endif