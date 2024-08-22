// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCASSISTANTCOMMAND_H
#define MPCASSISTANTCOMMAND_H

@class NSMutableDictionary, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "MPCAssistantSendCommand.h"
#import "MPCAssistantEndpointContext.h"

@interface MPCAssistantCommand : NSObject {
    MPCAssistantSendCommand *_sendCommand;
    MPCAssistantEndpointContext *_context;
    NSObject<OS_dispatch_queue> *_sendCommandQueue;
    NSMutableDictionary *_analytics;
    NSObject<OS_dispatch_queue> *_analyticsQueue;
    NSObject<OS_dispatch_group> *_analyticsGroup;
    NSDate *_startDate;
}




-(id)_applyOriginatingDeviceUIDs:(id)arg0 ;
-(id)init;
-(void)_findOutputDevicesForDestination:(id)arg0 completion:(id)arg1 ;
-(void)_setAnalyticsError:(id)arg0 ;
-(void)_setAnalyticsKey:(id)arg0 value:(id)arg1 ;
-(void)sendCommand:(unsigned int)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)sendCommandWithResult:(unsigned int)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)sendPlaybackArchive:(id)arg0 toDestination:(id)arg1 completion:(id)arg2 ;
-(void)sendPlaybackArchive:(id)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)sendPlaybackArchiveWithResult:(id)arg0 toDestination:(id)arg1 completion:(id)arg2 ;
-(void)sendPlaybackArchiveWithResult:(id)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)sendPlaybackQueue:(id)arg0 toDestination:(id)arg1 completion:(id)arg2 ;
-(void)sendPlaybackQueue:(id)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;
-(void)sendPlaybackQueueWithResult:(id)arg0 toDestination:(id)arg1 completion:(id)arg2 ;
-(void)sendPlaybackQueueWithResult:(id)arg0 toDestination:(id)arg1 withOptions:(id)arg2 completion:(id)arg3 ;


@end


#endif