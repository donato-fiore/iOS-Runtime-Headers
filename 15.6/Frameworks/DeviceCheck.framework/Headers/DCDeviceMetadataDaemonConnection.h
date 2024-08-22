// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DCDEVICEMETADATADAEMONCONNECTION_H
#define DCDEVICEMETADATADAEMONCONNECTION_H

@class NSXPCConnection, NSLock;

#import <Foundation/Foundation.h>


@interface DCDeviceMetadataDaemonConnection : NSObject {
    NSXPCConnection *_conn;
    NSLock *_connLock;
}




-(id)connection;
-(id)init;
-(id)remoteObjectProxy:(id)arg0 ;
-(id)synchronousRemoteObjectProxy:(id)arg0 ;


@end


#endif