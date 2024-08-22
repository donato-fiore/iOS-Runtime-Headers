// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TITYPOLOGYLOG_H
#define TITYPOLOGYLOG_H

@class NSString, NSDictionary, NSDate, NSMutableSet, NSUUID;
@protocol NSCopying, TITypologyLogDelegate;

#import <Foundation/Foundation.h>

#import "TIKeyboardState.h"
#import "TIRollingLog.h"

@interface TITypologyLog : NSObject <NSCopying>



@property (readonly, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSDictionary *config; // ivar: _config
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (weak, nonatomic) NSObject<TITypologyLogDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) TIKeyboardState *lastKeyboardState; // ivar: _lastKeyboardState
@property (retain, nonatomic) NSMutableSet *loggedRecordClasses; // ivar: _loggedRecordClasses
@property (readonly, nonatomic) NSUInteger maxNumRecords;
@property (readonly, nonatomic) NSUInteger numRecords;
@property (readonly, nonatomic) NSUInteger partIndex; // ivar: _partIndex
@property (readonly, nonatomic) TIRollingLog *records; // ivar: _records
@property (readonly, nonatomic) NSString *systemVersion; // ivar: _systemVersion
@property (readonly, nonatomic) TIRollingLog *traceLog; // ivar: _traceLog
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSUInteger version; // ivar: _version


-(BOOL)loggedRecordOfClass:(Class)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filename;
-(id)init;
-(id)initWithPropertyList:(id)arg0 ;
-(id)initWithTypologyLog:(id)arg0 ;
-(id)initWithUUID:(id)arg0 partIndex:(NSUInteger)arg1 date:(id)arg2 systemVersion:(id)arg3 buildVersion:(id)arg4 clientIdentifier:(id)arg5 config:(id)arg6 ;
-(id)propertyList;
-(id)recordMatchingUUID:(id)arg0 ;
-(id)recordSummary;
-(id)recordUUIDsIncludedInRange:(id)arg0 endUUID:(id)arg1 ;
-(id)recordsMatchingUUIDRange:(id)arg0 endUUID:(id)arg1 ;
-(id)textSummary;
-(id)timestamp;
-(void)_logRecord:(id)arg0 trace:(id)arg1 ;
-(void)enumerateHumanReadableTraceEntriesWithBlock:(id)arg0 ;
-(void)enumerateRecordsWithBlock:(id)arg0 ;
-(void)enumerateRecordsWithBlockIncludingStop:(id)arg0 ;
-(void)logRecord:(id)arg0 ;
-(void)logRecord:(id)arg0 trace:(id)arg1 ;
-(void)logToHumanReadableTrace:(id)arg0 ;


@end


#endif