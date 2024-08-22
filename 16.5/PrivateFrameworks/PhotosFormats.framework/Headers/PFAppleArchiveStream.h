// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFAPPLEARCHIVESTREAM_H
#define PFAPPLEARCHIVESTREAM_H

@class NSURL, NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface PFAppleArchiveStream : NSObject {
    *AAByteStream_impl _inputStream;
    *AAByteStream_impl _outputStream;
    *AAByteStream_impl _compressionStream;
    *AAByteStream_impl _encryptionStream;
    *AEAContext_impl _encryptionContext;
}


@property BOOL appendToExistingArchive; // ivar: _appendToExistingArchive
@property (readonly) NSURL *archiveURL; // ivar: _archiveURL
@property NSUInteger blockSize; // ivar: _blockSize
@property NSInteger compression; // ivar: _compression
@property (retain) NSDictionary *encryptedArchiveMetadata; // ivar: _encryptedArchiveMetadata
@property (retain) NSData *encryptionKey; // ivar: _encryptionKey


-(BOOL)_openForReadingEncryptionStreamWithError:(*id)arg0 ;
-(BOOL)_openForWritingCompressionStreamShouldAppend:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)_openForWritingEncryptionStreamWithError:(*id)arg0 ;
-(BOOL)_setupEncryptionContextForWritingWithError:(*id)arg0 ;
-(BOOL)close:(*id)arg0 ;
-(BOOL)openForReading:(*id)arg0 ;
-(BOOL)openForWriting:(*id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithArchiveURL:(id)arg0 ;
-(struct AAByteStream_impl *)_byteStreamToBeReadByArchiveDecodingStream;
-(struct AAByteStream_impl *)_byteStreamToBeTargetedByArchiveEncodingStream;
-(unsigned int)aaCompressionAlgorithm;
-(void)dealloc;


@end


#endif