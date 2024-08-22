// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKEXPRESSMODESETTINGSCOORDINATOR_H
#define NPKEXPRESSMODESETTINGSCOORDINATOR_H

@class LAContext, PKPass, PKExpressPassController, NSMutableDictionary;
@protocol NPKExpressModeSettingsCoordinatorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NPKExpressModeSettingsCoordinator : NSObject

@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (retain, nonatomic) LAContext *currentContext; // ivar: _currentContext
@property (nonatomic) NSUInteger currentOperation; // ivar: _currentOperation
@property (retain, nonatomic) PKPass *currentPass; // ivar: _currentPass
@property (weak, nonatomic) NSObject<NPKExpressModeSettingsCoordinatorDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PKExpressPassController *expressPassController; // ivar: _expressPassController
@property (nonatomic) BOOL expressStateUpdatePending; // ivar: _expressStateUpdatePending
@property (nonatomic) int notifyToken; // ivar: _notifyToken
@property (retain, nonatomic) NSMutableDictionary *previousPassStates; // ivar: _previousPassStates
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)isExpressModeSupportedForPass:(id)arg0 ;
-(BOOL)needUpgradeForPass:(id)arg0 ;
-(NSUInteger)_expressModeStateForPassWithUniqueID:(id)arg0 ;
-(NSUInteger)_expressModeStateForPassWithUniqueID:(id)arg0 fromControllerState:(id)arg1 ;
-(NSUInteger)expressModeStateForPass:(id)arg0 ;
-(id)initWithExpressPassController:(id)arg0 queue:(id)arg1 ;
-(void)_checkForConflictsInEnablingExpressForPass:(id)arg0 ;
-(void)_enableExpressModeForPass:(id)arg0 withCredential:(id)arg1 ;
-(void)_handleExpressStateChange;
-(void)_handleFailedEnableExpress;
-(void)_handleFailedPassUpgrade;
-(void)_handleFailedUserAuthentication;
-(void)_handleSuccessForPass:(id)arg0 ;
-(void)_handleSuccessfulUserAuthenticationWithCredential:(id)arg0 forPass:(id)arg1 ;
-(void)_handleUserCancelled;
-(void)_invokeCompletionHandlerWithSuccess:(BOOL)arg0 ;
-(void)_requestUserAuthenticationForPass:(id)arg0 ;
-(void)_upgradeExpressModeForPass:(id)arg0 withCredential:(id)arg1 ;
-(void)disableExpressModeForPass:(id)arg0 completionHandler:(id)arg1 ;
-(void)enableExpressModeForPass:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif