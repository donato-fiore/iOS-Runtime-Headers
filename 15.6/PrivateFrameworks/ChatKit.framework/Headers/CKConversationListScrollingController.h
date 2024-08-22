// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCONVERSATIONLISTSCROLLINGCONTROLLER_H
#define CKCONVERSATIONLISTSCROLLINGCONTROLLER_H

@class IMChatRegistry, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CKConversationList.h"

@interface CKConversationListScrollingController : NSObject

@property (readonly, nonatomic) IMChatRegistry *chatRegistry; // ivar: _chatRegistry
@property (readonly, nonatomic) CKConversationList *conversationList; // ivar: _conversationList
@property (nonatomic, getter=isFetchingOlderConversations) BOOL fetchingOlderConversations; // ivar: _fetchingOlderConversations
@property (retain, nonatomic) NSMutableDictionary *filterModeToEarliestFetchedDate; // ivar: _filterModeToEarliestFetchedDate
@property (retain, nonatomic) NSMutableDictionary *filterModeToEarliestReachedDate; // ivar: _filterModeToEarliestReachedDate


-(id)_chatPredicateForFilterMode:(NSUInteger)arg0 ;
-(id)_convertFilterActionDictionaryToConversationListFilterModeDictionary:(id)arg0 ;
-(id)initWithConversationList:(id)arg0 chatRegistry:(id)arg1 ;
-(void)_handleRegistryDidLoadNotification:(id)arg0 ;
-(void)_loadOlderConversationsWithFilterMode:(NSUInteger)arg0 ;
-(void)_loadOlderConversationsWithFilterMode:(NSUInteger)arg0 limit:(NSUInteger)arg1 ;
-(void)_resetDateTrackingWithChatRegistry:(id)arg0 ;
-(void)reachedConversationWithLastMessageDate:(id)arg0 filterMode:(NSUInteger)arg1 remainingRows:(NSInteger)arg2 ;


@end


#endif