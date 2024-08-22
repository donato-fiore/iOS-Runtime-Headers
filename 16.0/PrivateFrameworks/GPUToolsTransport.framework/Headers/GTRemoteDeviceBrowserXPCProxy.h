// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTREMOTEDEVICEBROWSERXPCPROXY_H
#define GTREMOTEDEVICEBROWSERXPCPROXY_H

@class NSSet;
@protocol GTRemoteDeviceBrowser;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTRemoteDeviceBrowserXPCProxy : NSObject <GTRemoteDeviceBrowser>

 {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)allDevices;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)connectToDevice:(id)arg0 ;
-(void)dealloc;
-(void)setDelegate:(id)arg0 ;


@end


#endif