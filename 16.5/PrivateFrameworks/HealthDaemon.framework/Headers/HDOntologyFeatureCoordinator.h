// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDONTOLOGYFEATURECOORDINATOR_H
#define HDONTOLOGYFEATURECOORDINATOR_H

@class NSMutableDictionary, NSArray, NSDictionary, NSString;
@protocol HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDProfileManagerObserver, HDProfileReadyObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyFeatureCoordinator : NSObject <HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver, HDProfileManagerObserver, HDProfileReadyObserver>

 {
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMutableDictionary *_observationQueue_isProfileReady;
    NSArray *_featureEvaluators;
    os_unfair_lock_s _lock;
    NSDictionary *_lock_shardRequirementStatuses;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *shardRequirementStatuses;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat unitTesting_minimumTimeToLive; // ivar: _unitTesting_minimumTimeToLive
@property (copy, nonatomic) id *unitTesting_willInsertEntry; // ivar: _unitTesting_willInsertEntry
@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


-(BOOL)markShardsWithIdentifiers:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;
-(void)daemonReady:(id)arg0 ;
-(void)database:(id)arg0 protectedDataDidBecomeAvailable:(BOOL)arg1 ;
-(void)evaluteRequiredShardsForEvalulator:(id)arg0 reason:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)profileListDidChange;


@end


#endif