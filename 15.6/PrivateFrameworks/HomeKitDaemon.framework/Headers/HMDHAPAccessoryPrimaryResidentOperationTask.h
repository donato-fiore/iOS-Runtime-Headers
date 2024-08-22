// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDHAPACCESSORYPRIMARYRESIDENTOPERATIONTASK_H
#define HMDHAPACCESSORYPRIMARYRESIDENTOPERATIONTASK_H

@class NSMutableArray;
@protocol HMDHAPAccessoryTask;


#import "HMDHAPAccessoryTask.h"

@interface HMDHAPAccessoryPrimaryResidentOperationTask : HMDHAPAccessoryTask

@property (retain, nonatomic) NSObject<HMDHAPAccessoryTask> *localTask; // ivar: _localTask
@property (retain, nonatomic) NSMutableArray *remoteFallbackTasks; // ivar: _remoteFallbackTasks


+(void)filterAccessoriesByDevicesFromMap:(id)arg0 currentDeviceAccessories:(id)arg1 otherDeviceAccessories:(id)arg2 ;
-(id)_fallbackTaskForDevice:(id)arg0 ;
-(id)_makeLocalTaskWithRequests:(id)arg0 completion:(id)arg1 ;
-(id)_makeRemoteWithFallbackTaskWithRequests:(id)arg0 delegateDevice:(id)arg1 completion:(id)arg2 ;
-(id)initWithContext:(id)arg0 requests:(id)arg1 completion:(id)arg2 ;
-(void)_fanOutRemoteRequests:(id)arg0 residentToAccessoriesMap:(id)arg1 responseWaitGroup:(id)arg2 ;
-(void)_processLocalRequests:(id)arg0 responseWaitGroup:(id)arg1 ;
-(void)execute;


@end


#endif