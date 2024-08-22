// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKKNOWLEDGESTORE_H
#define _DKKNOWLEDGESTORE_H

@protocol _DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying, _DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_DKQueryDispatcher.h"
#import "_DKRateLimitPolicyEnforcer.h"
#import "_DKPrivacyPolicyEnforcer.h"

@interface _DKKnowledgeStore : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSynchronizing, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>

 {
    NSObject<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeDeleting><_DKKnowledgeEventStreamDeleting> *_knowledgeStoreHandle;
    _DKQueryDispatcher *_queryDispatcher;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    NSObject<OS_dispatch_queue> *_defaultQueue;
}




+(id)knowledgeStore;
+(id)knowledgeStoreWithDirectReadOnlyAccess;
+(id)knowledgeStoreWithDirectReadOnlyAccessWithXPCStore:(id)arg0 storeDirectory:(id)arg1 ;
+(id)knowledgeStoreWithDirectReadWriteAccess;
+(id)userKnowledgeStore;
+(id)userKnowledgeStoreWithDirectReadOnlyAccess;
+(id)userKnowledgeStoreWithDirectReadWriteAccess;
-(BOOL)deleteObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)deleteRemoteState:(*id)arg0 ;
-(BOOL)saveObjects:(id)arg0 error:(*id)arg1 ;
-(BOOL)synchronizeWithError:(*id)arg0 ;
-(BOOL)synchronizeWithUrgency:(NSUInteger)arg0 client:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)deleteAllEventsInEventStream:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)deleteAllEventsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)deviceUUID;
-(id)executeQuery:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithKnowledgeStoreHandle:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)sourceDeviceIdentityFromObject:(id)arg0 error:(*id)arg1 ;
-(id)sourceDeviceIdentityWithError:(*id)arg0 ;
-(void)deleteAllEventsInEventStream:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteObjects:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 ;
-(void)executeQuery:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)saveObjects:(id)arg0 responseQueue:(id)arg1 withCompletion:(id)arg2 ;
-(void)synchronizeWithUrgency:(NSUInteger)arg0 client:(id)arg1 responseQueue:(id)arg2 completion:(id)arg3 ;


@end


#endif