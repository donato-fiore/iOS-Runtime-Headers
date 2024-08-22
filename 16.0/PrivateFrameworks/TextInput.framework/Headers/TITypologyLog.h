// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPOLOGYLOG_H
#define TITYPOLOGYLOG_H

@class NSString, NSDictionary, NSDate, NSMutableSet, NSUUID;
@protocol NSCopying, TITypologyLogPersisting, TITypologyLogging, TITraceLogParsingDelegate, TITypologyLogProviding, TITypologyLogDelegate;

#import <Foundation/Foundation.h>

#import "TIKeyboardState.h"
#import "TIRollingLog.h"

@interface TITypologyLog : NSObject <NSCopying, TITypologyLogPersisting, TITypologyLogging, TITraceLogParsingDelegate, TITypologyLogProviding>



@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSDictionary *config; // ivar: _config
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (weak, nonatomic) NSObject<TITypologyLogDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TIKeyboardState *lastKeyboardState; // ivar: _lastKeyboardState
@property (retain, nonatomic) NSMutableSet *loggedRecordClasses; // ivar: _loggedRecordClasses
@property (readonly, nonatomic) NSUInteger maxNumRecords;
@property (readonly, nonatomic) NSUInteger numTraceRecords;
@property (readonly, nonatomic) NSUInteger numTypologyRecords;
@property (readonly, nonatomic) NSUInteger partIndex; // ivar: _partIndex
@property (readonly, nonatomic) NSString *recommendedTraceLogFilename;
@property (readonly, nonatomic) NSString *recommendedTypologyLogFilename;
@property (readonly, nonatomic) TIRollingLog *records; // ivar: _records
@property (readonly, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (readonly, nonatomic) NSUInteger traceLogVersion; // ivar: _traceLogVersion
@property (readonly, nonatomic) TIRollingLog *traceRecords; // ivar: _traceRecords
@property (readonly, nonatomic) NSUInteger typologyLogVersion; // ivar: _typologyLogVersion
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)isTraceLogFilename:(id)arg0 ;
+(BOOL)isTypologyLogFilename:(id)arg0 ;
+(id)_adjustFilename:(id)arg0 oldPrefix:(id)arg1 newPrefix:(id)arg2 oldSuffix:(id)arg3 newSuffix:(id)arg4 ;
+(id)traceLogFilenameFromTypologyLogFilename:(id)arg0 ;
+(id)traceLogURLFromTypologyLogURL:(id)arg0 ;
+(id)typologyLogFilenameFromTraceLogFilename:(id)arg0 ;
+(id)typologyLogFromTypologyLogFile:(id)arg0 andTraceLogFile:(id)arg1 error:(*id)arg2 ;
+(id)typologyLogURLFromTraceLogURL:(id)arg0 ;
-(BOOL)_writeToTraceLogFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)_writeToTypologyLogFile:(id)arg0 withAccessibilityInfo:(id)arg1 includeTraceLogContent:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)loggedRecordOfClass:(Class)arg0 ;
-(BOOL)writeToTypologyLogFile:(id)arg0 andTraceLogFile:(id)arg1 withAccessibilityInfo:(id)arg2 error:(*id)arg3 ;
-(id)_recommendedFilenameWithPrefix:(id)arg0 andSuffix:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filename;
-(id)init;
-(id)initWithPropertyList:(id)arg0 ;
-(id)initWithTypologyLog:(id)arg0 ;
-(id)initWithUUID:(id)arg0 partIndex:(NSUInteger)arg1 date:(id)arg2 systemVersion:(id)arg3 buildVersion:(id)arg4 clientIdentifier:(id)arg5 config:(id)arg6 ;
-(id)parsedTraceRecordMatchingUUID:(id)arg0 ;
-(id)propertyList;
-(id)propertyListWithTrace;
-(id)recordSummary;
-(id)textSummary;
-(id)timestamp;
-(id)trace;
-(id)traceLogHeader;
-(id)traceRecordMatchingUUID:(id)arg0 ;
-(id)typologyRecordMatchingUUID:(id)arg0 ;
-(id)typologyRecordUUIDsIncludedInRange:(id)arg0 endUUID:(id)arg1 ;
-(id)typologyRecordsMatchingUUIDRange:(id)arg0 endUUID:(id)arg1 ;
-(void)_logRecord:(id)arg0 trace:(id)arg1 ;
-(void)enumerateParsedTraceRecordsWithBlock:(id)arg0 ;
-(void)enumerateParsedTraceRecordsWithBlockIncludingStop:(id)arg0 ;
-(void)enumerateRecordsWithBlock:(id)arg0 ;
-(void)enumerateTraceRecordsWithBlock:(id)arg0 ;
-(void)enumerateTraceRecordsWithBlockIncludingStop:(id)arg0 ;
-(void)enumerateTypologyRecordsWithBlock:(id)arg0 ;
-(void)enumerateTypologyRecordsWithBlockIncludingStop:(id)arg0 ;
-(void)logRecord:(id)arg0 ;
-(void)logRecord:(id)arg0 trace:(id)arg1 ;
-(void)parseTraceLogContent:(id)arg0 ;
-(void)traceHeaderParsed:(id)arg0 ;
-(void)traceRecordParsed:(id)arg0 ;


@end


#endif