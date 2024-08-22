// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MLCHANGEOBSERVER_H
#define _MLCHANGEOBSERVER_H

@class NSString, NSXPCConnection, MSVTaskAssertion;
@protocol MLMediaLibraryAccountChangeObserver, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver>



@property (retain, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) MSVTaskAssertion *taskAssertion; // ivar: _taskAssertion
@property (nonatomic, getter=hasTimedOut) BOOL timedOut; // ivar: _timedOut
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // ivar: _timeoutTimer


+(id)observerWithConnection:(id)arg0 ;
-(void)dealloc;
-(void)emergencyDisconnectWithCompletion:(id)arg0 ;
-(void)performDatabasePathChange:(id)arg0 completion:(id)arg1 ;
-(void)setupTaskAssertion;
-(void)setupTimeoutTimer;
-(void)tearDownTaskAssertion;
-(void)tearDownTimeoutTimer;
-(void)terminateForFailureToPerformDatabasePathChange;


@end


#endif