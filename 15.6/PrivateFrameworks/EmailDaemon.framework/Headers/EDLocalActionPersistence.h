// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDLOCALACTIONPERSISTENCE_H
#define EDLOCALACTIONPERSISTENCE_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDGmailLabelPersistence.h"

@interface EDLocalActionPersistence : NSObject <EFLoggable>



@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // ivar: _gmailLabelPersistence
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)actionFlagsTableSchema;
+(id)actionLabelsTableSchema;
+(id)actionMessagesTableSchema;
+(id)localMessageActionsTableSchema;
+(id)log;
+(id)tablesAndForeignKeysToResolve:(*id)arg0 associationsToResolve:(*id)arg1 ;
-(BOOL)_addActionMessageForMessage:(id)arg0 destinationMessage:(id)arg1 actionID:(NSInteger)arg2 actionPhase:(NSInteger)arg3 connection:(id)arg4 ;
-(BOOL)_addActionMessageForSourceRemoteID:(id)arg0 actionID:(NSInteger)arg1 connection:(id)arg2 ;
-(BOOL)_addFlagChange:(id)arg0 actionID:(NSInteger)arg1 connection:(id)arg2 ;
-(BOOL)_setLabelsOnAction:(NSInteger)arg0 labels:(id)arg1 add:(BOOL)arg2 connection:(id)arg3 ;
-(BOOL)mailboxURLIsInRemoteAccount:(id)arg0 ;
-(BOOL)moveSupportedFromMailboxURL:(id)arg0 toURL:(id)arg1 ;
-(BOOL)persistFlagChangeAction:(id)arg0 ;
-(BOOL)persistFlagChangeUndownloadedAction:(id)arg0 ;
-(BOOL)persistLabelChangeAction:(id)arg0 ;
-(BOOL)persistTransferAction:(id)arg0 ;
-(BOOL)persistTransferUndownloadedAction:(id)arg0 ;
-(BOOL)updateTransferAction:(id)arg0 withResults:(id)arg1 ;
-(BOOL)updateTransferUndownloadedMessageAction:(id)arg0 withResults:(id)arg1 ;
-(id)_flagChangeActionForRow:(id)arg0 connection:(id)arg1 ;
-(id)_flagChangeAllActionForRow:(id)arg0 connection:(id)arg1 ;
-(id)_flagChangeForAction:(NSInteger)arg0 connection:(id)arg1 ;
-(id)_labelChangeActionForRow:(id)arg0 connection:(id)arg1 ;
-(id)_sourceRemoteIDListForCopyItems:(id)arg0 ;
-(id)_transferActionForRow:(id)arg0 connection:(id)arg1 failedMessages:(id)arg2 ;
-(id)_transferUndownloadedActionForRow:(id)arg0 connection:(id)arg1 ;
-(id)_whereClauseToFindCopyItems:(id)arg0 ;
-(id)init;
-(id)initWithDatabase:(id)arg0 gmailLabelPersistence:(id)arg1 ;
-(id)messageActionsForAccountURL:(id)arg0 previousActionID:(NSInteger)arg1 ;
-(id)messageForDatabaseID:(NSInteger)arg0 ;
-(void)_deleteCopyItems:(id)arg0 actionID:(NSInteger)arg1 connection:(id)arg2 ;
-(void)_findMessagesForAction:(NSInteger)arg0 remoteIDs:(id)arg1 messages:(id)arg2 connection:(id)arg3 ;
-(void)_updateCopyItems:(id)arg0 toPhase:(NSInteger)arg1 actionID:(NSInteger)arg2 connection:(id)arg3 ;
-(void)removeMessageAction:(NSInteger)arg0 ;
-(void)updateFlagChangeAction:(id)arg0 withRemainingUIDs:(id)arg1 ;


@end


#endif