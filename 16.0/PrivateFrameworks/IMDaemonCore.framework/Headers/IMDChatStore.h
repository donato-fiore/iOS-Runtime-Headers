// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMDCHATSTORE_H
#define IMDCHATSTORE_H

@class NSString, IMStateCaptureAssistant;
@protocol IMStateLoggable, IMDRemoteDatabaseProtocol, IMDMessagePTaskStore;

#import <Foundation/Foundation.h>


@interface IMDChatStore : NSObject <IMStateLoggable>



@property (readonly, nonatomic) NSObject<IMDRemoteDatabaseProtocol> *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<IMDMessagePTaskStore> *messagePTaskStore; // ivar: _messagePTaskStore
@property (retain) NSString *modificationStamp; // ivar: _lastModificationStamp
@property (retain, nonatomic) IMStateCaptureAssistant *stateCaptureAssistant; // ivar: _stateCaptureAssistant
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)storeChat:(id)arg0 ;
-(BOOL)updateHandle:(id)arg0 sourceMessage:(id)arg1 personCentricID:(id)arg2 onService:(id)arg3 ;
-(BOOL)updatePersonCentricIDForHandlesInChatWithMessage:(id)arg0 fromIdentifier:(id)arg1 personCentricID:(id)arg2 chat:(id)arg3 ;
-(NSUInteger)unreadCountForChat:(id)arg0 ;
-(id)_chatRegistry;
-(id)_incomingChatWithChatRecord:(id)arg0 ;
-(id)_incomingChatsWithChatRecords:(id)arg0 ;
-(id)_loadChatsIncludingAllChats:(BOOL)arg0 ;
-(id)chatWithGUID:(id)arg0 ;
-(id)chatsFilteredUsingPredicate:(id)arg0 ;
-(id)chatsFilteredUsingPredicate:(id)arg0 sortedUsingDescriptors:(id)arg1 limit:(NSUInteger)arg2 ;
-(id)chatsFilteredUsingPredicate:(id)arg0 sortedUsingLastMessageDateAscending:(BOOL)arg1 olderThan:(id)arg2 limit:(NSUInteger)arg3 ;
-(id)chatsGUIDsForMessageWithGUID:(id)arg0 ;
-(id)chatsGUIDsForMessageWithIdentifier:(NSInteger)arg0 ;
-(id)chatsWithGroupID:(id)arg0 ;
-(id)chatsWithHandle:(id)arg0 onService:(id)arg1 ;
-(id)chatsWithHandles:(id)arg0 onService:(id)arg1 displayName:(id)arg2 groupID:(id)arg3 style:(unsigned char)arg4 ;
-(id)chatsWithIdentifier:(id)arg0 ;
-(id)chatsWithIdentifier:(id)arg0 onService:(id)arg1 ;
-(id)chatsWithPinningIdentifier:(id)arg0 ;
-(id)chatsWithRoomname:(id)arg0 onService:(id)arg1 ;
-(id)init;
-(id)loadAllChats;
-(id)loadRecentChats;
-(id)newestChatWithGroupID:(id)arg0 onService:(id)arg1 ;
-(id)newestChatWithOriginalGroupID:(id)arg0 onService:(id)arg1 ;
-(id)stateDictionaryForDiagnosticsRequest;
-(void)_addGroupPhotoToTransferCenterForChat:(id)arg0 ;
-(void)_broadcastToForceReloadChats;
-(void)_processIncomingChat:(id)arg0 ;
-(void)_updateModificationDate;
-(void)addMessageWithGUID:(id)arg0 toChat:(id)arg1 ;
-(void)addMessageWithGUID:(id)arg0 toChat:(id)arg1 deferSpotlightIndexing:(BOOL)arg2 ;
-(void)archiveChat:(id)arg0 ;
-(void)blackholeChat:(id)arg0 ;
-(void)deleteChat:(id)arg0 ;
-(void)enumerateBatchedChatsFilteredUsingPredicate:(id)arg0 batchSize:(NSUInteger)arg1 block:(id)arg2 ;
-(void)enumerateBatchedChatsFilteredUsingPredicate:(id)arg0 block:(id)arg1 ;
-(void)remapMessageError:(unsigned int)arg0 toError:(unsigned int)arg1 forChat:(id)arg2 completion:(id)arg3 ;
-(void)removeMessageWithGUID:(id)arg0 fromChat:(id)arg1 ;
-(void)setChatIsFiltered:(NSInteger)arg0 withChatGuid:(id)arg1 ;
-(void)unarchiveChat:(id)arg0 ;
-(void)unblackholeChat:(id)arg0 ;


@end


#endif