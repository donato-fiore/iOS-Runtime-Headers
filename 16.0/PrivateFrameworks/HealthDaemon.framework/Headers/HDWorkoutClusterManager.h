// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDWORKOUTCLUSTERMANAGER_H
#define HDWORKOUTCLUSTERMANAGER_H

@class HDAssertion;

#import <Foundation/Foundation.h>

#import "HDProfile.h"

@interface HDWorkoutClusterManager : NSObject {
    os_unfair_lock_s _lock;
    HDAssertion *_accessibilityAssertion;
}


@property (weak, nonatomic) HDProfile *profile; // ivar: _profile


-(BOOL)createWorkoutCluster:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteWorkoutClusterWithUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateRouteLocationsForWorkoutUUID:(id)arg0 startDate:(id)arg1 limit:(NSUInteger)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(BOOL)performUsingAccessibilityAssertionWithError:(*id)arg0 block:(id)arg1 ;
-(BOOL)updateWorkoutClusterWithUUID:(id)arg0 newRelevance:(id)arg1 newLastWorkoutUUID:(id)arg2 newBestWorkoutUUID:(id)arg3 newWorkoutAssociations:(id)arg4 workoutAssociationsToRemove:(id)arg5 error:(*id)arg6 ;
-(BOOL)updateWorkoutClusterWithUUID:(id)arg0 newRouteLabel:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateWorkoutClusterWithUUID:(id)arg0 newRouteSnapshot:(id)arg1 error:(*id)arg2 ;
-(id)accessibilityAssertion;
-(id)allWorkoutClustersWithError:(*id)arg0 ;
-(id)allWorkoutUUIDsForClusterUUID:(id)arg0 error:(*id)arg1 ;
-(id)initWithProfile:(id)arg0 ;
-(id)workoutClusterContainingWorkoutUUID:(id)arg0 error:(*id)arg1 ;
-(id)workoutClustersContainingWorkoutUUIDs:(id)arg0 error:(*id)arg1 ;
-(id)workoutCountWithFilter:(id)arg0 error:(*id)arg1 ;
-(id)workoutRouteSnapshotForClusterUUID:(id)arg0 error:(*id)arg1 ;
-(id)workoutsWithFilter:(id)arg0 anchor:(id)arg1 limit:(NSUInteger)arg2 newAnchor:(*id)arg3 error:(*id)arg4 ;
-(id)workoutsWithFilter:(id)arg0 limit:(NSUInteger)arg1 sortDescriptors:(id)arg2 error:(*id)arg3 ;
-(void)dealloc;
-(void)takeAccessibilityAssertionIfNeeded;


@end


#endif