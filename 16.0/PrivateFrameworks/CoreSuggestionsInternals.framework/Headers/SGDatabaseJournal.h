// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGDATABASEJOURNAL_H
#define SGDATABASEJOURNAL_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SGDatabaseJournalFile.h"

@interface SGDatabaseJournal : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_directoryPath;
    NSUInteger _serialNumber;
    NSString *_uuid;
    BOOL _inMemory;
    SGDatabaseJournalFile *_currentFile;
}


@property (readonly, nonatomic) BOOL journaling; // ivar: _journaling


+(id)_allowedTypesForQueryKeyedArchives;
+(id)_binderForDictionary:(SEL)arg0 ;
+(id)journalForInMemoryDb;
+(id)journalWithName:(id)arg0 ;
-(BOOL)_executeFile:(id)arg0 onDb:(id)arg1 becameLocked:(*BOOL)arg2 ;
-(BOOL)deleteAllJournaledQueries;
-(BOOL)executeQueriesOnDatabase:(id)arg0 ;
-(BOOL)startJournaling;
-(BOOL)stopJournaling;
-(id)_getCurrentFile;
-(void)_addCurrentFileToLog;
-(void)_clearCurrentFile;
-(void)_closeCurrentFile;
-(void)runQuery:(id)arg0 values:(id)arg1 onDb:(id)arg2 ;


@end


#endif