// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFWIFIEXECUTIONENVIRONMENTOBSERVER_H
#define HFWIFIEXECUTIONENVIRONMENTOBSERVER_H

@class NSString, HMHome;
@protocol HFHomeManagerObserver, HFExecutionEnvironmentObserver;

#import <Foundation/Foundation.h>

#import "HFHomeKitDispatcher.h"
#import "HFExecutionEnvironment.h"

@interface HFWiFiExecutionEnvironmentObserver : NSObject <HFHomeManagerObserver, HFExecutionEnvironmentObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) HFHomeKitDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly, weak, nonatomic) HFExecutionEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *lastKnownHome; // ivar: _lastKnownHome
@property (nonatomic) NSUInteger lastKnownRunningState; // ivar: _lastKnownRunningState
@property (readonly) Class superclass;


-(id)initWithExecutionEnvironment:(id)arg0 dispatcher:(id)arg1 ;
-(void)_updateState;
-(void)dealloc;
-(void)executionEnvironmentDidBecomeActive:(id)arg0 ;
-(void)executionEnvironmentDidEnterBackground:(id)arg0 ;
-(void)homeKitDispatcher:(id)arg0 manager:(id)arg1 didChangeHome:(id)arg2 ;
-(void)homeManagerDidFinishInitialDatabaseLoad:(id)arg0 ;


@end


#endif