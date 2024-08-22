// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMOTEDEVICEMANAGER_H
#define REMOTEDEVICEMANAGER_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface RemoteDeviceManager : NSObject {
    NSObject<OS_xpc_object> *_connection;
}




-(id)init;
-(void)dealloc;
-(void)disconnectDevice:(id)arg0 ;
-(void)sendMessage:(char *)arg0 args:(id)arg1 ;


@end


#endif