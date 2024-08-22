// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSTOUCHEVENTSERVICE_H
#define BKSTOUCHEVENTSERVICE_H

@class BSServiceConnection, NSMutableDictionary, NSString;
@protocol BKSTouchEventClient_IPC, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BKSTouchEventService : NSObject <BKSTouchEventClient_IPC>

 {
    NSObject<OS_dispatch_queue> *_requestQueue;
    BSServiceConnection *_connection;
    os_unfair_lock_s _connectionLock;
    NSMutableDictionary *_registrationLock_registrationsByContextID;
    os_unfair_lock_s _registrationLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)addAuthenticationSpecifications:(id)arg0 forReason:(id)arg1 ;
-(id)init;
-(id)registerSceneHostSettings:(id)arg0 forCAContextID:(unsigned int)arg1 ;
-(void)_connectToService;
-(void)_repostAllRegistrations;
-(void)addTouchAuthenticationSpecifications:(id)arg0 forReason:(id)arg1 ;


@end


#endif