// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKLIVEWORKOUTDATASOURCE_H
#define HKLIVEWORKOUTDATASOURCE_H

@class NSString, NSUUID, NSMutableDictionary, NSMutableSet, NSSet;
@protocol _HKXPCExportable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HKWorkoutConfiguration.h"
#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKLiveWorkoutDataSource : NSObject <_HKXPCExportable>

 {
    HKWorkoutConfiguration *_workoutConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) NSMutableDictionary *mutableFiltersBySampleType; // ivar: _mutableFiltersBySampleType
@property (retain, nonatomic) NSMutableSet *mutableSampleTypesToCollect; // ivar: _mutableSampleTypesToCollect
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, copy) NSSet *typesToCollect;


+(id)clientInterface;
+(id)defaultConfigurationWithWorkoutConfiguration:(id)arg0 activityMoveMode:(NSInteger)arg1 ;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 workoutConfiguration:(id)arg1 ;
-(id)remoteInterface;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)disableCollectionForType:(id)arg0 ;
-(void)enableCollectionForType:(id)arg0 predicate:(id)arg1 ;
-(void)workoutBuilderDidFinish;


@end


#endif