// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REUPNEXTSIRICLIENT_H
#define REUPNEXTSIRICLIENT_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface REUpNextSiriClient : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)init;
-(void)_performOnRemoteObject:(id)arg0 ;
-(void)completedRequestWithDomain:(id)arg0 ;
-(void)dealloc;


@end


#endif