// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTTDATABASEMANAGER_H
#define RTTDATABASEMANAGER_H

@class HCDatabaseManager, CHManager;



@interface RTTDatabaseManager : HCDatabaseManager {
    CHManager *_callHistoryManager;
}




+(id)sharedManager;
-(BOOL)contactIDIsTTYContact:(id)arg0 ;
-(BOOL)contactIsTTYContact:(id)arg0 ;
-(BOOL)contactPathWasUsedForTTY:(id)arg0 ;
-(BOOL)deleteConversationWithCallUID:(id)arg0 ;
-(BOOL)deleteConversationsWithCallUIDs:(id)arg0 ;
-(BOOL)saveConversation:(id)arg0 ;
-(id)cloudKitContainer;
-(id)containerIdentifier;
-(id)conversationForCallUID:(id)arg0 ;
-(id)init;
-(id)managedObjectModelName;
-(void)_callHistoryDBDidChange:(id)arg0 ;
-(void)callHistoryDBDidChange:(id)arg0 ;
-(void)logMessage:(id)arg0 ;


@end


#endif