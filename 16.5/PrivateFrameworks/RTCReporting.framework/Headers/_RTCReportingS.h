// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _RTCREPORTINGS_H
#define _RTCREPORTINGS_H

@protocol RTCReportingMessageSentNotifier;

#import <Foundation/Foundation.h>


@interface _RTCReportingS : NSObject {
    ? messageLoggingBlock;
    ? lock;
    ? session;
    ? configured;
    ? connectionManager;
    ? generatedSessionID;
    ? sessionInfo;
    ? userInfo;
    ? deprecatedPeriodic;
    ? legacyAVCSupport;
    ? earlyCachedEvents;
    ? completelyDisabled;
    ? extraFields;
    ? terminated;
    ? sentEventCount;
}


@property (nonatomic, copy) id *messageLoggingBlock;
@property (nonatomic, weak) NSObject<RTCReportingMessageSentNotifier> *messageSentDelegate; // ivar: messageSentDelegate


+(BOOL)closeEphemeralSessiontWithSessionId:(id)arg0 ;
+(BOOL)sendOneMessageWithSessionInfo:(id)arg0 userInfo:(id)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 payload:(id)arg4 error:(*id)arg5 ;
+(id)_privacyLogs:(*id)arg0 ;
+(id)createEphemeralSessionWithSessionInfo:(id)arg0 userInfo:(id)arg1 error:(*id)arg2 ;
+(id)getPersistentIdentifierForDNU:(BOOL)arg0 ;
+(id)newHierarchyTokenFromParentToken:(id)arg0 ;
+(void)regeneratePersistentIdentifierForDNU:(BOOL)arg0 ;
+(void)updateEarlyCacheLimitWithNewLimit:(NSInteger)arg0 ;
-(BOOL)registerPeriodicTaskForModule:(unsigned int)arg0 needToUpdate:(BOOL)arg1 needToReport:(BOOL)arg2 serviceBlock:(id)arg3 ;
-(BOOL)sendMessageWithCategory:(unsigned short)arg0 type:(unsigned short)arg1 payload:(id)arg2 error:(*id)arg3 ;
-(BOOL)sendMessageWithDictionary:(id)arg0 error:(*id)arg1 ;
-(BOOL)serverSupportsFileUpload;
-(BOOL)setDigestKey:(id)arg0 algorithm:(int)arg1 ;
-(BOOL)uploadDataArray:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)uploadFileWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(id)getReportingSessionID;
-(id)init;
-(id)initWithSessionInfo:(id)arg0 userInfo:(id)arg1 frameworksToCheck:(id)arg2 ;
-(id)initWithSessionInfo:(id)arg0 userInfo:(id)arg1 frameworksToCheck:(id)arg2 aggregationBlock:(id)arg3 ;
-(void)dealloc;
-(void)fetchReportingStatesWithUserInfo:(id)arg0 fetchComplete:(id)arg1 ;
-(void)flushMessages;
-(void)flushMessagesWithCompletion:(id)arg0 ;
-(void)startConfigurationWithCompletionHandler:(id)arg0 ;
-(void)startLogTimerWithInterval:(int)arg0 reportingMultiplier:(int)arg1 category:(unsigned short)arg2 type:(unsigned short)arg3 ;
-(void)stopLogTimer;
-(void)terminateSessionWithCompletion:(id)arg0 ;
-(void)unregisterPeriodTaskForModule:(unsigned int)arg0 ;
-(void)updateSharedDataForKey:(id)arg0 value:(id)arg1 ;
-(void)updateSharedDataWithDictionary:(id)arg0 ;


@end


#endif