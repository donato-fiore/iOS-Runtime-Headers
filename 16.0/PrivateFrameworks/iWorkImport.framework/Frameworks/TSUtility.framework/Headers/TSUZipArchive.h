// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUZIPARCHIVE_H
#define TSUZIPARCHIVE_H

@class NSMutableDictionary, NSMutableOrderedSet;

#import <Foundation/Foundation.h>


@interface TSUZipArchive : NSObject {
    NSMutableDictionary *_entriesMap;
    NSMutableOrderedSet *_entries;
}


@property (readonly, nonatomic) NSUInteger archiveLength;
@property (readonly, nonatomic) NSInteger endOfLastEntry; // ivar: _endOfLastEntry
@property (readonly, nonatomic) NSUInteger entriesCount;
@property (readonly, nonatomic) BOOL hasNonEmptyEntries;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) NSUInteger options; // ivar: _options


-(BOOL)readCentralFileHeaderWithBuffer:(**void)arg0 dataSize:(*NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)readExtraFieldsFromBuffer:(**void)arg0 extraFieldsLength:(unsigned short)arg1 entry:(id)arg2 dataSize:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)readFileCommentFromBuffer:(**void)arg0 fileCommentLength:(unsigned short)arg1 entry:(id)arg2 dataSize:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)readFilenameFromBuffer:(**void)arg0 nameLength:(unsigned short)arg1 entry:(id)arg2 dataSize:(*NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)readLocalFileHeaderFilenameAndExtraFieldsData:(id)arg0 forEntry:(id)arg1 error:(*id)arg2 ;
-(BOOL)readZip64ExtraFieldFromBuffer:(*void)arg0 dataLength:(unsigned short)arg1 entry:(id)arg2 error:(*id)arg3 ;
-(BOOL)validateCRCAndReturnError:(*id)arg0 ;
-(id)containedZipArchiveForEntry:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)debugDescription;
-(id)entryForName:(id)arg0 ;
-(id)init;
-(id)initWithOptions:(NSUInteger)arg0 ;
-(id)newArchiveReadChannel;
-(id)normalizeEntryName:(id)arg0 ;
-(id)readChannelForEntry:(id)arg0 ;
-(id)readChannelForEntry:(id)arg0 validateCRC:(BOOL)arg1 ;
-(id)sortedEntriesUsingComparator:(id)arg0 ;
-(id)streamReadChannelForEntry:(id)arg0 ;
-(id)streamReadChannelForEntry:(id)arg0 validateCRC:(BOOL)arg1 ;
-(void)addEntry:(id)arg0 ;
-(void)collapseCommonRootDirectory;
-(void)enumerateEntriesUsingBlock:(id)arg0 ;
-(void)readArchiveWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)readCentralDirectoryData:(id)arg0 entryCount:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)readCentralDirectoryWithEntryCount:(NSUInteger)arg0 offset:(NSInteger)arg1 size:(NSUInteger)arg2 channel:(id)arg3 completion:(id)arg4 ;
-(void)readEndOfCentralDirectoryData:(id)arg0 eocdOffset:(NSInteger)arg1 channel:(id)arg2 completion:(id)arg3 ;
-(void)readLocalFileHeaderData:(id)arg0 atOffset:(NSInteger)arg1 channel:(id)arg2 completion:(id)arg3 ;
-(void)readLocalFileHeaderEntriesFromChannel:(id)arg0 offset:(NSInteger)arg1 previousEntry:(id)arg2 seekAttempts:(unsigned int)arg3 seekForward:(BOOL)arg4 completion:(id)arg5 ;
-(void)readZip64EndOfCentralDirectoryData:(id)arg0 channel:(id)arg1 completion:(id)arg2 ;
-(void)readZip64EndOfCentralDirectoryLocatorData:(id)arg0 channel:(id)arg1 completion:(id)arg2 ;
-(void)readZip64EndOfCentralDirectoryLocatorWithChannel:(id)arg0 eocdOffset:(NSInteger)arg1 completion:(id)arg2 ;
-(void)readZip64EndOfCentralDirectoryWithChannel:(id)arg0 offset:(NSInteger)arg1 completion:(id)arg2 ;
-(void)validateCRCWithQueue:(id)arg0 completion:(id)arg1 ;


@end


#endif