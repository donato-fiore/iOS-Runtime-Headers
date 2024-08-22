// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVOICESHORTCUTCLIENT_H
#define VCVOICESHORTCUTCLIENT_H

@class NSString, NSHashTable, NSXPCConnection;
@protocol INVCVoiceShortcutClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFSystemSurfaceWorkflowStatusRegistry.h"
#import "WFVoiceShortcutCache.h"

@interface VCVoiceShortcutClient : NSObject <INVCVoiceShortcutClient>



@property (readonly, copy, nonatomic) id *creationBlock; // ivar: _creationBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSHashTable *errorHandlers; // ivar: _errorHandlers
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) id *interfaceSetupBlock; // ivar: _interfaceSetupBlock
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalStateQueue; // ivar: _internalStateQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFSystemSurfaceWorkflowStatusRegistry *systemSurfaceStatus; // ivar: _systemSurfaceStatus
@property (readonly, nonatomic) WFVoiceShortcutCache *voiceShortcutCache; // ivar: _voiceShortcutCache
@property (retain, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // ivar: _xpcQueue


+(id)standardClient;
+(void)initialize;
-(BOOL)hasRunEventsInTheLast5DaysWithError:(*id)arg0 ;
-(BOOL)requestDataMigration:(*id)arg0 ;
-(id)accessibilityWorkflowWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)accessibilityWorkflowsWithError:(*id)arg0 ;
-(id)asynchronousRemoteDataStoreWithErrorHandler:(id)arg0 ;
// -(id)asynchronousRemoteDataStoreWithErrorHandler:(id)arg0 synchronous:(unk)arg1  ;
-(id)contextualActionsForContext:(id)arg0 error:(*id)arg1 ;
-(id)createBookmarkWithBookmarkableString:(id)arg0 path:(id)arg1 workflowID:(id)arg2 error:(*id)arg3 ;
-(id)createBookmarkWithURL:(id)arg0 workflowID:(id)arg1 error:(*id)arg2 ;
-(id)drawGlyphs:(id)arg0 atSize:(struct CGSize )arg1 withBackgroundColorValues:(id)arg2 error:(*id)arg3 ;
-(id)drawGlyphs:(id)arg0 atSize:(struct CGSize )arg1 withBackgroundColorValues:(id)arg2 padding:(CGFloat)arg3 error:(*id)arg4 ;
-(id)fetchURLForFPItem:(id)arg0 error:(*id)arg1 ;
-(id)filteredContextualActions:(id)arg0 forContext:(id)arg1 byType:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)firstUnsortedWorkflowWithBackgroundColorValue:(*id)arg0 error:(*id)arg1 ;
-(id)foldersWithError:(*id)arg0 ;
-(id)getResultsForQuery:(id)arg0 resultClass:(Class)arg1 resultState:(*id)arg2 error:(*id)arg3 ;
-(id)getValueForDescriptor:(id)arg0 resultClass:(Class)arg1 error:(*id)arg2 ;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 interfaceSetupBlock:(id)arg2 ;
// -(id)initWithXPCConnection:(id)arg0 XPCConnectionCreationBlock:(id)arg1 XPCInterfaceSetupBlock:(unk)arg2  ;
// -(id)initWithXPCConnectionCreationBlock:(id)arg0 XPCInterfaceSetupBlock:(unk)arg1  ;
-(id)menuBarWorkflowsWithGlyphSize:(struct CGSize )arg0 error:(*id)arg1 ;
-(id)resolveBookmarkData:(id)arg0 updatedData:(*id)arg1 error:(*id)arg2 ;
-(id)resolveCrossDeviceItemID:(id)arg0 error:(*id)arg1 ;
-(id)resolveFilePath:(id)arg0 workflowID:(id)arg1 error:(*id)arg2 ;
-(id)runWorkflowWithRequest:(id)arg0 completion:(id)arg1 ;
-(id)shareSheetWorkflowsForExtensionMatchingDictionaries:(id)arg0 resolvedActivityItems:(id)arg1 hostBundleIdentifier:(id)arg2 iconSize:(struct CGSize )arg3 iconScale:(CGFloat)arg4 error:(*id)arg5 ;
-(id)shortcutWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)shortcutWithIdentifier:(id)arg0 glyphSize:(struct CGSize )arg1 error:(*id)arg2 ;
-(id)shortcutsInCollectionWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)synchronousRemoteDataStoreWithErrorHandler:(id)arg0 ;
-(id)unsafePopConnectionErrorHandlers;
-(void)addDefaultShortcutsIfNecessaryWithCompletion:(id)arg0 ;
// -(void)callErrorHandlerIfNeeded:(id)arg0 withError:(unk)arg1  ;
-(void)checkTriggerStateWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)checkTriggerStateWithKeyPath:(id)arg0 completion:(id)arg1 ;
-(void)createSleepWorkflow:(id)arg0 completion:(id)arg1 ;
-(void)createVoiceShortcut:(id)arg0 phrase:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)deleteSleepWorkflowWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteTriggerWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)deleteVoiceShortcutWithName:(id)arg0 completion:(id)arg1 ;
-(void)filterContextualActions:(id)arg0 forContext:(id)arg1 byType:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fireTriggerWithIdentifier:(id)arg0 force:(BOOL)arg1 completion:(id)arg2 ;
-(void)generateSingleUseTokenForWorkflowIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getAllSleepWorkflowsWithCompletion:(id)arg0 ;
-(void)getConfiguredTriggerDescriptionsWithCompletion:(id)arg0 ;
-(void)getContextualActionsForContext:(id)arg0 completion:(id)arg1 ;
-(void)getNumberOfVoiceShortcutsWithCompletion:(id)arg0 ;
-(void)getOnScreenContentWithOptions:(id)arg0 completion:(id)arg1 ;
-(void)getOnScreenContentWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)getResultsForQuery:(id)arg0 resultClass:(Class)arg1 completion:(id)arg2 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getSiriPodcastsDatabaseURLWithCompletion:(id)arg0 ;
-(void)getSleepActionSuggestionsForAllAppsFilteringBySleep:(BOOL)arg0 completion:(id)arg1 ;
-(void)getSleepActionSuggestionsForAllAppsWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)getSleepActionSuggestionsForAppWithBundleIdentifier:(id)arg0 shouldFilterBySleep:(BOOL)arg1 completion:(id)arg2 ;
-(void)getSleepWorkflowsWithCompletion:(id)arg0 ;
-(void)getValueForDescriptor:(id)arg0 resultClass:(Class)arg1 completion:(id)arg2 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getVoiceShortcutWithPhrase:(id)arg0 completion:(id)arg1 ;
-(void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getVoiceShortcutsWithCompletion:(id)arg0 ;
-(void)getWidgetWorkflowWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getWidgetWorkflowsInCollectionWithIdentifier:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)handleXPCConnectionInterruption;
-(void)handleXPCConnectionInvalidation;
-(void)importSharedShortcutFromURL:(id)arg0 completion:(id)arg1 ;
-(void)importSharedShortcutFromURL:(id)arg0 withName:(id)arg1 shortcutSource:(id)arg2 completion:(id)arg3 ;
-(void)importShortcutWithRecordData:(id)arg0 name:(id)arg1 shortcutSource:(id)arg2 completion:(id)arg3 ;
-(void)importTopLevelShortcutFromURL:(id)arg0 withName:(id)arg1 completion:(id)arg2 ;
-(void)logRunOfContextualAction:(id)arg0 ;
-(void)logUndoOfContextualAction:(id)arg0 ;
-(void)obliterateShortcuts:(id)arg0 ;
-(void)refreshTriggerWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)resetDefaultShortcutFlagsWithCompletion:(id)arg0 ;
-(void)resumeWorkflowFromContext:(id)arg0 presentationMode:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)resumeWorkflowFromContext:(id)arg0 withRequest:(id)arg1 completion:(id)arg2 ;
-(void)sendAceCommandDictionary:(id)arg0 completion:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 inDomain:(id)arg2 completionHandler:(id)arg3 ;
-(void)setPerWorkflowStateData:(id)arg0 forAccessResourceWithIdentifier:(id)arg1 reference:(id)arg2 completion:(id)arg3 ;
-(void)setPerWorkflowStateData:(id)arg0 forSmartPromptWithActionUUID:(id)arg1 reference:(id)arg2 completion:(id)arg3 ;
-(void)setShortcutSuggestions:(id)arg0 forAppWithBundleIdentifier:(id)arg1 ;
-(void)showSingleStepCompletionForWebClip:(id)arg0 completion:(id)arg1 ;
-(void)stopRunningWorkflowWithRunningContext:(id)arg0 ;
-(void)subscribeToVoiceShortcutDataUpdateNotifications;
-(void)unregisterTriggerWithIdentifier:(id)arg0 triggerBacking:(NSInteger)arg1 completion:(id)arg2 ;
-(void)unsafeSetupXPCConnection;
-(void)unsubscribeFromVoiceShortcutDataUpdateNotifications;
-(void)updateVoiceShortcutWithIdentifier:(id)arg0 phrase:(id)arg1 shortcut:(id)arg2 completion:(id)arg3 ;


@end


#endif