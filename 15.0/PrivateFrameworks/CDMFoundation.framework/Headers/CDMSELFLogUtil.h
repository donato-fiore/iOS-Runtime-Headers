// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSELFLOGUTIL_H
#define CDMSELFLOGUTIL_H


#import <Foundation/Foundation.h>


@interface CDMSELFLogUtil : NSObject



+(BOOL)cdmEnded:(id)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmFailed:(int)arg0 metadata:(id)arg1 logMessage:(id)arg2 ;
+(BOOL)cdmFailed:(int)arg0 originalCode:(NSInteger)arg1 metadata:(id)arg2 logMessage:(id)arg3 ;
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
+(id)createSELFMetadataWithNlId:(id)arg0 andWithResultCandidateId:(id)arg1 ;
+(id)extractRequestLinkData:(id)arg0 ;
+(int)stringNodeNameToEnum:(id)arg0 ;
+(void)emitCurareContext:(id)arg0 metadata:(id)arg1 ;


@end


#endif