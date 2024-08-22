// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EDMESSAGEITEMIDCOLLECTOR_H
#define _EDMESSAGEITEMIDCOLLECTOR_H

@class NSMutableArray, NSConditionLock, NSString;
@protocol EDMessageQueryHelperDelegate, EFScheduler;

#import <Foundation/Foundation.h>


@interface _EDMessageItemIDCollector : NSObject <EDMessageQueryHelperDelegate>

 {
    id<EFScheduler> *_scheduler;
    NSMutableArray *_messageItemIDs;
    NSConditionLock *_collectionLock;
    NSString *_errorString;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)collectItemIDsWithQuery:(id)arg0 messagePersistence:(id)arg1 hookRegistry:(id)arg2 remindMeNotificationController:(id)arg3 remoteSearchProvider:(id)arg4 errorString:(*id)arg5 ;
-(id)init;
-(void)queryHelper:(id)arg0 conversationIDDidChangeForMessages:(id)arg1 fromConversationID:(NSInteger)arg2 ;
-(void)queryHelper:(id)arg0 conversationNotificationLevelDidChangeForConversation:(NSInteger)arg1 conversationID:(NSInteger)arg2 ;
-(void)queryHelper:(id)arg0 didAddMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didDeleteMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didFindMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 didUpdateMessages:(id)arg1 forKeyPaths:(id)arg2 ;
-(void)queryHelper:(id)arg0 messageFlagsDidChangeForMessages:(id)arg1 ;
-(void)queryHelper:(id)arg0 objectIDDidChangeForMessage:(id)arg1 oldObjectID:(id)arg2 oldConversationID:(NSInteger)arg3 ;
-(void)queryHelperDidFindAllMessages:(id)arg0 ;
-(void)queryHelperDidFinishRemoteSearch:(id)arg0 ;
-(void)queryHelperNeedsRestart:(id)arg0 ;


@end


#endif