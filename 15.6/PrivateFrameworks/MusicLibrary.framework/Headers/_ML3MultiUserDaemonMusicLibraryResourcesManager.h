// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ML3MULTIUSERDAEMONMUSICLIBRARYRESOURCESMANAGER_H
#define _ML3MULTIUSERDAEMONMUSICLIBRARYRESOURCESMANAGER_H

@class ML3BaseMusicLibraryResourcesManager, NSOperationQueue, ACAccountStore, NSString;
@protocol _ML3MultiUserDaemonAccountChangeOperationDelegate, MLMediaLibraryAccountChangeObserver, _MSVAccountInformationProviding, OS_dispatch_queue;



@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate>



@property (weak, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver; // ivar: _accountChangeObserver
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue; // ivar: _accountChangeOperationQueue
@property (retain, nonatomic) NSObject<_MSVAccountInformationProviding> *accountInfo; // ivar: _accountInfo
@property (retain, nonatomic) ACAccountStore *accountStore; // ivar: _accountStore
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue; // ivar: _calloutQueue
@property (copy, nonatomic) NSString *currentActiveAccountDSID; // ivar: _currentActiveAccountDSID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


-(BOOL)shouldExecuteAccountChangeOperation:(id)arg0 reason:(*id)arg1 ;
-(id)_libraryContainerPathForDSID:(id)arg0 ;
-(id)databasePathForDSID:(id)arg0 ;
-(id)initWithAccountInfo:(id)arg0 accountChangeObserver:(id)arg1 ;
-(id)libraryContainerPath;
-(void)_accountStoreDidChangeNotification:(id)arg0 ;
-(void)_notifyClients:(id)arg0 ;
-(void)_processAccountChangeNotification;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)arg0 newDatabasePath:(id)arg1 ;
-(void)dealloc;


@end


#endif