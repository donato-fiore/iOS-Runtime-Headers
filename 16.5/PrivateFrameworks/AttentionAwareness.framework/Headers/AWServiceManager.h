// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AWSERVICEMANAGER_H
#define AWSERVICEMANAGER_H

@class NSXPCConnection, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AWServiceManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSMutableSet *_serviceObservers;
}




+(id)invokeWithService:(id)arg0 ;
+(id)sharedManager;
+(void)addObserver:(id)arg0 ;
+(void)removeObserver:(id)arg0 ;
-(id)init;
-(id)invokeWithService:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif