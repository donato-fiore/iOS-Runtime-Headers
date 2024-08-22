// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPPACKAGEWRITER_H
#define TSPPACKAGEWRITER_H

@class NSError, NSURL, NSString, SFUCryptoKey, NSProgress, TSUZipFileWriter;
@protocol TSPFileCoordinatorDelegate, TSPPackageDataWriter, TSPComponentWriteChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSPDocumentMetadata.h"
#import "TSPPackage.h"
#import "TSPDocumentSaveValidationPolicy.h"

@interface TSPPackageWriter : NSObject <TSPFileCoordinatorDelegate, TSPPackageDataWriter>

 {
    TSPDocumentMetadata *_documentMetadata;
    TSPPackage *_originalDocumentPackage;
    TSPPackage *_originalSupportPackage;
    id<TSPFileCoordinatorDelegate> *_fileCoordinatorDelegate;
    id<TSPComponentWriteChannel> *_componentWriteChannel;
    NSObject<OS_dispatch_queue> *_errorQueue;
    NSError *_error;
    TSPPackage *_writtenPackage;
    BOOL _isOpened;
}


@property (readonly, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) BOOL canLinkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentSaveValidationPolicy *documentSaveValidationPolicy; // ivar: _documentSaveValidationPolicy
@property (readonly, nonatomic) NSURL *documentTargetURL; // ivar: _documentTargetURL
@property (readonly, nonatomic) SFUCryptoKey *encryptionKey; // ivar: _encryptionKey
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSPPackage *originalPackage;
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSURL *relativeURLForExternalData; // ivar: _relativeURLForExternalData
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger updateType; // ivar: _updateType
@property (readonly, nonatomic) TSUZipFileWriter *zipArchiveWriter; // ivar: _zipArchiveWriter


+(id)newPackageWriterWithPackageType:(NSInteger)arg0 URL:(id)arg1 documentTargetURL:(id)arg2 relativeURLForExternalData:(id)arg3 packageIdentifier:(unsigned char)arg4 documentProperties:(id)arg5 documentMetadata:(id)arg6 fileFormatVersion:(NSUInteger)arg7 updateType:(NSInteger)arg8 cloneMode:(BOOL)arg9 documentSaveValidationPolicy:(id)arg10 encryptionKey:(id)arg11 originalDocumentPackage:(id)arg12 originalSupportPackage:(id)arg13 fileCoordinatorDelegate:(id)arg14 progress:(id)arg15 error:(*id)arg16 ;
-(BOOL)addData:(id)arg0 infoMessage:(*void)arg1 saveOperationState:(id)arg2 error:(*id)arg3 ;
-(BOOL)closeAndReturnError:(*id)arg0 ;
-(BOOL)flushPendingWritesReturningError:(*id)arg0 ;
-(BOOL)writeData:(id)arg0 toRelativePath:(id)arg1 allowEncryption:(BOOL)arg2 error:(*id)arg3 ;
-(id)componentZipArchiveWriter;
-(id)copyData:(id)arg0 withReadChannel:(id)arg1 decryptionInfo:(id)arg2 size:(NSUInteger)arg3 calculateCRC:(BOOL)arg4 preferredFilename:(id)arg5 error:(*id)arg6 ;
-(id)dataForZipEntry:(id)arg0 inDataToWrite:(id)arg1 ;
-(id)filenameForData:(id)arg0 preferredFilename:(id)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg0 documentTargetURL:(id)arg1 relativeURLForExternalData:(id)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(id)arg4 documentMetadata:(id)arg5 fileFormatVersion:(NSUInteger)arg6 updateType:(NSInteger)arg7 cloneMode:(BOOL)arg8 documentSaveValidationPolicy:(id)arg9 encryptionKey:(id)arg10 originalDocumentPackage:(id)arg11 originalSupportPackage:(id)arg12 fileCoordinatorDelegate:(id)arg13 progress:(id)arg14 error:(*id)arg15 ;
-(id)linkOrCopyData:(id)arg0 fromURL:(id)arg1 fromTemporaryLocation:(BOOL)arg2 decryptionInfo:(id)arg3 preferredFilename:(id)arg4 error:(*id)arg5 ;
-(id)newComponentWriteChannelWithPackageLocator:(id)arg0 compressionAlgorithm:(NSInteger)arg1 storeOutsideObjectArchive:(BOOL)arg2 ;
-(id)newCompressionComponentWriteChannelWithComponentWriteChannel:(id)arg0 compressionAlgorithm:(NSInteger)arg1 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg0 documentProperties:(id)arg1 fileFormatVersion:(NSUInteger)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 ;
-(id)newRawComponentWriteChannelWithPackageLocator:(id)arg0 storeOutsideObjectArchive:(BOOL)arg1 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg0 originalLastModificationDate:(id)arg1 originalSize:(NSUInteger)arg2 originalCRC:(unsigned int)arg3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg4 ;
-(id)packageEntryInfoForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 packageURL:(id)arg2 ;
-(id)writtenPackageWithURL:(id)arg0 ;
-(struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(id)arg0 ;
-(void)closeCurrentChannel;
-(void)closeWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)copyComponent:(id)arg0 locator:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)finalizeComponentAndDataSectionWithCompletionHandler:(id)arg0 ;
-(void)performReadUsingAccessor:(id)arg0 ;
-(void)setError:(id)arg0 ;
-(void)willWriteData:(id)arg0 ;


@end


#endif