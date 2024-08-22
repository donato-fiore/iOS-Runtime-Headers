// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BUZIPWRITER_H
#define BUZIPWRITER_H

@class NSArray, NSMutableArray, NSMutableDictionary, NSError, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_data, BURandomWriteChannel, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "BUZipWriterEntry.h"

@interface BUZipWriter : NSObject {
    NSArray *_sortedEntries;
}


@property (nonatomic) unsigned int CRCToMatch; // ivar: _CRCToMatch
@property (readonly) NSUInteger archiveLength;
@property (nonatomic) BOOL calculateCRC; // ivar: _calculateCRC
@property (nonatomic) BOOL calculateSize; // ivar: _calculateSize
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *channelQueue; // ivar: _channelQueue
@property (nonatomic, getter=isClosed) BOOL closed; // ivar: _closed
@property (retain, nonatomic) BUZipWriterEntry *currentEntry; // ivar: _currentEntry
@property (nonatomic) NSInteger currentOffset; // ivar: _currentOffset
@property (retain, nonatomic) NSMutableArray *entries; // ivar: _entries
@property (readonly) NSUInteger entriesCount;
@property (retain, nonatomic) NSMutableDictionary *entriesMap; // ivar: _entriesMap
@property (nonatomic) NSUInteger entryDataSize; // ivar: _entryDataSize
@property (retain, nonatomic) NSMutableArray *entryDatas; // ivar: _entryDatas
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL force32BitSize; // ivar: _force32BitSize
@property (readonly) BOOL isClosed;
@property (retain, nonatomic) NSDate *lastModificationDateIfSizeAndCRCMatches; // ivar: _lastModificationDateIfSizeAndCRCMatches
@property (retain, nonatomic) NSObject<OS_dispatch_data> *localFileHeaderData; // ivar: _localFileHeaderData
@property (nonatomic) NSUInteger options; // ivar: _options
@property (nonatomic) NSUInteger sizeToMatch; // ivar: _sizeToMatch
@property (readonly) NSArray *sortedEntries;
@property (retain, nonatomic) NSDate *updatedEntryLastModificationDate; // ivar: _updatedEntryLastModificationDate
@property (retain, nonatomic) NSObject<BURandomWriteChannel> *writeChannel; // ivar: _writeChannel
@property (retain, nonatomic) NSObject<OS_dispatch_group> *writeChannelCompletionGroup; // ivar: _writeChannelCompletionGroup
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue; // ivar: _writeQueue
@property (nonatomic) NSInteger writtenOffset; // ivar: _writtenOffset


-(id)entryWithName:(id)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)localFileHeaderDataForEntry:(id)arg0 ;
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