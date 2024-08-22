// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDSPOTLIGHTITEMRECORDER_H
#define _CDSPOTLIGHTITEMRECORDER_H

@class NSMutableArray, NSMutableDictionary, BMIntentStream, NSString;
@protocol SpotlightReceiver, CSSearchableIndexObserver, OS_dispatch_source, OS_dispatch_queue, OS_os_transaction, _DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting, _CDInteractionQuerying><_CDInteractionRecording><_CDInteractionDeleting;

#import <Foundation/Foundation.h>

#import "_DKRateLimitPolicyEnforcer.h"
#import "_DKPrivacyPolicyEnforcer.h"

@interface _CDSpotlightItemRecorder : NSObject <SpotlightReceiver, CSSearchableIndexObserver>

 {
    NSObject<OS_dispatch_source> *_batchExecutionSource;
    NSObject<OS_dispatch_queue> *_batchExecutionSourceQueue;
    NSObject<OS_dispatch_queue> *_pendingOperationsQueue;
    NSMutableArray *_pendingOperations;
    NSObject<OS_os_transaction> *_pendingOperationsTransaction;
    NSObject<OS_dispatch_queue> *_activityRateLimiterQueue;
    NSMutableDictionary *_activityPerBundleRateLimit;
    id<_DKKnowledgeQuerying><_DKKnowledgeSaving><_DKKnowledgeEventStreamDeleting> *_knowledgeStore;
    _DKRateLimitPolicyEnforcer *_rateLimitEnforcer;
    _DKPrivacyPolicyEnforcer *_privacyEnforcer;
    id<_CDInteractionQuerying><_CDInteractionRecording><_CDInteractionDeleting> *_recorder;
    BMIntentStream *_intentStream;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)spotlightItemRecorder;
+(id)spotlightItemRecorderWithInteractionRecorder:(id)arg0 ;
+(id)spotlightItemRecorderWithInteractionRecorder:(id)arg0 knowledgeStore:(id)arg1 ;
+(id)spotlightItemRecorderWithKnowledgeStore:(id)arg0 ;
-(id)initWithInteractionRecorder:(id)arg0 ;
-(id)initWithInteractionRecorder:(id)arg0 knowledgeStore:(id)arg1 ;
-(id)initWithInteractionRecorder:(id)arg0 knowledgeStore:(id)arg1 rateLimitEnforcer:(id)arg2 ;
-(id)supportedContentTypes;
-(id)supportedINIntentClassNames;
-(id)supportedUTIs;
-(void)addInteractions:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)addInteractions:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 withCompletion:(id)arg3 ;
-(void)addOrUpdateSearchableItems:(id)arg0 ;
-(void)addOrUpdateSearchableItems:(id)arg0 bundleID:(id)arg1 ;
-(void)addOrUpdateSearchableItems:(id)arg0 bundleID:(id)arg1 withCompletion:(id)arg2 ;
-(void)addUserAction:(id)arg0 withItem:(id)arg1 ;
-(void)addUserAction:(id)arg0 withItem:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 ;
-(void)deleteAllInteractionsWithBundleID:(id)arg0 protectionClass:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg0 ;
-(void)deleteAllSearchableItemsWithBundleID:(id)arg0 withCompletion:(id)arg1 ;
-(void)deleteAllUserActivities:(id)arg0 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteInteractionsWithGroupIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 withCompletion:(id)arg3 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;
-(void)deleteInteractionsWithIdentifiers:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 withCompletion:(id)arg3 ;
-(void)deleteSearchableItemsSinceDate:(id)arg0 bundleID:(id)arg1 ;
-(void)deleteSearchableItemsSinceDate:(id)arg0 bundleID:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)deleteSearchableItemsWithDomainIdentifiers:(id)arg0 bundleID:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)deleteSearchableItemsWithIdentifiers:(id)arg0 bundleID:(id)arg1 withCompletion:(id)arg2 ;
-(void)deleteUserActivitiesWithPersistentIdentifiers:(id)arg0 bundleID:(id)arg1 ;
-(void)donateRelevantShortcuts:(id)arg0 bundleID:(id)arg1 ;
-(void)registerSpotlightRecorderWithServiceName:(id)arg0 ;


@end


#endif