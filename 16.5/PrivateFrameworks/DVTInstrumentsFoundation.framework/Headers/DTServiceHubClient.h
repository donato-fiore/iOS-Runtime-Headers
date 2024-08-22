// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTSERVICEHUBCLIENT_H
#define DTSERVICEHUBCLIENT_H


#import <Foundation/Foundation.h>


@interface DTServiceHubClient : NSObject



+(id)localDeviceConnection;
+(id)localDeviceConnectionWithError:(*id)arg0 ;
+(id)localDeviceConnectionWithXPCConnection:(id)arg0 ;


@end


#endif