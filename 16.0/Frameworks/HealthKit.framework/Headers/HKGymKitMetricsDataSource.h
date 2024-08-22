// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKGYMKITMETRICSDATASOURCE_H
#define HKGYMKITMETRICSDATASOURCE_H

@class NSString, NSUUID;
@protocol _HKXPCExportable, HKWorkoutDataSource, HKGymKitMetricsDataSourceDelegate;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKWorkoutConfiguration.h"
#import "HKTaskServerProxyProvider.h"

@interface HKGymKitMetricsDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource>

 {
    HKHealthStore *_healthStore;
    HKWorkoutConfiguration *_workoutConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKGymKitMetricsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 workoutConfiguration:(id)arg1 ;
-(id)remoteInterface;
-(void)_startTaskServerIfNeededWithCompletion:(id)arg0 ;
-(void)clientRemote_didReceiveMetrics:(id)arg0 ;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)workoutBuilderDidFinish;


@end


#endif