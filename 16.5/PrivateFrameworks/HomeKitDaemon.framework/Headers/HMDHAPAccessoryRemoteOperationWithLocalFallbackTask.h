// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHAPACCESSORYREMOTEOPERATIONWITHLOCALFALLBACKTASK_H
#define HMDHAPACCESSORYREMOTEOPERATIONWITHLOCALFALLBACKTASK_H

@protocol HMDHAPAccessoryTask;


#import "HMDHAPAccessoryTask.h"
#import "HMDDevice.h"

@interface HMDHAPAccessoryRemoteOperationWithLocalFallbackTask : HMDHAPAccessoryTask

@property (retain) NSObject<HMDHAPAccessoryTask> *fallbackLocalTask; // ivar: _fallbackLocalTask
@property (retain) NSObject<HMDHAPAccessoryTask> *localTask; // ivar: _localTask
@property (retain) NSObject<HMDHAPAccessoryTask> *remoteTask; // ivar: _remoteTask
@property (readonly) HMDDevice *remoteTaskDelegateDevice; // ivar: _remoteTaskDelegateDevice


-(BOOL)_shouldFallbackLocallyWithError:(id)arg0 accessory:(id)arg1 ;
-(id)_makeLocalTaskWithRequests:(id)arg0 completion:(id)arg1 ;
-(id)_makeRemoteTaskWithRequests:(id)arg0 delegateDevice:(id)arg1 completion:(id)arg2 ;
-(id)completion:(SEL)arg0 ;
-(id)initWithContext:(id)arg0 requests:(id)arg1 delegateDevice:(id)arg2 completion:(id)arg3 ;
-(void)_startScanningForSuspendedAccessoriesWithRequests:(id)arg0 ;
-(void)execute;


@end


#endif