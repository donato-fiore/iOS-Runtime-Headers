// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKSALTERNATESYSTEMAPP_H
#define BKSALTERNATESYSTEMAPP_H

@class NSString, NSXPCConnection;
@protocol BKSAlternateSystemAppClientProtocol, BKSAlternateSystemAppDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface BKSAlternateSystemApp : NSObject <BKSAlternateSystemAppClientProtocol>



@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BKSAlternateSystemAppDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSInteger state; // ivar: _state
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *stateChangeSemaphore; // ivar: _stateChangeSemaphore
@property (nonatomic) BOOL stateChangeWaiter; // ivar: _stateChangeWaiter
@property (readonly) Class superclass;


-(id)initWithBundleId:(id)arg0 ;
-(void)_handleInterruptedConnection;
-(void)_handleInvalidatedConnection;
-(void)_queue_changeState:(NSInteger)arg0 ;
-(void)_waitForState:(NSInteger)arg0 ;
-(void)activate;
-(void)alternateSystemAppWithBundleID:(id)arg0 didExitWithContext:(id)arg1 ;
-(void)alternateSystemAppWithBundleID:(id)arg0 failedToOpenWithResult:(id)arg1 ;
-(void)alternateSystemAppWithBundleIDDidOpen:(id)arg0 ;
-(void)alternateSystemAppWithBundleIDDidTerminate:(id)arg0 ;
-(void)dealloc;
-(void)didBlockSystemAppForAlternateSystemApp;
-(void)didUnblockSystemAppForAlternateSystemApp;
-(void)terminate;


@end


#endif