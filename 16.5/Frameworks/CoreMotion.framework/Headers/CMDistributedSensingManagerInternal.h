// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMDISTRIBUTEDSENSINGMANAGERINTERNAL_H
#define CMDISTRIBUTEDSENSINGMANAGERINTERNAL_H

@protocol OS_dispatch_queue, CMDistributedSensingDelegate;

#import <Foundation/Foundation.h>

#import "CMDistributedSensingManager.h"

@interface CMDistributedSensingManagerInternal : NSObject {
    *void _locationdConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    id<CMDistributedSensingDelegate> *_delegate;
    CMDistributedSensingManager *_manager;
}




-(id)init;
-(void)_handleDaemonMessage:(id)arg0 data:(id)arg1 ;
-(void)_registerForVehicleStateUpdates;
-(void)_teardown;
-(void)_unregisterForVehicleStateUpdates;
-(void)dealloc;


@end


#endif