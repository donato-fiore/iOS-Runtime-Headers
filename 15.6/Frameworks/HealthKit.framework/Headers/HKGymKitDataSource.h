// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKGYMKITDATASOURCE_H
#define HKGYMKITDATASOURCE_H

@class NSString, NSUUID;
@protocol _HKXPCExportable, HKWorkoutDataSource;

#import <Foundation/Foundation.h>

#import "HKHealthStore.h"
#import "HKTaskServerProxyProvider.h"

@interface HKGymKitDataSource : NSObject <_HKXPCExportable, HKWorkoutDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider; // ivar: _proxyProvider
@property (readonly) Class superclass;


+(id)clientInterface;
+(id)defaultConfigurationWithWorkoutConfiguration:(id)arg0 ;
+(id)serverInterface;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 workoutConfiguration:(id)arg1 ;
-(id)remoteInterface;
-(void)_startTaskServerIfNeeded;
-(void)connectionInterrupted;
-(void)connectionInvalidated;
-(void)workoutBuilderDidFinish;


@end


#endif