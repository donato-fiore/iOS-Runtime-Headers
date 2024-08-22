// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDMSELFLOGUTIL_H
#define CDMSELFLOGUTIL_H


#import <Foundation/Foundation.h>


@interface CDMSELFLogUtil : NSObject



+(BOOL)cdmAllServicesSetupEnded:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmAllServicesSetupFailed:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmAllServicesSetupStarted:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmAssetSetupEnded:(id)arg0 contextId:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmAssetSetupFailed:(id)arg0 contextId:(id)arg1 errorDomain:(int)arg2 errorCode:(unsigned int)arg3 logMessage:(id)arg4 ;
+(BOOL)cdmAssetSetupStarted:(id)arg0 contextId:(id)arg1 serviceNames:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)cdmClientSetupEnded:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmClientSetupFailed:(id)arg0 errorDomain:(int)arg1 errorCode:(unsigned int)arg2 logMessage:(id)arg3 ;
+(BOOL)cdmClientSetupStarted:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)cdmEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 machAbsoluteTime:(NSUInteger)arg3 ;
+(BOOL)cdmFailed:(int)arg0 errorDomainString:(id)arg1 errorCode:(int)arg2 metadata:(id)arg3 logMessage:(id)arg4 ;
+(BOOL)cdmFailed:(int)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmSetupMissingAssetsDetected:(id)arg0 contextId:(id)arg1 serviceNames:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)cdmSingleServiceSetupAttemptEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmSingleServiceSetupAttemptFailed:(int)arg0 retryNumber:(unsigned int)arg1 reason:(int)arg2 errorCode:(unsigned int)arg3 metadata:(id)arg4 logMessage:(id)arg5 ;
+(BOOL)cdmSingleServiceSetupAttemptStarted:(id)arg0 serviceType:(int)arg1 retryNumber:(unsigned int)arg2 metadata:(id)arg3 logMessage:(id)arg4 ;
+(BOOL)cdmSpanMatcherEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmSpanMatcherStarted:(id)arg0 matcherName:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)cdmStarted:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmStarted:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 machAbsoluteTime:(NSUInteger)arg3 ;
+(BOOL)cdmXpcProcessingEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmXpcProcessingFailed:(id)arg0 reason:(int)arg1 errorCode:(unsigned int)arg2 metadata:(id)arg3 logMessage:(id)arg4 ;
+(BOOL)cdmXpcProcessingStarted:(id)arg0 processingType:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)contextUpdateEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)curareRequestLink:(id)arg0 nlId:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)emitCurareContext:(id)arg0 metadata:(id)arg1 ;
+(BOOL)emitEventsFromContainer:(id)arg0 mainEventLogMessage:(id)arg1 ;
+(BOOL)emitEventsFromContainer:(id)arg0 mainEventLogMessage:(id)arg1 machAbsoluteTime:(NSUInteger)arg2 ;
+(BOOL)emitEventsFromContainer:(id)arg0 mainEventLogMessage:(id)arg1 machAbsoluteTime:(NSUInteger)arg2 logLevel:(id)arg3 ;
+(BOOL)emitNLXRequestLink:(id)arg0 logMessage:(id)arg1 ;
+(BOOL)emitRequestLink:(id)arg0 metadata:(id)arg1 ;
+(BOOL)matchingSpanEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)orchestratorRequestLink:(id)arg0 nlId:(id)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)serviceEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)serviceEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 machAbsoluteTime:(NSUInteger)arg3 ;
+(BOOL)serviceFailed:(id)arg0 failureCode:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)serviceStarted:(id)arg0 serviceName:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)serviceStarted:(id)arg0 serviceName:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 machAbsoluteTime:(NSUInteger)arg4 ;
+(BOOL)tokenizationEnded:(id)arg0 inputType:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(BOOL)tokenizationEndedWithMultiResponses:(id)arg0 inputType:(int)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
+(id)createSELFMetadataWithNlId:(id)arg0 andWithResultCandidateId:(id)arg1 andWithConnectionId:(id)arg2 ;
+(int)stringNodeNameToEnum:(id)arg0 ;
+(int)stringServiceTypeToEnum:(id)arg0 ;


@end


#endif