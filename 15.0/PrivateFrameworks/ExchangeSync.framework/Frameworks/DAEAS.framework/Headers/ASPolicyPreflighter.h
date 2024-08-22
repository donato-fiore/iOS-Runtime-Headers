// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASPOLICYPREFLIGHTER_H
#define ASPOLICYPREFLIGHTER_H

@class NSString;
@protocol ASPolicyPreflighterDelegate;

#import <Foundation/Foundation.h>

#import "ASAccount.h"
#import "ASPolicy.h"
#import "ASTaskManager.h"

@interface ASPolicyPreflighter : NSObject

@property (weak, nonatomic) ASAccount *account; // ivar: _account
@property (retain, nonatomic) ASPolicy *acknowledgedPolicy; // ivar: _acknowledgedPolicy
@property (weak, nonatomic) id *contextInfo; // ivar: _contextInfo
@property (weak, nonatomic) NSObject<ASPolicyPreflighterDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (copy, nonatomic) NSString *originalKey; // ivar: _originalKey
@property (retain, nonatomic) ASPolicy *policy; // ivar: _policy
@property (retain, nonatomic) ASTaskManager *taskManager; // ivar: _taskManager


-(id)initWithAccount:(id)arg0 policyKey:(id)arg1 ;
-(void)acknowledgeAccountOnlyRemoteWipeWithSuccess:(BOOL)arg0 ;
-(void)acknowledgeIntentionToRemoteWipe;
-(void)acknowledgePolicyCompliance;
-(void)cancelPendingPreflightRequest;
-(void)dealloc;
-(void)invalidate;
-(void)provisionTask:(id)arg0 failedWithError:(id)arg1 ;
-(void)provisionTask:(id)arg0 wipeRequested:(BOOL)arg1 accountOnlyRipeRequested:(BOOL)arg2 policies:(id)arg3 status:(NSInteger)arg4 ;
-(void)startPreflight;


@end


#endif