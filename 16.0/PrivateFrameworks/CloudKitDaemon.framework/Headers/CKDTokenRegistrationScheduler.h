// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDTOKENREGISTRATIONSCHEDULER_H
#define CKDTOKENREGISTRATIONSCHEDULER_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDLogicalDeviceContext.h"

@interface CKDTokenRegistrationScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *callbackBlocks; // ivar: _callbackBlocks
@property (retain, nonatomic) NSMutableDictionary *callbackTimers; // ivar: _callbackTimers
@property (weak, nonatomic) CKDLogicalDeviceContext *deviceContext; // ivar: _deviceContext
@property (retain, nonatomic) NSMutableSet *operations; // ivar: _operations
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *unitTestingPushTokens; // ivar: _unitTestingPushTokens


-(id)initWithDeviceContext:(id)arg0 ;
-(void)_handlePushToken:(id)arg0 forContainer:(id)arg1 completionBlock:(id)arg2 ;
-(void)_refreshApsToken:(id)arg0 container:(id)arg1 completionBlock:(id)arg2 ;
-(void)_removeApsToken:(id)arg0 appContainerAccountTuple:(id)arg1 completionBlock:(id)arg2 ;
-(void)dealloc;
-(void)forceTokenRefreshForAllClients;
-(void)handlePublicPushTokenDidUpdate:(id)arg0 ;
-(void)refreshAllClientsNow:(BOOL)arg0 ;
-(void)registerTokenForAdopterContainer:(id)arg0 completionBlock:(id)arg1 ;
-(void)registerTokenRefreshActivity;
-(void)tokenRefreshChanged;
-(void)unregisterAllTokensForAccountID:(id)arg0 completionHandler:(id)arg1 ;
-(void)unregisterTokenForAppContainerAccountTuple:(id)arg0 ;


@end


#endif