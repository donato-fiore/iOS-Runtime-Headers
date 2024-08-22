// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCACCOUNTSMANAGER_H
#define BRCACCOUNTSMANAGER_H

@class NSMutableDictionary, UMUserSyncTask, NSMutableArray, NSString;
@protocol UMUserSyncStakeholder, BRCAccountHandlerDelegate, BRCCiconiaStatusProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRCAccountsManager : NSObject <UMUserSyncStakeholder, BRCAccountHandlerDelegate, BRCCiconiaStatusProvider>

 {
    NSMutableDictionary *_versionsProvidersByVolumeID;
    NSMutableDictionary *_accountHandlersByACAccountID;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadAccountsRequested;
    BOOL _finishedLoadingAccounts;
    UMUserSyncTask *_checkNeedsBubbleTask;
    NSMutableArray *_accountsListChangeHandlers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isInSyncBubble; // ivar: _isInSyncBubble
@property (readonly) Class superclass;


+(id)sharedManager;
-(BOOL)_isDeviceUnlocked;
-(BOOL)_maintainExistingFileProviderDomainsWithAccounts:(id)arg0 withError:(*id)arg1 ;
-(BOOL)cleanupAccountDataForLoggedOutAccountWithPersona:(id)arg0 ;
-(BOOL)destroySessionWithACAccountID:(id)arg0 ;
-(BOOL)retrySyncBubbleLaterIfNeededWithError:(id)arg0 ;
-(BOOL)shouldLastCiconiaRunConsideredAsSuccessForFPFSMigrationRollupForAllAccounts;
-(BOOL)waitForAccountLoadingSynchronouslyIfPossible:(id)arg0 ;
-(BOOL)waitForInitialAccountLoadingSynchronouslyIfPossible;
-(id)_getOrCreateAccountHandlerForACAccountID:(id)arg0 ;
-(id)accountForCurrentPersona;
-(id)accountForPersona:(id)arg0 ;
-(id)accountHandlerForACAccountID:(id)arg0 ;
-(id)accountHandlerForCurrentPersona;
-(id)getOrCreateAccountHandlerForACAccountID:(id)arg0 ;
-(id)init;
-(id)personaIdentifierForACAccountID:(id)arg0 ;
-(id)versionsProviderForVolume:(id)arg0 ;
-(void)_createSyncBubbleTasksIfNecessary;
-(void)accountHandler:(id)arg0 didChangeSessionTo:(id)arg1 ;
-(void)accountHandler:(id)arg0 willChangeSessionFrom:(id)arg1 ;
-(void)createAndLoadSessionWithACAccountID:(id)arg0 createBlock:(id)arg1 ;
-(void)createSessionWithACAccountID:(id)arg0 dsid:(id)arg1 completionHandler:(id)arg2 ;
-(void)enumerateAccountHandlerIfFinishedLoading:(id)arg0 ;
-(void)enumerateAccountHandlers:(id)arg0 ;
-(void)loadAccounts;
-(void)notifyAccountsListChanged;
-(void)performWhenAccountsListChanges:(id)arg0 ;
-(void)startedUpInSyncBubble;
-(void)updateAccountDisplayName:(id)arg0 completionHandler:(id)arg1 ;
-(void)uploadContent;
-(void)waitUntilDeviceIsUnlocked;
-(void)willSwitchUser;


@end


#endif