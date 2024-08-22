// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMREMOTEURLCONNECTIONMOCKSCHEDULER_H
#define IMREMOTEURLCONNECTIONMOCKSCHEDULER_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface IMRemoteURLConnectionMockScheduler : NSObject {
    NSObject<OS_xpc_object> *_connection;
}




-(BOOL)_connect;
-(id)init;
-(void)scheduleMockResponse:(id)arg0 ;
-(void)scheduleMockResponse:(id)arg0 forURL:(id)arg1 ;


@end


#endif