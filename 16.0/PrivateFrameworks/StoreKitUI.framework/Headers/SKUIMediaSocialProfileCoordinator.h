// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMEDIASOCIALPROFILECOORDINATOR_H
#define SKUIMEDIASOCIALPROFILECOORDINATOR_H

@class NSDate, NSOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SKUIMediaSocialProfile.h"

@interface SKUIMediaSocialProfileCoordinator : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_lastAuthenticationAttempt;
    SKUIMediaSocialProfile *_lastKnownProfile;
    NSDate *_lastRequestDate;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_profileBlocks;
    BOOL _waitingForAuthentication;
}




+(id)sharedCoordinator;
-(id)init;
-(void)_accountStoreChangeNotification:(id)arg0 ;
-(void)_authenticateOnCompletion:(id)arg0 ;
-(void)_fireProfileBlocksWithProfile:(id)arg0 isFinal:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleOperationResponseWithProfile:(id)arg0 error:(id)arg1 ;
-(void)_queueProfileBlock:(id)arg0 ;
-(void)_requestProfile;
-(void)dealloc;
-(void)getProfileWithOptions:(id)arg0 profileBlock:(id)arg1 ;
-(void)reset;


@end


#endif