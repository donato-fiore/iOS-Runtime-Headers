// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLLOGGINGSERVICECLIENT_H
#define PLLOGGINGSERVICECLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLLoggingServiceClient : NSObject

@property (retain, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue


+(id)makeClient;
-(id)init;
-(void)storeInstrumentationWithEvents:(id)arg0 completion:(id)arg1 ;


@end


#endif