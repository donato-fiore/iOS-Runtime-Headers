// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDUBIQUITOUSCONVERSATIONMANAGER_H
#define EDUBIQUITOUSCONVERSATIONMANAGER_H

@class NSMutableDictionary, NSString, NSMutableSet;
@protocol EDConversationRemoteStorageDelegate, EFLoggable, EDConversationRemoteStorage, EDUbiquitousConversationManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDUbiquitousConversationManager : NSObject <EDConversationRemoteStorageDelegate, EFLoggable>



@property (retain, nonatomic) NSObject<EDConversationRemoteStorage> *cloudStorage; // ivar: _cloudStorage
@property (retain, nonatomic) NSMutableDictionary *conversationIDsBySyncKey; // ivar: _conversationIDsBySyncKey
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EDUbiquitousConversationManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL initialized; // ivar: _initialized
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *unmatchedKeys; // ivar: _unmatchedKeys


+(id)log;
-(BOOL)_synchronize;
-(BOOL)hasSubscribedConversations;
-(id)_syncKeyForConversationID:(NSInteger)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)syncKeyForUpdatedConversation:(NSInteger)arg0 flags:(NSUInteger)arg1 ;
-(void)_mergeServerChanges:(id)arg0 ;
-(void)conversationRemoteStorage:(id)arg0 didChangeEntries:(id)arg1 reason:(NSInteger)arg2 ;
-(void)performDailyExportForChangedConversations:(id)arg0 ;
-(void)performInitialSync;
-(void)pruneDatabasePurgingOldestEntries:(BOOL)arg0 ;
-(void)setFlags:(NSUInteger)arg0 forConversations:(id)arg1 ;


@end


#endif