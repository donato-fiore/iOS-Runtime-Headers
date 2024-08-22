// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APSTASKCLIENT_H
#define APSTASKCLIENT_H

@class NSXPCConnection, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APSTaskClient : NSObject {
    NSXPCConnection *_connection;
    NSMutableArray *_outstandingDNSRequests;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSString *_environment;
}




-(id)_findDNSRequestForHostname:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 queue:(id)arg1 ;
-(id)resolveDNS:(id)arg0 ;
-(void)_clearOutstandingTasks:(NSInteger)arg0 ;
-(void)_timeoutOutstandingRequests;
-(void)dealloc;


@end


#endif