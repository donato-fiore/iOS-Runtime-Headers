// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALREMINDERMIGRATIONCONTEXT_H
#define CALREMINDERMIGRATIONCONTEXT_H

@class REMStore, REMSaveRequest, REMAccountChangeItem, NSMutableArray, NSDictionary, REMAccount, NSMutableDictionary, REMObjectID, NSString;
@protocol CalReminderKitDatabaseMigrationContext, CalReminderKitProvider;

#import <Foundation/Foundation.h>


@interface CalReminderMigrationContext : NSObject {
    id<CalReminderKitDatabaseMigrationContext> *_remDatabaseMigrationContext;
    REMStore *_reminderStore;
    REMSaveRequest *_saveRequest;
    REMAccountChangeItem *_localAccountChangeItem;
    NSMutableArray *_orderedListChangeItemsStack;
    BOOL _accountsLoaded;
    NSDictionary *_accountsForAccountIdentifiers;
    REMAccount *_localAccount;
    NSMutableDictionary *_accountChangeItemsForAccountIdentifiers;
    BOOL _recordedAnyFatalFailures;
}


@property (readonly, nonatomic) REMObjectID *defaultListMigratedIdentifier; // ivar: _defaultListMigratedIdentifier
@property (retain, nonatomic) NSString *defaultListOriginalIdentifier; // ivar: _defaultListOriginalIdentifier
@property (readonly, nonatomic) BOOL isCurrentOrderedListItemsContextEmpty;
@property (readonly, nonatomic) REMAccountChangeItem *localAccountChangeItem;
@property (readonly, nonatomic) NSObject<CalReminderKitProvider> *reminderKitProvider; // ivar: _reminderKitProvider
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly, nonatomic) BOOL shouldPerformMigration;


-(BOOL)_setup;
-(BOOL)_tryBeginMigration;
-(BOOL)ensureAccountsExist:(id)arg0 ;
-(BOOL)finishMigrationWithSave:(BOOL)arg0 ;
-(id)_initWithReminderKitProvider:(id)arg0 ;
-(id)_sortedAddedListChangeItems;
-(id)accountsForAccountIdentifiers;
-(id)existingAccountChangeItemWithAccountIdentifier:(id)arg0 ;
-(id)reminderStore;
-(void)_didEndMigrationWithSuccess:(BOOL)arg0 ;
-(void)_loadAccountsIfNeeded;
-(void)_sortAddedReminderListsInAccountChangeItem:(id)arg0 ;
-(void)_verifyAccountHasNoLists:(id)arg0 withAccountIdentifier:(id)arg1 ;
-(void)_willBeginMigration;
-(void)popOrderedListItemsContextAndSortListsInAccountChangeItem:(id)arg0 ;
-(void)pushOrderedListItemsContext;
-(void)recordAddedListChangeItem:(id)arg0 withOriginalIdentifier:(id)arg1 order:(id)arg2 ;
-(void)recordMigrationFailureWithDescription:(id)arg0 inStage:(NSUInteger)arg1 underlyingError:(id)arg2 ;
-(void)recordMigrationFailureWithDescription:(id)arg0 inStage:(NSUInteger)arg1 underlyingError:(id)arg2 relatedTo:(id)arg3 ;
-(void)recordMigrationFailureWithDescription:(id)arg0 inStage:(NSUInteger)arg1 underlyingError:(id)arg2 relatedTo:(id)arg3 isFatal:(BOOL)arg4 ;


@end


#endif