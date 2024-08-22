// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKPREWARMING_H
#define WLKPREWARMING_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WLKPrewarming : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSXPCConnection *_connection;
}




+(id)sharedInstance;
-(id)_connection;
-(id)_init;
-(id)init;
-(void)_onQueue_prewarmDevice;
-(void)prewarm;
-(void)prewarmDevice;
-(void)prewarmDeviceAndNetwork;


@end


#endif