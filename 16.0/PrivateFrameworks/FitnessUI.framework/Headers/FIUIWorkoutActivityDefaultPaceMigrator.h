// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIUIWORKOUTACTIVITYDEFAULTPACEMIGRATOR_H
#define FIUIWORKOUTACTIVITYDEFAULTPACEMIGRATOR_H


#import <Foundation/Foundation.h>


@interface FIUIWorkoutActivityDefaultPaceMigrator : NSObject



+(void)migrateDefaultOutdoorRunningWalkingPaceFromCurrentToAverage;
+(void)migrateDefaultOutdoorRunningWalkingPaceFromCurrentToAverageWithSyncManager:(id)arg0 domainAccessor:(id)arg1 ;


@end


#endif