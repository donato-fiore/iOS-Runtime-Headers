// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDCONVERSATIONPERSISTENCE_H
#define EDCONVERSATIONPERSISTENCE_H

@class NSString;
@protocol EDUbiquitousConversationManagerDelegate, EDConversationDailyCloudExporterDelegate, EDPersistenceDatabaseSchemaProvider, EDConversationSubscriptionProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "EDUbiquitousConversationManager.h"
#import "EDPersistenceDatabase.h"
#import "EDPersistenceHookRegistry.h"

@interface EDConversationPersistence : NSObject <EDUbiquitousConversationManagerDelegate, EDConversationDailyCloudExporterDelegate, EDPersistenceDatabaseSchemaProvider, EDConversationSubscriptionProvider>



@property (readonly, nonatomic) EDUbiquitousConversationManager *conversationManager; // ivar: _conversationManager
@property (readonly, weak, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSubscribedConversations;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDPersistenceHookRegistry *hookRegistry; // ivar: _hookRegistry
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // ivar: _notificationQueue
@property (readonly) Class superclass;


+(NSInteger)conversationNotificationLevelForConversationFlags:(NSUInteger)arg0 ;
+(NSUInteger)conversationFlagsForConversationNotificationLevel:(NSInteger)arg0 ;
+(id)conversationIDMessageIDTableSchema;
+(id)conversationsTableName;
+(id)conversationsTableSchema;
+(id)log;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(NSInteger)conversationIDForMessageIDs:(id)arg0 ;
-(NSInteger)createConversationWithFlags:(NSUInteger)arg0 ;
-(NSInteger)currentSyncAnchorForDailyExport;
-(NSInteger)previousSyncAnchorForDailyExport;
-(NSUInteger)persistenceConversationFlagsForConversationID:(NSInteger)arg0 ;
-(id)flaggedConversationsChangedBetweenStartAnchor:(NSInteger)arg0 endAnchor:(NSInteger)arg1 ;
-(id)initWithDatabase:(id)arg0 hookRegistry:(id)arg1 ;
-(id)messageIDsForConversationID:(NSInteger)arg0 limit:(NSUInteger)arg1 ;
-(id)syncedConversationIDsBySyncKey;
-(void)_notifyOfFlagChangeForConversationID:(NSInteger)arg0 oldFlags:(NSUInteger)arg1 newFlags:(NSUInteger)arg2 reason:(NSInteger)arg3 generationWindow:(id)arg4 ;
-(void)_postChangeNotificationForConversationID:(NSInteger)arg0 flags:(NSUInteger)arg1 oldFlags:(NSUInteger)arg2 reason:(NSInteger)arg3 ;
-(void)clearConversationFlagsAndSyncKeyForConversationIDs:(id)arg0 ;
-(void)initializeConversationManagerAndPerformInitialSync;
-(void)markConversationWithIDs:(id)arg0 mute:(BOOL)arg1 ;
-(void)markConversationWithIDs:(id)arg0 notify:(BOOL)arg1 ;
-(void)pruneConversationTables:(CGFloat)arg0 ;
-(void)remoteMessageIDsAdded:(id)arg0 forConversationID:(NSInteger)arg1 ;
-(void)setNewPreviousSyncAnchorForDailyExport:(NSInteger)arg0 ;
-(void)setPersistenceConversationFlags:(NSUInteger)arg0 forConversationIDs:(id)arg1 reason:(NSInteger)arg2 ;
-(void)setPersistenceConversationFlags:(NSUInteger)arg0 syncKey:(id)arg1 forConversationID:(NSInteger)arg2 reason:(NSInteger)arg3 ;
-(void)updateAssociationTableForMessageID:(id)arg0 dateSent:(id)arg1 conversationID:(NSInteger)arg2 ;
-(void)updateAssociationTableForMessageIDs:(id)arg0 conversationID:(NSInteger)arg1 ;
-(void)updateAssociationTableForMessagePersistentIDs:(id)arg0 conversationID:(NSInteger)arg1 ;
-(void)updateConversationNotificationLevel:(NSInteger)arg0 forConversationWithID:(NSInteger)arg1 ;


@end


#endif