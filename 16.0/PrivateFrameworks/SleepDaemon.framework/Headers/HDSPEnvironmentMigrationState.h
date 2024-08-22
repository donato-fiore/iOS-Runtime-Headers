// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSPENVIRONMENTMIGRATIONSTATE_H
#define HDSPENVIRONMENTMIGRATIONSTATE_H



#import "HDSPEnvironmentState.h"

@interface HDSPEnvironmentMigrationState : HDSPEnvironmentState



-(id)stateName;
-(void)dataMigrationDidComplete;
-(void)didEnterWithPreviousState:(id)arg0 context:(id)arg1 ;


@end


#endif