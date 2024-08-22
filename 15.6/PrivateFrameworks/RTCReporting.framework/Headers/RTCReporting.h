// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RTCREPORTING_H
#define RTCREPORTING_H

@class NSXPCConnection, NSMutableDictionary, NSArray;
@protocol RTCReportingDeallocNotifierDelegate, OS_dispatch_queue, OS_dispatch_source, RTCReportingMessageSentNotifier;

#import <Foundation/Foundation.h>

#import "RTCReportingDeallocNotifier.h"

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate>

 {
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSObject<OS_dispatch_queue> *_reportingPeriodicTasksQueue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_timer;
    int _counter;
    NSMutableDictionary *_periodicServiceDict;
    NSArray *_enabledBackendNames;
    NSArray *_whitelistedEvents;
    NSArray *_blacklistedEvents;
    RTCReportingDeallocNotifier *_strongDeallocNotifier;
    id *_weakDeallocNotifier;
    id *_weakMessageSentDelegate;
    os_unfair_lock_s _configLock;
}


@property (copy, nonatomic) id *messageLoggingBlock; // ivar: _loggingBlock
@property (nonatomic) NSObject<RTCReportingMessageSentNotifier> *messageSentDelegate;


+(BOOL)closeEphemeralSessiontWithSessionId:(id)arg0 ;
+(BOOL)sendOneMessageWithSessionInfo:(id)arg0 userInfo:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 payload:(id)arg4 error:(*id)arg5 ;
+(id)createEphemeralSessionWithSessionInfo:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
+(id)getPersistentIdentifierForDNU:(BOOL)arg0 ;
+(id)newHierarchyTokenFromParentToken:(id)arg0 ;
+(id)newSecureHierarchyTokenFromParentToken:(id)arg0 ;
+(void)regeneratePersistentIdentifierForDNU:(BOOL)arg0 ;
-(BOOL)flushMessages;
-(BOOL)isBlacklistedEvent:(unsigned short)arg0 ;
-(BOOL)isWhitelistedEvent:(unsigned short)arg0 ;
-(BOOL)registerPeriodicTaskForModule:(unsigned int)arg0 needToUpdate:(BOOL)arg1 needToReport:(BOOL)arg2 serviceBlock:(id)arg3 ;
-(BOOL)sendMessageWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 error:(*id)arg3 ;
-(BOOL)sendMessageWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)serverSupportsFileUpload;
-(BOOL)setDigestKey:(id)arg0 algorithm:(int)arg1 ;
-(BOOL)unregisterPeriodTaskForModule:(unsigned int)arg0 ;
-(BOOL)uploadDataArray:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)uploadFileWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)getReportingSessionID;
-(id)initWithSessionInfo:(id)arg0 userInfo:(id)arg1 frameworksToCheck:(id)arg2 ;
-(id)initWithSessionInfo:(id)arg0 userInfo:(id)arg1 frameworksToCheck:(id)arg2 aggregationBlock:(id)arg3 ;
-(id)retain;
-(void)_myPeriodicTask:(unsigned short)arg0 type:(unsigned short)arg1 intervalMultiplier:(int)arg2 updateTimeout:(NSUInteger)arg3 ;
-(void)aboutToDealloc;
-(void)dealloc;
-(void)fetchReportingStatesWithUserInfo:(id)arg0 fetchComplete:(id)arg1 ;
-(void)finishSession;
-(void)flushMessagesWithCompletion:(id)arg0 ;
-(void)notifyMessageWasSent:(id)arg0 ;
-(void)release;
-(void)startConfigurationWithCompletionHandler:(id)arg0 ;
-(void)startLogTimerWithInterval:(int)arg0 reportingMultiplier:(int)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 ;
-(void)stopLogTimer;
-(void)updateSharedDataForKey:(id)arg0 value:(id)arg1 ;
-(void)updateSharedDataWithDictionary:(id)arg0 ;


@end


#endif