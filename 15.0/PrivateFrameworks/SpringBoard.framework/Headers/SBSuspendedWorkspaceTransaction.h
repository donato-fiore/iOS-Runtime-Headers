// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUSPENDEDWORKSPACETRANSACTION_H
#define SBSUSPENDEDWORKSPACETRANSACTION_H

@class NSMapTable, NSMutableSet, NSError, NSString;
@protocol FBApplicationProcessLaunchTransactionObserver;


#import "SBMainWorkspaceTransaction.h"

@interface SBSuspendedWorkspaceTransaction : SBMainWorkspaceTransaction <FBApplicationProcessLaunchTransactionObserver>

 {
    NSMapTable *_launchTransactionToSceneEntityMap;
    NSMutableSet *_outstandingProcessLaunchTransactions;
    NSMutableSet *_incompleteProcessLaunchTransactions;
    NSError *_anyLaunchError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)_addSceneEntityToAppRecency:(id)arg0 ;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg0 ;
-(void)_didComplete;
-(void)_sendActivationResultWithError:(id)arg0 ;
-(void)transaction:(id)arg0 willLaunchProcess:(id)arg1 ;


@end


#endif