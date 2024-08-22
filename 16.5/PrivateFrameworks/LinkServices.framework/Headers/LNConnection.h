// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNCONNECTION_H
#define LNCONNECTION_H

@class NSString, NSMutableSet, NSSet, NSMapTable, NSOperationQueue, LNConnectionManager<LNConnectionDelegate>, NSXPCConnection;
@protocol LNConnectionOperationDelegate, OS_os_activity, LNConnectionHostInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LNConnectionOptions.h"
#import "LNWatchdogTimer.h"

@interface LNConnection : NSObject <LNConnectionOperationDelegate>



@property (readonly, nonatomic) NSObject<OS_os_activity> *activity; // ivar: _activity
@property (readonly, copy, nonatomic) NSString *appBundleIdentifier; // ivar: _appBundleIdentifier
@property (nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSObject<LNConnectionHostInterface> *connectionInterface;
@property (readonly, nonatomic) NSMutableSet *connectionOperations; // ivar: _connectionOperations
@property (readonly, nonatomic) NSSet *currentConnectionOperations;
@property (retain, nonatomic) LNConnectionOptions *currentOptions; // ivar: _currentOptions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) LNConnectionOptions *defaultOptions;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMapTable *executors; // ivar: _executors
@property (copy, nonatomic) id *getConnectionInterfaceCompletionHandler; // ivar: _getConnectionInterfaceCompletionHandler
@property (readonly, nonatomic) NSOperationQueue *getConnectionInterfaceQueue; // ivar: _getConnectionInterfaceQueue
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) LNWatchdogTimer *idleTimer; // ivar: _idleTimer
@property (retain, nonatomic) NSString *logPrefix; // ivar: _logPrefix
@property (retain, nonatomic) LNConnectionManager<LNConnectionDelegate> *manager; // ivar: _manager
@property (readonly, nonatomic) NSInteger metadataVersion;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *timerQueue; // ivar: _timerQueue
@property (retain, nonatomic, setter=setXPCConnection:) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


+(id)optionsForAction:(id)arg0 interactionMode:(NSInteger)arg1 source:(unsigned short)arg2 ;
+(void)fetchEntitiesFromActiveApplicationsWithInteractionIDs:(id)arg0 bundleIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
+(void)fetchEntitiesFromActiveApplicationsWithInteractionIDs:(id)arg0 completionHandler:(id)arg1 ;
+(void)invalidateAllConnections;
-(BOOL)isPerformActionOperationPending;
-(BOOL)refreshWithOptions:(id)arg0 ;
-(BOOL)targetIsBeingDebugged;
-(id)executorForAction:(id)arg0 interactionMode:(NSInteger)arg1 label:(id)arg2 delegate:(id)arg3 ;
-(id)executorForAction:(id)arg0 interactionMode:(NSInteger)arg1 label:(id)arg2 source:(unsigned short)arg3 delegate:(id)arg4 ;
-(id)executorForAction:(id)arg0 label:(id)arg1 delegate:(id)arg2 ;
-(id)executorForAction:(id)arg0 metadata:(id)arg1 appBundleIdentifier:(id)arg2 options:(id)arg3 delegate:(id)arg4 ;
-(id)executorForAction:(id)arg0 metadata:(id)arg1 options:(id)arg2 delegate:(id)arg3 ;
-(id)executorForAction:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)initWithBundleIdentifier:(id)arg0 metadataVersion:(NSInteger)arg1 error:(*id)arg2 ;
-(id)operationWithIdentifier:(id)arg0 ;
-(void)cancelIdleTimeout;
-(void)cancelTimeoutForOperationWithIdentifier:(id)arg0 ;
-(void)close;
-(void)closeWithError:(id)arg0 ;
-(void)completeWithError:(id)arg0 ;
-(void)connectWithOptions:(id)arg0 ;
-(void)connectionOperation:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)connectionOperationWillStart:(id)arg0 ;
-(void)dealloc;
-(void)enqueueConnectionOperation:(id)arg0 ;
-(void)extendIdleTimeout;
-(void)extendTimeoutForOperationWithIdentifier:(id)arg0 ;
-(void)fetchActionAppContextForAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchActionForAutoShortcutPhrase:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchActionOutputValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDefaultValueForActionMetadata:(id)arg0 parameterIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchDestinationMDMAccountIdentifierForAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchDisplayRepresentationForActions:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchExtensionsMetadataWithCompletionHandler:(id)arg0 ;
-(void)fetchMetadataWithCompletionHandler:(id)arg0 ;
-(void)fetchOptionsDefaultValueForAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchOptionsForActionMetadata:(id)arg0 parameterMetadata:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchOptionsForActionMetadata:(id)arg0 parameterMetadata:(id)arg1 localeIdentifier:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchOptionsForActionMetadata:(id)arg0 parameterMetadata:(id)arg1 searchTerm:(id)arg2 localeIdentifier:(id)arg3 completionHandler:(id)arg4 ;
-(void)fetchStructuredDataWithTypeIdentifier:(NSInteger)arg0 forEntityIdentifiers:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchSuggestedActionsForStartWorkoutAction:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSuggestedActionsWithSiriLanguageCode:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchSuggestedFocusActionsForActionMetadata:(id)arg0 suggestionContext:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchViewActionsWithCompletionHandler:(id)arg0 ;
-(void)fetchViewEntitiesWithInteractionIDs:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchViewEntitiesWithOptions:(id)arg0 interactionIDs:(id)arg1 completionHandler:(id)arg2 ;
-(void)getConnectionInterfaceWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)performGetConnectionInterfaceWithOptions:(id)arg0 completionHandler:(id)arg1 ;
-(void)performPropertyQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)performQuery:(id)arg0 completionHandler:(id)arg1 ;
-(void)performSuggestedEntitiesQueryWithEntityMangledTypeName:(id)arg0 completionHandler:(id)arg1 ;
-(void)performSuggestedResultsQueryWithEntityType:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeConnectionOperation:(id)arg0 ;
-(void)setConnected;
-(void)setDisconnectedWithError:(id)arg0 ;


@end


#endif