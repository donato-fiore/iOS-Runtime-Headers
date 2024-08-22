// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSYSTEMREMOTEPOOLOUTPUTDEVICECOMMUNICATIONCHANNELMANAGER_H
#define AVSYSTEMREMOTEPOOLOUTPUTDEVICECOMMUNICATIONCHANNELMANAGER_H

@class NSString;
@protocol AVOutputDeviceCommunicationChannelManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVOutputContext.h"
#import "AVOutputDevice.h"

@interface AVSystemRemotePoolOutputDeviceCommunicationChannelManager : NSObject <AVOutputDeviceCommunicationChannelManager>

 {
    NSString *_deviceID;
    AVOutputContext *_outputContext;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    *__CFDictionary _communicationChannelsForUUIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputDevice *parentOutputDevice; // ivar: _parentOutputDevice
@property (readonly) Class superclass;


+(id)sharedSystemRemotePool;
+(id)sharedSystemRemotePoolImpl;
-(id)_initializeIfNeededAndGetSystemRemotePool;
-(id)initWithDeviceID:(id)arg0 ;
-(void)_didCloseCommChannelWithUUID:(struct __CFString *)arg0 forDeviceWithID:(struct __CFString *)arg1 ;
-(void)_didReceiveData:(struct __CFData *)arg0 fromDeviceWithID:(struct __CFString *)arg1 fromChannelWithUUID:(struct __CFString *)arg2 ;
-(void)dealloc;
-(void)openCommunicationChannelWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif