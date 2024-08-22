// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFLIBRARYIMAPSTORE_H
#define MFLIBRARYIMAPSTORE_H

@class EFFuture, EDServerMessagePersistence;
@protocol MFIMAPMailboxTaskManager;


#import "MFLibraryStore.h"
#import "IMAPAccount.h"

@interface MFLibraryIMAPStore : MFLibraryStore {
    EFFuture *_serverMessagePersistenceFuture;
}


@property (readonly, nonatomic) IMAPAccount *account;
@property (nonatomic) BOOL allowsAppend;
@property (nonatomic) NSUInteger newHighestModSequence;
@property (readonly, nonatomic) EDServerMessagePersistence *serverMessagePersistence;
@property (readonly, nonatomic) NSObject<MFIMAPMailboxTaskManager> *taskManager; // ivar: _taskManager
@property (nonatomic) unsigned int uidNext;
@property (nonatomic) unsigned int uidValidity;


+(id)copyRemoteIDForTemporaryUid:(unsigned int)arg0 ;
-(BOOL)_fetchDataForMimePart:(id)arg0 range:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 consumer:(id)arg3 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)canCompact;
-(BOOL)canFetchMessageIDs;
-(BOOL)canFetchSearchResults;
-(BOOL)downloadMimePartNumber:(id)arg0 message:(id)arg1 withProgressBlock:(id)arg2 ;
-(BOOL)hasValidCacheFileForMessage:(id)arg0 ;
-(NSInteger)fetchMessagesWithMessageIDs:(id)arg0 andSetFlags:(NSUInteger)arg1 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)growFetchWindow;
-(id)_dataForMessage:(id)arg0 readHeadersOnly:(BOOL)arg1 ;
-(id)_fetchBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 partial:(*BOOL)arg3 ;
-(id)_fetchFullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 didDownload:(*BOOL)arg3 ;
-(id)_fetchHeaderDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)initWithMailbox:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)messageForRemoteID:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 inMailbox:(id)arg1 ;
-(id)messageIdRollCall:(id)arg0 ;
-(id)messagesWithRemoteIDs:(id)arg0 ;
-(id)replayAction:(id)arg0 ;
-(id)storeSearchResultMatchingCriterion:(id)arg0 limit:(unsigned int)arg1 offset:(id)arg2 error:(*id)arg3 ;
-(void)_handleFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)close;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)doCompact;
-(void)reselectMailbox;
-(void)setLibrary:(id)arg0 ;
-(void)updateServerUnreadCountClosingConnection:(BOOL)arg0 ;


@end


#endif