// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAPSYNCOUTPUTDEVICECOMMUNICATIONCHANNELIMPL_H
#define AVAPSYNCOUTPUTDEVICECOMMUNICATIONCHANNELIMPL_H

@class NSString;
@protocol AVOutputDeviceCommunicationChannelImpl;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceCommunicationChannel.h"

@interface AVAPSyncOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl>

 {
    NSString *_deviceID;
    *__CFString _commChannelUUID;
    *OpaqueAPSyncController _syncController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputDeviceCommunicationChannel *parentChannel; // ivar: _parentChannel
@property (readonly) Class superclass;


-(id)initWithDeviceID:(id)arg0 channelUUID:(struct __CFString *)arg1 syncController:(struct OpaqueAPSyncController *)arg2 ;
-(void)close;
-(void)dealloc;
-(void)sendData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif