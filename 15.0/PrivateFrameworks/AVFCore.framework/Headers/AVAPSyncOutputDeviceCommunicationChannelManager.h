// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVAPSYNCOUTPUTDEVICECOMMUNICATIONCHANNELMANAGER_H
#define AVAPSYNCOUTPUTDEVICECOMMUNICATIONCHANNELMANAGER_H

@class NSString;
@protocol AVOutputDeviceCommunicationChannelManager, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVOutputDevice.h"

@interface AVAPSyncOutputDeviceCommunicationChannelManager : NSObject <AVOutputDeviceCommunicationChannelManager>

 {
    NSString *_deviceID;
    *OpaqueAPSyncController _syncController;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    *__CFDictionary _communicationChannelsForUUIDs;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputDevice *parentOutputDevice; // ivar: _parentOutputDevice
@property (readonly) Class superclass;


-(id)initWithDeviceID:(id)arg0 syncController:(struct OpaqueAPSyncController *)arg1 ;
-(void)_didCloseCommChannelWithUUID:(struct __CFString *)arg0 forDeviceWithID:(struct __CFString *)arg1 ;
-(void)_didReceiveData:(struct __CFData *)arg0 fromDeviceWithID:(struct __CFString *)arg1 fromChannelWithUUID:(struct __CFString *)arg2 ;
-(void)_saveCommChannel:(id)arg0 forUUID:(struct __CFString *)arg1 ;
-(void)dealloc;
-(void)openCommunicationChannelWithOptions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif