// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFORYOUTOPICMANAGER_H
#define WBSFORYOUTOPICMANAGER_H

@class WBSRecentHistoryTopicTagController, PPNamedEntityStore, WBSHistory, CKContextClient, NSDate, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSForYouTopicManager : NSObject {
    WBSRecentHistoryTopicTagController *_historyTopicTagController;
    PPNamedEntityStore *_namedEntityStore;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSHistory *_history;
    CKContextClient *_contextClient;
    NSDate *_lastContextKitRequestDate;
    NSArray *_mostRecentUserVisibleTopics;
}




-(id)initWithHistory:(id)arg0 contextClient:(id)arg1 ;
-(void)_createInternalQueueIfNecessary;
-(void)contextKitTopicsWithCompletionHandler:(id)arg0 ;
-(void)portraitNamedEntitiesWithCompletionHandler:(id)arg0 ;


@end


#endif