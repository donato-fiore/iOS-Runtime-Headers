// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DKKNOWLEDGESTORAGELOGGING_H
#define _DKKNOWLEDGESTORAGELOGGING_H

@protocol _DKKnowledgeStorageEventNotificationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DKKnowledgeStorageLogging : NSObject <_DKKnowledgeStorageEventNotificationDelegate>

 {
    NSObject<OS_dispatch_queue> *_notificationQueue;
}




-(id)init;
-(void)knowledgeStorage:(id)arg0 didDeleteEventsWithStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg0 didInsertEventsWithStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg0 didInsertLocalEventsWithStreamNameCounts:(id)arg1 ;
-(void)knowledgeStorage:(id)arg0 didTombstoneEventsWithStreamNameCounts:(id)arg1 ;


@end


#endif