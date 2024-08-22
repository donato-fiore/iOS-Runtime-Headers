// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCURRENTCONVERSATIONSMANAGER_H
#define CKCURRENTCONVERSATIONSMANAGER_H

@class NSCountedSet, NSMutableDictionary, IMDoubleLinkedList;

#import <Foundation/Foundation.h>


@interface CKCurrentConversationsManager : NSObject

@property (readonly, nonatomic) NSUInteger cacheSize;
@property (retain, nonatomic) NSCountedSet *currentConversations; // ivar: _currentConversations
@property (retain, nonatomic) NSMutableDictionary *idToNodeDictionary; // ivar: _idToNodeDictionary
@property (retain, nonatomic) IMDoubleLinkedList *orderedKeys; // ivar: _orderedKeys


+(id)sharedInstance;
-(BOOL)_canDumpConversationFromCache:(id)arg0 ;
-(void)_prepareToDumpCachedConversation:(id)arg0 ;
-(void)addConversation:(id)arg0 ;
-(void)loadHistoryForConversation:(id)arg0 keepAllCurrentlyLoadedMessages:(BOOL)arg1 ;
-(void)pruneCache;
-(void)pruneCacheToSize:(NSUInteger)arg0 ;
-(void)purgeConversation:(id)arg0 ;
-(void)purgeConversations:(id)arg0 ;
-(void)removeConversation:(id)arg0 ;


@end


#endif