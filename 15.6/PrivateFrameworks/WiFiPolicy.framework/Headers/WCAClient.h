// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCACLIENT_H
#define WCACLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WCAClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSInteger _changeCounter;
}


@property (retain, nonatomic) NSXPCConnection *connectionToService; // ivar: _connectionToService


+(id)sharedClient;
-(id)init;
-(void)_establishDaemonConnection;
-(void)_invalidateDaemonConnectionIfPossible;
-(void)executeFetchRequest:(id)arg0 ;
-(void)fetchWiFiAssetsFromServer;


@end


#endif