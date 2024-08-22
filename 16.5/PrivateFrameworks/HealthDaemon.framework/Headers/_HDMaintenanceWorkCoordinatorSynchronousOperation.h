// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDMAINTENANCEWORKCOORDINATORSYNCHRONOUSOPERATION_H
#define _HDMAINTENANCEWORKCOORDINATORSYNCHRONOUSOPERATION_H

@protocol OS_dispatch_queue;


#import "HDMaintenanceOperation.h"

@interface _HDMaintenanceWorkCoordinatorSynchronousOperation : HDMaintenanceOperation {
    NSObject<OS_dispatch_queue> *_queue;
    id *_block;
}




-(id)initWithName:(id)arg0 queue:(id)arg1 block:(id)arg2 ;
-(void)main;


@end


#endif