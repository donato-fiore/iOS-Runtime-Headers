// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTTRANSPORTCLIENT_H
#define GTTRANSPORTCLIENT_H

@protocol OS_os_log, GTXPCConnection;

#import <Foundation/Foundation.h>


@interface GTTransportClient : NSObject {
    NSObject<OS_os_log> *_log;
    id<GTXPCConnection> *_connection;
}




-(id)allServices;
-(id)capture;
-(id)initWithConnection:(id)arg0 ;
-(id)launcher;
-(id)loopback;
-(id)replayer;
-(id)serviceProvider;


@end


#endif