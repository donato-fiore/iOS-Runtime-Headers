// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCASSISTANTPAUSE_H
#define MPCASSISTANTPAUSE_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCAssistantPause : NSObject {
    NSObject<OS_dispatch_queue> *deviceUIDsQueue;
}




-(void)pauseDevicesByUID:(id)arg0 withRefId:(id)arg1 audioRoutingInfo:(struct ? )arg2 completion:(id)arg3 ;
-(void)pauseDevicesByUID:(id)arg0 withRefId:(id)arg1 audioRoutingInfo:(struct ? )arg2 source:(id)arg3 completion:(id)arg4 ;


@end


#endif