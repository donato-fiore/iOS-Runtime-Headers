// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDCONVERSATIONMULTIPLEREMOTESTORAGE_H
#define EDCONVERSATIONMULTIPLEREMOTESTORAGE_H

@class NSString;
@protocol EDConversationRemoteStorageDelegate, EDConversationRemoteStorage, EFLoggable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDConversationRemoteCloudKitStorage.h"
#import "EDTransactionService.h"

@interface EDConversationMultipleRemoteStorage : NSObject <EDConversationRemoteStorageDelegate, EDConversationRemoteStorage, EFLoggable>



@property (retain, nonatomic) EDConversationRemoteCloudKitStorage *cloudKitStorage; // ivar: _cloudKitStorage
@property (retain, nonatomic) EDTransactionService *dataReplicationTransaction; // ivar: _dataReplicationTransaction
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EDConversationRemoteStorageDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<EDConversationRemoteStorage> *kvsStorage; // ivar: _kvsStorage
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *privateQueue; // ivar: _privateQueue
@property (readonly) Class superclass;


+(id)log;
-(BOOL)isInitialized;
-(BOOL)synchronize;
-(id)dictionaryForKey:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDelegate:(id)arg0 ;
-(id)storageName;
-(void)_handleStorageReady:(id)arg0 ;
-(void)_replicateAllContentFromStore:(id)arg0 toStore:(id)arg1 synchronize:(BOOL)arg2 ;
-(void)_saveChanges:(id)arg0 fromStorage:(id)arg1 toStorage:(id)arg2 synchronize:(BOOL)arg3 ;
-(void)conversationRemoteStorage:(id)arg0 didChangeEntries:(id)arg1 reason:(NSInteger)arg2 ;
-(void)conversationRemoteStorageDidInitialize:(id)arg0 ;
-(void)conversationRemoteStorageDidResetData:(id)arg0 ;
-(void)conversationRemoteStorageWillResetData:(id)arg0 ;
-(void)refresh;
-(void)removeDictionaryForKey:(id)arg0 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;


@end


#endif