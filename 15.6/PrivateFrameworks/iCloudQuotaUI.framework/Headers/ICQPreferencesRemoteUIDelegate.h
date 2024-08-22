// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICQPREFERENCESREMOTEUIDELEGATE_H
#define ICQPREFERENCESREMOTEUIDELEGATE_H

@class UINavigationController, PSCloudStorageOffersManager, NSMutableArray, RUILoader, NSOperationQueue, NSString, ACAccount;
@protocol PSCloudStorageOffersManagerDelegate, ICQUpgradeFlowManagerDelegate, PreferencesRemoteUIDelegateProtocol, RUIObjectModelDelegate, RUILoaderDelegate, DelayedPushDelegate;

#import <Foundation/Foundation.h>

#import "ICQPreferencesRemoteUIDelegateTableCellButton.h"
#import "ICQPreferencesFreshmintManager.h"

@interface ICQPreferencesRemoteUIDelegate : NSObject <PSCloudStorageOffersManagerDelegate, ICQUpgradeFlowManagerDelegate, PreferencesRemoteUIDelegateProtocol, RUIObjectModelDelegate, RUILoaderDelegate>

 {
    UINavigationController *_navigationController;
    UINavigationController *_modalNavigationController;
    PSCloudStorageOffersManager *_storageOffersManager;
    id *_storageOffersFlowCompletion;
    NSMutableArray *_objectModels;
    RUILoader *_loader;
    NSMutableArray *_deleteLoaders;
    NSOperationQueue *_deleteQueue;
    ICQPreferencesRemoteUIDelegateTableCellButton *_button;
    NSUInteger _forceActionSignal;
    BOOL _cancelled;
    int _deleteAllDocumentsAttemptCount;
    NSString *_requestContentType;
    id *_linkCompletionBlock;
    ACAccount *_account;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DelayedPushDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) ICQPreferencesFreshmintManager *freshmintManager; // ivar: _freshmintManager
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *initialAction; // ivar: _initialAction
@property (retain) RUILoader *lastDocumentDeleteLoader; // ivar: _lastDocumentDeleteLoader
@property (readonly) Class superclass;


-(BOOL)_loadNativeURL:(id)arg0 ;
-(BOOL)objectModel:(id)arg0 page:(id)arg1 deletedTableRow:(id)arg2 atIndexPath:(id)arg3 withURL:(id)arg4 httpMethod:(id)arg5 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_afuiSettingsSpecifier;
-(id)_healthSettingsSpecifier;
-(id)initWithNavigationController:(id)arg0 ;
-(id)initWithNavigationController:(id)arg0 buyStorageFlow:(BOOL)arg1 ;
-(id)initWithNavigationController:(id)arg0 initialAction:(id)arg1 ;
-(id)initWithNavigationController:(id)arg0 initialAction:(id)arg1 account:(id)arg2 ;
-(id)parentViewControllerForObjectModel:(id)arg0 ;
-(void)_activateBackupsElementForObjectModel:(id)arg0 completion:(id)arg1 ;
-(void)_activatePhotosElementForObjectModel:(id)arg0 completion:(id)arg1 ;
// -(void)_freshmintStorageUpgradeWithCompletion:(id)arg0 withURL:(unk)arg1  ;
-(void)_loadCKStoragePluginSettingsBundleIfNeeded;
-(void)_popObjectModelAnimated:(BOOL)arg0 ;
-(void)_presentCloudStorageOffersFlowWithAction:(id)arg0 completion:(id)arg1 ;
-(void)buyFlowCompletionDidSucceed:(BOOL)arg0 error:(id)arg1 ;
-(void)cancelRemoteUI;
-(void)cleanupLoader;
-(void)confirmDeleteAll;
-(void)confirmDeleteWithTitle:(id)arg0 prompt:(id)arg1 explanation:(id)arg2 confirmationAction:(id)arg3 ;
-(void)dealloc;
-(void)deleteAllDocuments;
-(void)loadURL:(id)arg0 postBody:(id)arg1 ;
-(void)loadURL:(id)arg0 postBody:(id)arg1 additionalHeaders:(id)arg2 ;
-(void)loader:(id)arg0 didFinishLoadWithError:(id)arg1 forRequest:(id)arg2 ;
-(void)loader:(id)arg0 receivedObjectModel:(id)arg1 topActionSignal:(id)arg2 ;
-(void)manager:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)managerDidCancel:(id)arg0 ;
-(void)objectModel:(id)arg0 page:(id)arg1 toggledEditing:(BOOL)arg2 ;
-(void)objectModel:(id)arg0 pressedButton:(id)arg1 attributes:(id)arg2 ;
-(void)objectModel:(id)arg0 pressedLink:(id)arg1 httpMethod:(id)arg2 completion:(id)arg3 ;
-(void)objectModelPressedBack:(id)arg0 ;
-(void)popAndReloadFromRemoteUI:(BOOL)arg0 additionalHeaders:(id)arg1 ;
-(void)reloadQuotaInfo;
-(void)reloadTopControllerWithAdditionalHeaders:(id)arg0 ;
-(void)upgradeFlowManagerDidCancel:(id)arg0 ;
-(void)upgradeFlowManagerDidComplete:(id)arg0 ;
-(void)willShowController:(id)arg0 ;


@end


#endif