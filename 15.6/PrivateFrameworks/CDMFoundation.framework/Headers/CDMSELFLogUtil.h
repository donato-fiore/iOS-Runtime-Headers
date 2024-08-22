// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDMSELFLOGUTIL_H
#define CDMSELFLOGUTIL_H


#import <Foundation/Foundation.h>


@interface CDMSELFLogUtil : NSObject



+(BOOL)cdmAllServicesSetupEnded:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmAllServicesSetupFailed:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmAllServicesSetupStarted:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmClientSetupEnded:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmClientSetupFailed:(id)arg0 reason:(int)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmClientSetupStarted:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmFailed:(int)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmFailed:(int)arg0 originalCode:(NSInteger)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)cdmSingleServiceSetupAttemptEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmSingleServiceSetupAttemptFailed:(int)arg0 retryNumber:(unsigned int)arg1 reason:(int)arg2 metadata:(id)arg3 logMessage:(id)arg4 ;
+(BOOL)cdmSingleServiceSetupAttemptStarted:(id)arg0 serviceType:(int)arg1 retryNumber:(unsigned int)arg2 metadata:(id)arg3 logMessage:(id)arg4 ;
+(BOOL)cdmSpanMatcherEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmSpanMatcherStarted:(id)arg0 matcherName:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)cdmStarted:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)contextUpdateEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)curareRequestLink:(id)arg0 nlId:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)emitEventsFromContainer:(id)arg0 mainEventLogMessage:(id)arg1 ;
+(BOOL)emitEventsFromContainer:(id)arg0 mainEventLogMessage:(id)arg1 logLevel:(id)arg2 ;
+(BOOL)emitNLXRequestLink:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)emitRequestLink:(id)arg0 metadata:(id)arg1 ;
+(BOOL)matchingSpanEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)orchestratorRequestLink:(id)arg0 nlId:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)serviceEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)serviceFailed:(id)arg0 failureCode:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)serviceStarted:(id)arg0 serviceName:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)tokenizationEnded:(id)arg0 inputType:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)tokenizationEndedWithMultiResponses:(id)arg0 inputType:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(id)createSELFMetadataWithNlId:(id)arg0 andWithResultCandidateId:(id)arg1 andWithConnectionId:(id)arg2 ;
+(id)extractRequestLinkData:(id)arg0 ;
+(int)stringNodeNameToEnum:(id)arg0 ;
+(int)stringServiceTypeToEnum:(id)arg0 ;
+(void)emitCurareContext:(id)arg0 metadata:(id)arg1 ;


@end


#endif