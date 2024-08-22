// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUZIPENTRY_H
#define SFUZIPENTRY_H

@class SFUDataRepresentation<SFUZipArchiveDataRepresentation>;


#import "SFUDataRepresentation.h"
#import "SFUCryptoKey.h"

@interface SFUZipEntry : SFUDataRepresentation {
    SFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;
    int mCompressionMethod;
    NSUInteger mCompressedSize;
    NSUInteger mUncompressedSize;
    NSUInteger mOffset;
    unsigned int mCrc;
    NSUInteger mDataOffset;
    BOOL mHasDataOffset;
    NSUInteger mEncodedLength;
    BOOL mHasEncodedLength;
    SFUCryptoKey *mCryptoKey;
}




-(BOOL)isBackedByFile;
-(BOOL)isCompressed;
-(BOOL)isEncrypted;
-(BOOL)isReadable;
-(NSInteger)dataLength;
-(NSInteger)encodedLength;
-(NSUInteger)backingFileDataOffset;
-(NSUInteger)calculateEncodedLength;
-(NSUInteger)dataOffset;
-(id)backingFilePath;
-(id)data;
-(id)initFromCentralFileHeader:(char *)arg0 dataRepresentation:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg0 compressionMethod:(int)arg1 compressedSize:(NSUInteger)arg2 uncompressedSize:(NSUInteger)arg3 offset:(NSUInteger)arg4 crc:(unsigned int)arg5 ;
-(id)inputStream;
-(unsigned int)crc;
-(void)copyToFile:(id)arg0 ;
-(void)dealloc;
-(void)readZip64ExtraField:(char *)arg0 size:(NSUInteger)arg1 ;
-(void)setCompressionFlags:(unsigned short)arg0 ;
-(void)setCryptoKey:(id)arg0 ;
-(void)setDataLength:(NSInteger)arg0 ;


@end


#endif