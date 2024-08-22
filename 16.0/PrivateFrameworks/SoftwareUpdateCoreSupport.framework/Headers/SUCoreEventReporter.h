// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUCOREEVENTREPORTER_H
#define SUCOREEVENTREPORTER_H

@class NSMutableArray, NSMutableDictionary, NSURLSessionConfiguration, NSOperationQueue, NSURLSession, NSString, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SUCorePersistedState.h"
#import "SUCoreEvent.h"
#import "SUCoreEventReporterDelegate.h"

@interface SUCoreEventReporter : NSObject

@property (nonatomic) NSInteger accessControl; // ivar: _accessControl
@property (retain, nonatomic) SUCorePersistedState *activeEventsState; // ivar: _activeEventsState
@property (nonatomic) int activeSendTaskCount; // ivar: _activeSendTaskCount
@property (retain, nonatomic) NSMutableArray *awaitingRetry; // ivar: _awaitingRetry
@property (nonatomic) BOOL dropEventsOnSendFailure; // ivar: _dropEventsOnSendFailure
@property (retain, nonatomic) NSMutableDictionary *eventExtensions; // ivar: _eventExtensions
@property (nonatomic) BOOL eventExtensionsDetermined; // ivar: _eventExtensionsDetermined
@property (retain, nonatomic) NSURLSessionConfiguration *inProcessConfig; // ivar: _inProcessConfig
@property (retain, nonatomic) NSOperationQueue *inProcessOperationQueue; // ivar: _inProcessOperationQueue
@property (retain, nonatomic) NSURLSession *inProcessSession; // ivar: _inProcessSession
@property (retain, nonatomic) SUCoreEvent *lastErrorEvent; // ivar: _lastErrorEvent
@property (copy, nonatomic) id *onceIdleCompletion; // ivar: _onceIdleCompletion
@property (retain, nonatomic) NSString *persistedStatePath; // ivar: _persistedStatePath
@property (retain, nonatomic) SUCoreEventReporterDelegate *reporterDelegate; // ivar: _reporterDelegate
@property (nonatomic) BOOL splunkAccessCreated; // ivar: _splunkAccessCreated
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *splunkStateQueue; // ivar: _splunkStateQueue
@property (retain, nonatomic) NSURL *splunkURL; // ivar: _splunkURL
@property (retain, nonatomic) NSString *storeToPath; // ivar: _storeToPath


+(id)_errorDomainAbbreviation:(id)arg0 ;
+(id)_nsURLSessionTaskNameForState:(NSInteger)arg0 ;
+(id)_sharedReporter:(id)arg0 withAccessControl:(NSInteger)arg1 ;
+(id)accessControlSummary:(NSInteger)arg0 ;
+(id)buildSplunkServerURLFromBase:(id)arg0 ;
+(id)initSharedReporterStoringToPath:(id)arg0 ;
+(id)initSharedReporterStoringToPath:(id)arg0 withAccessControl:(NSInteger)arg1 ;
+(id)sharedReporter;
+(void)augmentEvent:(id)arg0 withError:(id)arg1 ;
-(BOOL)_sendFirstAwaitingRetry;
-(BOOL)_storeServerURLMetadata:(id)arg0 toFileUUID:(id)arg1 ;
-(BOOL)sendEvent:(id)arg0 ;
-(BOOL)sendEvent:(id)arg0 toServerURL:(id)arg1 ;
-(NSInteger)currentAccessControl;
-(id)_activeEventForFileUUID:(id)arg0 ;
-(id)_alignPersistedStateWithExistingFileUUIDs:(id)arg0 ;
-(id)_buildContextFromNVRAMBootArgs;
-(id)_copyEscapeStringsForEventData:(id)arg0 ;
-(id)_getJSONDataFromPayload:(id)arg0 withFileUUID:(id)arg1 forEventUUID:(id)arg2 ;
-(id)_getSplunkRequestForURL:(id)arg0 ;
-(id)_getSplunkServerURL:(id)arg0 ;
-(id)_newExistingFileUUIDs;
-(id)_newScrubbedEvents:(id)arg0 ;
-(id)_removeFileUUID:(id)arg0 fromFilesToRetry:(id)arg1 ;
-(id)_storeJSONData:(id)arg0 withFileUUID:(id)arg1 forEventUUID:(id)arg2 ;
-(id)_synchonizeDiscoveredCanceling:(id)arg0 forActiveEvent:(id)arg1 withFileUUIDsToRetry:(id)arg2 ;
-(id)_synchonizeDiscoveredCompleted:(id)arg0 forActiveEvent:(id)arg1 withFileUUIDsToRetry:(id)arg2 ;
-(id)_synchonizeDiscoveredRunning:(id)arg0 forActiveEvent:(id)arg1 withFileUUIDsToRetry:(id)arg2 ;
-(id)_synchonizeDiscoveredSuspended:(id)arg0 forActiveEvent:(id)arg1 withFileUUIDsToRetry:(id)arg2 ;
-(id)_synchonizeDiscoveredUnknown:(id)arg0 forActiveEvent:(id)arg1 withFileUUIDsToRetry:(id)arg2 ;
-(id)initStoringToPath:(id)arg0 ;
-(id)initStoringToPath:(id)arg0 withAccessControl:(NSInteger)arg1 ;
-(id)sendEventReturningAugmented:(id)arg0 toServerURL:(id)arg1 ;
-(void)_adoptLastErrorEvent:(id)arg0 ;
-(void)_awaitRetryingFileUUID:(id)arg0 ;
-(void)_checkWhetherIdle:(id)arg0 ;
-(void)_decrementActiveSendCount;
-(void)_determineEventExtensions;
-(void)_incrementActiveSendCount:(id)arg0 ;
-(void)_removeActiveEventForFileUUID:(id)arg0 ;
-(void)_removeFileUUID:(id)arg0 loggingError:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_sendAllAwaitingRetry;
-(void)_sendCoreEvent:(id)arg0 ;
-(void)_sendCoreEvents:(id)arg0 secondEvent:(id)arg1 ;
-(void)_sendInterruptedFromStorage:(id)arg0 ;
-(void)_sendSplunkEvents:(id)arg0 forEventUUID:(id)arg1 toServerURL:(id)arg2 ;
-(void)_splunkAccessSetup;
-(void)_synchronizeWithNSURLSessionExpecting:(id)arg0 ;
-(void)_updateActiveEvent:(id)arg0 forFileUUID:(id)arg1 ;
-(void)_uploadFromFile:(id)arg0 withFileUUID:(id)arg1 forEventUUID:(id)arg2 toServerURL:(id)arg3 ;
-(void)dropOnSendFailure:(BOOL)arg0 ;
-(void)flushEvent;
-(void)handleSendFinishedInvalidFileUUID:(id)arg0 withError:(id)arg1 ;
-(void)handleSendFinishedWithFileUUID:(id)arg0 sendSucceeded:(BOOL)arg1 withStatusCode:(NSInteger)arg2 withError:(id)arg3 ;
-(void)indicateOnceIdle:(id)arg0 ;


@end


#endif