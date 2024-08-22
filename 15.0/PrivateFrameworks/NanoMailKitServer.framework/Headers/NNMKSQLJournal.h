// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKSQLJOURNAL_H
#define NNMKSQLJOURNAL_H

@class NSMutableData, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NNMKSQLJournal : NSObject

@property (retain, nonatomic) NSMutableData *currentFileData; // ivar: _currentFileData
@property (retain, nonatomic) NSString *directoryPath; // ivar: _directoryPath
@property (nonatomic) NSUInteger filesCount; // ivar: _filesCount
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *journalQueue; // ivar: _journalQueue


-(BOOL)appendSQLStatement:(id)arg0 ;
-(BOOL)isJournalOverflow;
-(NSUInteger)_currentFilesCount;
-(id)_journalFilesEnumerator;
-(id)_nextFilePath;
-(id)_sortedJournalFiles;
-(id)initWithPath:(id)arg0 ;
-(void)_flush;
-(void)dealloc;
-(void)deleteJournalFiles;
-(void)flushIfNeeded;
-(void)mergeUsingBlock:(id)arg0 ;


@end


#endif