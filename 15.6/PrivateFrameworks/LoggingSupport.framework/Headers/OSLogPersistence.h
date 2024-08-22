// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGPERSISTENCE_H
#define OSLOGPERSISTENCE_H

@class NSString, NSDate, NSURL, NSCompoundPredicate, NSDictionary;
@protocol OSLogPersistenceDelegate;

#import <Foundation/Foundation.h>

#import "_OSLogCollectionReference.h"
#import "_OSLogVersioning.h"
#import "_OSLogIndex.h"

@interface OSLogPersistence : NSObject {
    _OSLogCollectionReference *_oslcr;
    _OSLogVersioning *_version;
    _OSLogIndex *_index;
}


@property (readonly, nonatomic) NSInteger archiveState;
@property (readonly, nonatomic) NSInteger archiveVersion;
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (readonly, copy, nonatomic) NSString *currentFile; // ivar: _currentFile
@property (readonly, nonatomic) NSUInteger decodeFailures; // ivar: _decodeFailures
@property (weak, nonatomic) NSObject<OSLogPersistenceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSURL *logArchive; // ivar: _logArchive
@property (copy, nonatomic) NSURL *logFile; // ivar: _logFile
@property (readonly, nonatomic) NSUInteger logMessageCount; // ivar: _logMessageCount
@property (readonly, nonatomic) NSUInteger messagesFiltered; // ivar: _messagesFiltered
@property (nonatomic) NSUInteger options; // ivar: _options
@property (copy, nonatomic) NSCompoundPredicate *predicate; // ivar: _predicate
@property (readonly, copy, nonatomic) NSDate *sparseDataStart; // ivar: _sparseDataStart
@property (readonly, copy, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, retain, nonatomic) NSDictionary *statistics;
@property (readonly, nonatomic) *_os_timesync_db_s timesync;
@property (nonatomic) BOOL verbose; // ivar: _verbose


-(BOOL)allowSensitive;
// -(BOOL)streamChunks:(id)arg0 andEntries:(unk)arg1 flags:(id)arg2  ;
-(id)init;
-(void)_openFiles;
-(void)_openLocalPersistenceDir;
-(void)_openPath:(id)arg0 ;
-(void)dealloc;
-(void)enumerateFromLastBootWithBlock:(id)arg0 ;
-(void)enumerateFromStartDate:(id)arg0 toEndDate:(id)arg1 withBlock:(id)arg2 ;
-(void)fetchFromStartDate:(id)arg0 toEndDate:(id)arg1 ;
-(void)resetWorkingState;


@end


#endif