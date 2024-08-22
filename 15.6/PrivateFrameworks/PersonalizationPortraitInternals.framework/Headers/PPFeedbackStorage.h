// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPFEEDBACKSTORAGE_H
#define PPFEEDBACKSTORAGE_H

@class _PASLock;

#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"
#import "PPLocalNamedEntityStore.h"
#import "PPLocalTopicStore.h"
#import "PPLocalLocationStore.h"
#import "PPLocalQuickTypeBroker.h"
#import "PPLocalContactStore.h"
#import "PPLocalEventStore.h"
#import "PPLocalConnectionsStore.h"

@interface PPFeedbackStorage : NSObject {
    PPSQLDatabase *_db;
    PPLocalNamedEntityStore *_namedEntityStoreOverride;
    PPLocalTopicStore *_topicStoreOverride;
    PPLocalLocationStore *_locationStoreOverride;
    PPLocalQuickTypeBroker *_quickTypeBrokerOverride;
    PPLocalContactStore *_contactStoreOverride;
    PPLocalEventStore *_eventStoreOverride;
    PPLocalConnectionsStore *_connectionsStoreOverride;
    _PASLock *_lock;
}




+(id)storeTypeDescription:(unsigned char)arg0 ;
+(void)logFeedback:(id)arg0 domain:(unsigned char)arg1 domainStatus:(unsigned char)arg2 ;
-(BOOL)deleteExpiredFeedbackWithShouldContinueBlock:(id)arg0 ;
// -(BOOL)processPendingFeedbackWithShouldContinueBlock:(id)arg0 error:(unk)arg1  ;
-(BOOL)storePendingFeedback:(id)arg0 storeType:(unsigned char)arg1 error:(*id)arg2 ;
-(id)init;
-(id)mappedTopicsPendingFeedbackWithShouldContinueBlock:(id)arg0 ;
-(id)pendingTopicFeedback;


@end


#endif