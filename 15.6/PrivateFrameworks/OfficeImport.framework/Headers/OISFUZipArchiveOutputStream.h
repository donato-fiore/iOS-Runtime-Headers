// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OISFUZIPARCHIVEOUTPUTSTREAM_H
#define OISFUZIPARCHIVEOUTPUTSTREAM_H

@class NSData, NSMutableArray, NSString;
@protocol SFUSimpleOutputStream, SFUOutputStream;

#import <Foundation/Foundation.h>

#import "OISFUMoveableFileOutputStream.h"
#import "OISFUCryptoKey.h"
#import "OISFUZipOutputEntry.h"
#import "OISFUZipFreeSpaceEntry.h"

@interface OISFUZipArchiveOutputStream : NSObject <SFUSimpleOutputStream>

 {
    OISFUMoveableFileOutputStream *mOutputStream;
    OISFUCryptoKey *mCryptoKey;
    NSData *mPassphraseHint;
    NSData *mEncryptedDocumentUuid;
    NSMutableArray *mEntries;
    OISFUZipOutputEntry *mCurrentEntry;
    OISFUZipOutputEntry *mLastEntryInFile;
    id<SFUOutputStream> *mEntryOutputStream;
    char * mBuffer;
    NSMutableArray *mFreeList;
    OISFUZipFreeSpaceEntry *mCurrentFreeSpace;
    NSUInteger mFreeBytes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)createZipWithItemsAtPath:(id)arg0 zippedPath:(id)arg1 rootPathComponentName:(id)arg2 ;
+(NSUInteger)approximateBytesForEntryHeaderWithName:(id)arg0 ;
-(BOOL)canRemoveEntryWithName:(id)arg0 ;
-(NSUInteger)freeBytes;
-(NSUInteger)writeLocalFileHeaderForEntry:(id)arg0 ;
-(id)beginUncompressedUnknownSizeEntryWithName:(id)arg0 ;
-(id)entriesAtPath:(id)arg0 ;
-(id)entryNames;
-(id)initWithOutputStream:(id)arg0 cryptoKey:(id)arg1 passphraseHint:(id)arg2 ;
-(id)initWithPath:(id)arg0 ;
-(id)initWithPath:(id)arg0 cryptoKey:(id)arg1 passphraseHint:(id)arg2 ;
-(unsigned int)crc32ForEntry:(id)arg0 ;
-(void)beginEntryWithName:(id)arg0 isCompressed:(BOOL)arg1 uncompressedSize:(NSUInteger)arg2 ;
-(void)beginUnknownSizeEntryWithName:(id)arg0 isCompressed:(BOOL)arg1 ;
-(void)close;
-(void)coalesceAndTruncateFreeSpace;
-(void)dealloc;
-(void)finishEntry;
-(void)flush;
-(void)moveToPath:(id)arg0 ;
-(void)removeEntryWithName:(id)arg0 ;
-(void)reset;
-(void)setCrc32ForCurrentEntry:(unsigned int)arg0 ;
-(void)setEncryptedDocumentUuid:(id)arg0 ;
-(void)writeBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(void)writeCentralFileHeaderUsingEntry:(id)arg0 isFirstEntry:(BOOL)arg1 ;
-(void)writeEndOfCentralDirectoryWithOffset:(NSInteger)arg0 ;
-(void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(NSInteger)arg0 ;
-(void)writeZip64EndOfCentralDirectoryWithOffset:(NSInteger)arg0 ;


@end


#endif