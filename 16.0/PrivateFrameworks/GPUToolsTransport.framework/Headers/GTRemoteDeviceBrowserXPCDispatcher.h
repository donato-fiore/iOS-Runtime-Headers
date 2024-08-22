// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTREMOTEDEVICEBROWSERXPCDISPATCHER_H
#define GTREMOTEDEVICEBROWSERXPCDISPATCHER_H

@protocol GTRemoteDeviceBrowserXPCDispatcher, GTRemoteDeviceBrowserDelegate, GTRemoteDeviceBrowser, GTXPCConnection;


#import "GTXPCDispatcher.h"

@interface GTRemoteDeviceBrowserXPCDispatcher : GTXPCDispatcher <GTRemoteDeviceBrowserXPCDispatcher, GTRemoteDeviceBrowserDelegate>

 {
    id<GTRemoteDeviceBrowser> *_remoteDeviceBrowser;
    id<GTXPCConnection> *_notifyConnection;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 notifyConnection:(id)arg2 ;
-(void)allDevices:(id)arg0 replyConnection:(id)arg1 ;
-(void)notifyDeviceListChanged:(id)arg0 ;
-(void)setDelegate_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif