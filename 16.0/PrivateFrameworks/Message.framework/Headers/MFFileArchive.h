// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFFILEARCHIVE_H
#define MFFILEARCHIVE_H

@class NSData, NSMutableData;

#import <Foundation/Foundation.h>


@interface MFFileArchive : NSObject

@property (retain, nonatomic) NSData *inputData; // ivar: _inputData
@property (nonatomic) _NSRange inputRange; // ivar: _inputRange
@property (retain, nonatomic) NSMutableData *outputData; // ivar: _outputData
@property (copy, nonatomic) id *readerBlock; // ivar: _readerBlock
@property (copy, nonatomic) id *writerBlock; // ivar: _writerBlock


+(id)archive;
-(BOOL)_decompressArchive:(struct archive *)arg0 intoArchiveDirectory:(id)arg1 error:(*id)arg2 ;
-(BOOL)_decompressContents:(id)arg0 inMemoryWithError:(*id)arg1 mainEntry:(BOOL)arg2 ;
-(id)_compressContents:(id)arg0 error:(*id)arg1 ;
-(id)_errorForArchiveStatus:(NSInteger)arg0 ;
-(id)compressFolder:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(int)_archiveDirectoryName:(id)arg0 withArchive:(struct archive *)arg1 error:(*id)arg2 ;
-(int)_compressContents:(id)arg0 fileName:(id)arg1 withArchive:(struct archive *)arg2 error:(*id)arg3 ;
-(int)_compressContents:(id)arg0 withArchive:(struct archive *)arg1 error:(*id)arg2 ;
-(int)_compressWithArchive:(struct archive *)arg0 error:(*id)arg1 ;
-(int)_compressionCompleteForArchive:(struct archive *)arg0 error:(*id)arg1 ;
-(int)_decompressionCompleteForArchive:(struct archive *)arg0 error:(*id)arg1 ;
-(struct archive *)_compressionArchive;
-(struct archive *)_decompressionArchive;
-(struct archive_entry *)_compressionArchiveEntryWithName:(id)arg0 length:(NSUInteger)arg1 isDirectory:(BOOL)arg2 ;
-(void)compressContents:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)decompressContents:(id)arg0 completion:(id)arg1 ;
// -(void)registerBlocks:(id)arg0 writer:(unk)arg1  ;
-(void)unregisterBlocks;


@end


#endif