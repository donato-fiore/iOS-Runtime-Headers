// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDISTRIBUTEDNOTIFICATIONCENTER_H
#define SSDISTRIBUTEDNOTIFICATIONCENTER_H

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SSXPCServer.h"

@interface SSDistributedNotificationCenter : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableArray *_observers;
    NSString *_portName;
    SSXPCServer *_server;
}


@property (readonly) NSString *namedPort;


-(id)addObserverForName:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)initWithNamedPort:(id)arg0 ;
-(void)_distributedNotificationMessage:(id)arg0 connection:(id)arg1 ;
-(void)_sendRegistrationMessage:(NSInteger)arg0 name:(id)arg1 ;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;


@end


#endif