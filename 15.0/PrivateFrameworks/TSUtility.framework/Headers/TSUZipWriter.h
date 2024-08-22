// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSUZIPWRITER_H
#define TSUZIPWRITER_H

@class NSMutableArray, NSMutableSet, NSError;
@protocol OS_dispatch_data, OS_dispatch_queue, TSURandomWriteChannel;

#import <Foundation/Foundation.h>

#import "TSUZipWriterEntry.h"

@interface TSUZipWriter : NSObject {
    NSMutableArray *_entries;
    NSMutableSet *_entryNames;
    TSUZipWriterEntry *_currentEntry;
    BOOL _calculateSize;
    BOOL _calculateCRC;
    unsigned short _entryTime;
    unsigned short _entryDate;
    NSInteger _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    NSUInteger _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSInteger _writtenOffset;
    NSError *_error;
}


@property (readonly, nonatomic) NSUInteger archiveLength;
@property (readonly, nonatomic) NSObject<TSURandomWriteChannel> *writeChannel;


-(id)centralFileHeaderDataForEntry:(id)arg0 ;
-(id)endOfCentralDirectoryDataWithOffset:(NSInteger)arg0 size:(NSInteger)arg1 ;
-(id)init;
-(id)localFileHeaderDataForEntry:(id)arg0 ;
-(void)addData:(id)arg0 ;
-(void)addDataImpl:(id)arg0 ;
-(void)beginEntryWithName:(id)arg0 ;
-(void)beginEntryWithName:(id)arg0 size:(NSUInteger)arg1 CRC:(unsigned int)arg2 ;
-(void)beginEntryWithNameImpl:(id)arg0 size:(NSUInteger)arg1 CRC:(unsigned int)arg2 ;
-(void)closeWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;
-(void)finishEntry;
-(void)flushEntryData;
-(void)handleWriteError:(id)arg0 ;
-(void)initEntryTime;
-(void)writeCentralDirectory;
-(void)writeData:(id)arg0 ;
-(void)writeData:(id)arg0 offset:(NSInteger)arg1 ;
-(void)writeEntryWithName:(id)arg0 fromReadChannel:(id)arg1 completion:(id)arg2 ;
-(void)writeEntryWithName:(id)arg0 size:(NSUInteger)arg1 CRC:(unsigned int)arg2 fromReadChannel:(id)arg3 completion:(id)arg4 ;


@end


#endif