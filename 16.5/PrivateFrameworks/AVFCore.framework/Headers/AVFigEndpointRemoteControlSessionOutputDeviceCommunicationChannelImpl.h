// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFIGENDPOINTREMOTECONTROLSESSIONOUTPUTDEVICECOMMUNICATIONCHANNELIMPL_H
#define AVFIGENDPOINTREMOTECONTROLSESSIONOUTPUTDEVICECOMMUNICATIONCHANNELIMPL_H

@class NSString;
@protocol AVOutputDeviceCommunicationChannelImpl;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceCommunicationChannel.h"

@interface AVFigEndpointRemoteControlSessionOutputDeviceCommunicationChannelImpl : NSObject <AVOutputDeviceCommunicationChannelImpl>

 {
    *OpaqueFigEndpointRemoteControlSession _remoteControlSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) AVOutputDeviceCommunicationChannel *parentChannel; // ivar: _parentChannel
@property (readonly) Class superclass;


-(id)initWithRemoteControlSession:(struct OpaqueFigEndpointRemoteControlSession *)arg0 ;
-(void)_didCloseCommunicationChannel;
-(void)_didReceiveData:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)sendData:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif