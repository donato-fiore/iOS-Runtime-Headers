// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VSUSERACCOUNTUPDATEMANAGER_H
#define VSUSERACCOUNTUPDATEMANAGER_H

@class NSString, NSMutableSet, NSMutableArray;
@protocol VSJSAppDelegate, VSStateMachineDelegate, VSUserAccountUpdateManagerDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "VSJSApp.h"
#import "VSUserAccountUpdateRequest.h"
#import "VSStateMachine.h"

@interface VSUserAccountUpdateManager : NSObject <VSJSAppDelegate, VSStateMachineDelegate>



@property (retain, nonatomic) VSJSApp *currentApp; // ivar: _currentApp
@property (retain, nonatomic) VSUserAccountUpdateRequest *currentUpdateRequest; // ivar: _currentUpdateRequest
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSUserAccountUpdateManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) VSStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *updateRequests; // ivar: _updateRequests
@property (retain, nonatomic) NSMutableArray *updatedUserAccounts; // ivar: _updatedUserAccounts
@property (retain, nonatomic) NSObject<OS_dispatch_source> *watchdog; // ivar: _watchdog


-(id)_requestOptionsWithUserAccounts:(id)arg0 callback:(id)arg1 ;
-(id)initWithUserAccountUpdateRequests:(id)arg0 ;
-(void)_configureWatchdogWithSeconds:(NSUInteger)arg0 ;
-(void)app:(id)arg0 didFailToStartWithError:(id)arg1 ;
-(void)app:(id)arg0 prewarmWithContext:(id)arg1 ;
-(void)appDidStart:(id)arg0 ;
-(void)appDidStop:(id)arg0 ;
-(void)transitionToBootingAppState;
-(void)transitionToEnqueuingNextUserAccountSetState;
-(void)transitionToInvokingOnRequestCallbackState;
-(void)transitionToNotifyingFinishState;
-(void)transitionToNotifyingForUserAccountSetState;
-(void)transitionToStoppingAppState;
-(void)updateUserAccounts;


@end


#endif