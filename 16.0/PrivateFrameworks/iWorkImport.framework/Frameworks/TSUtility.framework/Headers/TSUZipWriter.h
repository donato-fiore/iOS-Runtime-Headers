// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUZIPWRITER_H
#define TSUZIPWRITER_H

@class NSMutableArray, NSArray, NSMutableDictionary, NSDate, NSError;
@protocol OS_dispatch_queue, TSURandomWriteChannel, OS_dispatch_semaphore, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "TSUZipWriterEntry.h"

@interface TSUZipWriter : NSObject {
    NSUInteger _options;
    NSObject<OS_dispatch_queue> *_channelQueue;
    id<TSURandomWriteChannel> *_writeChannel;
    NSObject<OS_dispatch_semaphore> *_writeChannelCompletionSemaphore;
    NSMutableArray *_entries;
    NSArray *_sortedEntries;
    NSMutableDictionary *_entriesMap;
    TSUZipWriterEntry *_currentEntry;
    BOOL _isClosed;
    BOOL _calculateSize;
    BOOL _force32BitSize;
    BOOL _calculateCRC;
    NSUInteger _sizeToMatch;
    unsigned int _CRCToMatch;
    NSDate *_lastModificationDateIfSizeAndCRCMatches;
    NSDate *_newEntryLastModificationDate;
    NSInteger _currentOffset;
    NSObject<OS_dispatch_data> *_localFileHeaderData;
    NSMutableArray *_entryDatas;
    NSUInteger _entryDataSize;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSInteger _writtenOffset;
    NSError *_error;
}


@property (readonly) NSUInteger archiveLength;
@property (readonly) NSUInteger entriesCount;
@property (readonly) BOOL isClosed;
@property (readonly) NSArray *sortedEntries;


-(id)entryWithName:(id)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)localFileHeaderDataForEntry:(id)arg0 ;
-(id)p_writeChannel;
-(id)prepareWriteChannelWithCloseCompletionHandler:(id)arg0 ;
-(void)addBarrier:(id)arg0 ;
-(void)addData:(id)arg0 ;
-(void)addData:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)addDataImpl:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)addExistingEntry:(id)arg0 ;
-(void)addExistingEntryImpl:(id)arg0 ;
-(void)beginEntryWithName:(id)arg0 force32BitSize:(BOOL)arg1 lastModificationDate:(id)arg2 size:(NSUInteger)arg3 CRC:(unsigned int)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg5 ;
-(void)beginEntryWithNameImpl:(id)arg0 force32BitSize:(BOOL)arg1 lastModificationDate:(id)arg2 size:(NSUInteger)arg3 CRC:(unsigned int)arg4 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg5 ;
-(void)closeWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;
-(void)finishEntry;
-(void)flushCurrentEntryWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)flushEntryData;
-(void)handleWriteError:(id)arg0 ;
-(void)p_writeData:(id)arg0 offset:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setEntryInsertionOffset:(NSInteger)arg0 ;
-(void)setEntryInsertionOffsetImpl:(NSInteger)arg0 ;
-(void)truncateToNumberOfEntries:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)truncateToNumberOfEntriesImpl:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)truncateToOffset:(NSInteger)arg0 completion:(id)arg1 ;
-(void)truncateToOffsetImpl:(NSInteger)arg0 completion:(id)arg1 ;
-(void)writeCentralDirectory;
-(void)writeCentralFileHeaderDataForEntry:(id)arg0 ;
-(void)writeData:(id)arg0 ;
-(void)writeData:(id)arg0 offset:(NSInteger)arg1 ;
-(void)writeData:(id)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)writeEndOfCentralDirectoryDataWithOffset:(NSInteger)arg0 size:(NSInteger)arg1 entryCount:(NSUInteger)arg2 ;
-(void)writeEntryWithName:(id)arg0 force32BitSize:(BOOL)arg1 fromReadChannel:(id)arg2 completion:(id)arg3 ;
-(void)writeEntryWithName:(id)arg0 force32BitSize:(BOOL)arg1 lastModificationDate:(id)arg2 size:(NSUInteger)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 completion:(id)arg6 ;
-(void)writeEntryWithName:(id)arg0 force32BitSize:(BOOL)arg1 lastModificationDate:(id)arg2 size:(NSUInteger)arg3 CRC:(unsigned int)arg4 fromReadChannel:(id)arg5 writeHandler:(id)arg6 ;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(NSInteger)arg0 ;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(NSInteger)arg0 size:(NSInteger)arg1 entryCount:(NSUInteger)arg2 ;


@end


#endif