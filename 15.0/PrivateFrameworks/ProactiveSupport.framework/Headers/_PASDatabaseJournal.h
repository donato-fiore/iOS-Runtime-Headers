// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASDATABASEJOURNAL_H
#define _PASDATABASEJOURNAL_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_PASDatabaseJournalFile.h"

@interface _PASDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    NSUInteger _serialNumber;
    NSString *_uuid;
    BOOL _inMemory;
    _PASDatabaseJournalFile *_currentFile;
}


@property (readonly, nonatomic) BOOL journaling; // ivar: _journaling


+(id)_binderForDictionary:(SEL)arg0 ;
+(id)_journalPathForDbPath:(id)arg0 ;
+(id)journalForInMemoryDb;
+(id)journalWithDbPath:(id)arg0 ;
-(BOOL)_executeFile:(id)arg0 onDb:(id)arg1 becameLocked:(*BOOL)arg2 ;
-(BOOL)_executeNextRecordFromFile:(id)arg0 onDb:(id)arg1 becameLocked:(*BOOL)arg2 deleteFile:(*BOOL)arg3 ;
-(BOOL)deleteAllJournaledQueries;
-(BOOL)executeQueriesOnDatabase:(id)arg0 ;
-(BOOL)startJournaling;
-(BOOL)stopJournaling;
-(id)_getCurrentFile;
-(id)description;
-(id)directoryPath;
-(void)_addCurrentFileToLog;
-(void)_clearCurrentFile;
-(void)_closeCurrentFile;
-(void)runQuery:(id)arg0 values:(id)arg1 onDb:(id)arg2 ;


@end


#endif