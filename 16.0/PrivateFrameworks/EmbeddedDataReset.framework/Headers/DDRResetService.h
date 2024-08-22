// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDRRESETSERVICE_H
#define DDRRESETSERVICE_H

@class NSXPCConnection, NSString, NSHashTable;
@protocol DDRClientResetProtocol, DDRClientObserverProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DDRResetService : NSObject <DDRClientResetProtocol, DDRClientObserverProtocol>



@property (nonatomic) int currentResetState; // ivar: _currentResetState
@property (retain, nonatomic) NSXPCConnection *dataResetXPCConnection; // ivar: _dataResetXPCConnection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (nonatomic) NSInteger mode; // ivar: _mode
@property (retain, nonatomic) NSHashTable *obervers; // ivar: _obervers
@property (retain, nonatomic) NSXPCConnection *observerNonLaunchingXPCConnection; // ivar: _observerNonLaunchingXPCConnection
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // ivar: _observerQueue
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)addOberver:(id)arg0 ;
-(void)didBeginDataResetWithMode:(NSInteger)arg0 ;
-(void)invalidate;
-(void)notifyClientsOfResetFailedWithErrorCode:(NSInteger)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)resetWithRequest:(id)arg0 completion:(id)arg1 ;
-(void)sync;
-(void)willBeginDataResetWithMode:(NSInteger)arg0 ;


@end


#endif