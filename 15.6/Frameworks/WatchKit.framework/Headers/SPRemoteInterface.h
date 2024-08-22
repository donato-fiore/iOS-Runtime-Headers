// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPREMOTEINTERFACE_H
#define SPREMOTEINTERFACE_H

@class NSMutableArray, NSString, NSBundle, NSMutableDictionary, NSMutableSet;
@protocol SPRemoteInterfaceProtocol, SPRemoteInterfaceDataDelegateProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SPRemoteInterface : NSObject <SPRemoteInterfaceProtocol>



@property (retain, nonatomic) NSMutableArray *activeComplicationsConnections; // ivar: _activeComplicationsConnections
@property (copy, nonatomic) id *addPassesCompletion; // ivar: _addPassesCompletion
@property (retain, nonatomic) NSString *appClientIdentifier; // ivar: _appClientIdentifier
@property (copy, nonatomic) id *audioRecorderControllerCompletion; // ivar: _audioRecorderControllerCompletion
@property (retain, nonatomic) NSObject<SPRemoteInterfaceDataDelegateProtocol> *dataDelegate; // ivar: _dataDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSBundle *extensionBundle; // ivar: _extensionBundle
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *interfaceControllers; // ivar: _interfaceControllers
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *interfaceControllersAccessQueue; // ivar: _interfaceControllersAccessQueue
@property (retain, nonatomic) NSMutableDictionary *interfaceControllersOwners; // ivar: _interfaceControllersOwners
@property (copy, nonatomic) id *mediaPlayerControllerCompletion; // ivar: _mediaPlayerControllerCompletion
@property (retain, nonatomic) NSMutableSet *missingInterfaceControllers; // ivar: _missingInterfaceControllers
@property (retain, nonatomic) NSString *navigatingViewControllerID; // ivar: _navigatingViewControllerID
@property (retain, nonatomic) NSMutableArray *openParentRequests; // ivar: _openParentRequests
@property (retain, nonatomic) NSString *rootViewControllerID; // ivar: _rootViewControllerID
@property (retain, nonatomic) id *runLoopObserver; // ivar: _runLoopObserver
@property (readonly) Class superclass;
@property (copy, nonatomic) id *textInputCompletion; // ivar: _textInputCompletion
@property (copy, nonatomic) id *textInputSuggestions; // ivar: _textInputSuggestions


+(BOOL)sendDataToApp:(id)arg0 ;
+(BOOL)sendDataToApp:(id)arg0 reply:(id)arg1 ;
+(id)SerializablePropertyValue:(id)arg0 ;
+(id)_remoteIdentifier;
+(id)cacheIdentifier;
+(id)controller:(id)arg0 setupProperties:(id)arg1 viewControllerID:(id)arg2 tableIndex:(NSInteger)arg3 rowIndex:(NSInteger)arg4 classForType:(*unk)arg5 ;
+(id)sharedRemoteInterface;
+(id)startRemoteInterface;
+(id)startRemoteInterfaceWithBundle:(id)arg0 ;
+(void)_logDuplicate:(id)arg0 controller:(id)arg1 key:(id)arg2 property:(id)arg3 value:(id)arg4 ;
+(void)_setupStorageForController:(id)arg0 ;
+(void)_updateAccessibility;
+(void)clearStorageForController:(id)arg0 ;
+(void)controller:(id)arg0 presentAddPassesControllerWithPasses:(id)arg1 completion:(id)arg2 ;
+(void)controller:(id)arg0 presentInterfaceController:(id)arg1 context:(id)arg2 ;
+(void)controller:(id)arg0 presentInterfaceControllers:(id)arg1 contexts:(id)arg2 ;
+(void)controller:(id)arg0 presentTextInputControllerWithSuggestions:(id)arg1 allowedInputMode:(id)arg2 completion:(id)arg3 ;
// +(void)controller:(id)arg0 presentTextInputControllerWithSuggestionsForLanguage:(id)arg1 allowedInputMode:(unk)arg2 completion:(id)arg3  ;
+(void)controller:(id)arg0 pushInterfaceController:(id)arg1 context:(id)arg2 ;
+(void)controllerBecomeCurrentPage:(id)arg0 ;
+(void)controllerDismiss:(id)arg0 ;
+(void)controllerDismissAddPassesController:(id)arg0 ;
+(void)controllerDismissTextInputController:(id)arg0 ;
+(void)controllerPop:(id)arg0 ;
+(void)controllerPopToRoot:(id)arg0 ;
+(void)didFinishHandlingActivity:(id)arg0 ;
+(void)handleEvent:(id)arg0 ;
+(void)insertPageControllerAtIndexes:(id)arg0 withNames:(id)arg1 contexts:(id)arg2 ;
+(void)movePageControllerAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
+(void)notificationController:(id)arg0 showNotificationInterfaceType:(NSInteger)arg1 ;
+(void)openSystemURL:(id)arg0 ;
+(void)reloadRootControllersWithNames:(id)arg0 contexts:(id)arg1 ;
+(void)removePageControllerAtIndexes:(id)arg0 ;
+(void)sendCacheRequest:(id)arg0 ;
+(void)sendCacheRequestMessage:(id)arg0 ;
+(void)setController:(id)arg0 key:(id)arg1 property:(id)arg2 value:(id)arg3 ;
+(void)setControllerActive:(id)arg0 ;
+(void)setControllerInactive:(id)arg0 ;
+(void)updateUserActivity:(id)arg0 userInfo:(id)arg1 webpageURL:(id)arg2 interfaceController:(id)arg3 ;
-(BOOL)_handleAction:(id)arg0 forNotification:(id)arg1 remoteNotificationContext:(id)arg2 localNotification:(id)arg3 unNotification:(id)arg4 handler:(id)arg5 controller:(id)arg6 ;
-(BOOL)_sendDataToApp:(id)arg0 reply:(id)arg1 ;
-(id)_allInterfaceControllers;
-(id)_host;
-(id)_interfaceControllerClientIDForControllerID:(id)arg0 ;
-(id)_interfaceControllerID:(id)arg0 ;
-(id)_interfaceControllerIDsForClientID:(id)arg0 ;
-(id)_interfaceControllerWithID:(id)arg0 ;
-(id)_setupSignal:(int)arg0 handler:(id)arg1 ;
-(id)controllerMethods:(id)arg0 ;
-(id)initWithBundle:(id)arg0 ;
-(id)interfaceCreationContextForID:(id)arg0 ;
-(id)pageInterfaceCreationContextForID:(id)arg0 ;
-(id)storeInterfaceCreationContext:(id)arg0 ;
-(id)storePageInterfaceCreationContext:(id)arg0 ;
-(void)_activateViewController:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)_deregisterInterfaceControllerID:(id)arg0 ;
-(void)_dumpInterfaceDictionary;
-(void)_fillDataWithRandom:(id)arg0 length:(NSInteger)arg1 ;
-(void)_inQueue_recoverFromMissingIntefaceControllerWithID:(id)arg0 ;
-(void)_interfaceControllerWithID:(id)arg0 performBlock:(id)arg1 ;
-(void)_performAfterSendSetViewControllers:(id)arg0 ;
-(void)_registerInterfaceController:(id)arg0 interfaceControllerID:(id)arg1 interfaceControllerClientID:(id)arg2 applicationRootController:(BOOL)arg3 ;
-(void)_requestTimingData:(id)arg0 ;
-(void)_saveReceiveTime;
-(void)_saveSendTimeAndSize:(NSUInteger)arg0 ;
-(void)_setupSignalHandlers;
-(void)_tellApplicationThatInterfaceControllerCantBeFound:(id)arg0 ;
-(void)activateViewController:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)applicationContentsDidReset:(id)arg0 ;
-(void)applicationDidBecomeActive:(id)arg0 ;
-(void)applicationDidFinishConnecting:(id)arg0 ;
-(void)applicationDidReceiveNotification:(id)arg0 clientIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)applicationDidTerminate:(id)arg0 ;
-(void)applicationHandleWatchTaskKeys:(id)arg0 reasonForSnapshot:(NSUInteger)arg1 visibleVCID:(id)arg2 barTaskUUID:(id)arg3 clientIdentifier:(id)arg4 ;
-(void)applicationIsStillActive;
-(void)applicationWillResignActive:(id)arg0 ;
-(void)controller:(id)arg0 presentInterfaceController:(id)arg1 initializationContextID:(id)arg2 ;
-(void)controller:(id)arg0 presentInterfaceControllers:(id)arg1 initializationContextIDs:(id)arg2 ;
-(void)controller:(id)arg0 pushInterfaceController:(id)arg1 initializationContextID:(id)arg2 ;
-(void)controllerBecomeCurrentPage:(id)arg0 ;
-(void)controllerDismiss:(id)arg0 ;
-(void)controllerDismissAddPassesController:(id)arg0 ;
-(void)controllerDismissTextInputController:(id)arg0 ;
-(void)controllerPop:(id)arg0 ;
-(void)controllerPopToRoot:(id)arg0 ;
-(void)controllerPresentAddPassesController:(id)arg0 passes:(id)arg1 ;
-(void)controllerPresentTextInputController:(id)arg0 allowedInputMode:(id)arg1 suggestions:(id)arg2 ;
-(void)createViewController:(id)arg0 className:(id)arg1 properties:(id)arg2 contextID:(id)arg3 info:(id)arg4 gestureDescriptions:(id)arg5 clientIdentifier:(id)arg6 ;
-(void)dataInterfaceDidBecomeActive:(id)arg0 ;
-(void)dataInterfaceWillResignActive:(id)arg0 ;
-(void)deactivateViewController:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)didFinishHandlingActivity:(id)arg0 ;
-(void)extensionDidBeginNotificationUICreation;
-(void)extensionDidEndNotificationUICreation;
-(void)fetchNotificationForNotificationID:(id)arg0 completion:(id)arg1 ;
-(void)finishActivatingVCWithID:(id)arg0 completion:(id)arg1 ;
-(void)getComplicationData:(id)arg0 ;
-(void)handlePlistDictionary:(id)arg0 fromIdentifier:(id)arg1 ;
-(void)handleProtoPlist:(id)arg0 fromIdentifier:(id)arg1 ;
-(void)insertPageControllerAtIndexes:(id)arg0 withNames:(id)arg1 initializationContextIDs:(id)arg2 ;
-(void)layoutDirection:(NSInteger)arg0 ;
-(void)movePageControllerAtIndex:(NSInteger)arg0 toIndex:(NSInteger)arg1 ;
-(void)notificationController:(id)arg0 showNotificationInterfaceType:(NSInteger)arg1 ;
-(void)openSystemURL:(id)arg0 ;
-(void)performAfterApplicationDidFinishLaunching:(id)arg0 ;
-(void)preferredContentSizeCategory:(id)arg0 ;
-(void)receiveData:(id)arg0 fromIdentifier:(id)arg1 ;
-(void)receiveDataFromApplication:(id)arg0 fromIdentifier:(id)arg1 ;
-(void)receiveNavigationReply:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)receiveProtoData:(id)arg0 fromIdentifier:(id)arg1 ;
-(void)recoverFromMissingIntefaceControllerWithID:(id)arg0 ;
-(void)releaseViewController:(id)arg0 clientIdentifier:(id)arg1 ;
-(void)reloadRootControllersWithNames:(id)arg0 initializationContextIDs:(id)arg1 pageIndex:(NSInteger)arg2 verticalPaging:(BOOL)arg3 ;
-(void)removeInterfaceControllersForClient:(id)arg0 ;
-(void)removePageControllerAtIndexes:(id)arg0 ;
-(void)removePageInterfaceCreationContextsForIDs:(id)arg0 ;
-(void)replyTimingData:(id)arg0 ;
-(void)replyWithExtensionTimingData:(id)arg0 ;
-(void)rootInterfaceController:(id)arg0 performActionWithItemID:(id)arg1 forNotificationID:(id)arg2 userInfo:(id)arg3 clientIdentifier:(id)arg4 completionHandler:(id)arg5 ;
-(void)sendCacheRequestMessage:(id)arg0 ;
-(void)sendData:(id)arg0 clientIdentifiers:(id)arg1 ;
-(void)sendData:(id)arg0 clientIdentifiers:(id)arg1 reply:(id)arg2 ;
-(void)sendPlist:(id)arg0 clientIdentifiers:(id)arg1 ;
-(void)sendSetViewController:(id)arg0 key:(id)arg1 property:(id)arg2 value:(id)arg3 clientIdentifiers:(id)arg4 ;
-(void)sendSetViewController:(id)arg0 values:(id)arg1 clientIdentifiers:(id)arg2 ;
-(void)sendWillActivateReplyForController:(id)arg0 ;
-(void)updateUserActivity:(id)arg0 userInfo:(id)arg1 webpageURL:(id)arg2 controller:(id)arg3 ;


@end


#endif