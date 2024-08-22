// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDIRECTORYPACKAGEWRITER_H
#define TSPDIRECTORYPACKAGEWRITER_H



#import "TSPPackageWriter.h"
#import "TSPDirectoryPackageDataWriter.h"

@interface TSPDirectoryPackageWriter : TSPPackageWriter {
    TSPDirectoryPackageDataWriter *_dataWriter;
}




-(BOOL)writeData:(id)arg0 toRelativePath:(id)arg1 allowEncryption:(BOOL)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 documentTargetURL:(id)arg1 relativeURLForExternalData:(id)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(id)arg4 documentMetadata:(id)arg5 fileFormatVersion:(NSUInteger)arg6 updateType:(NSInteger)arg7 cloneMode:(BOOL)arg8 documentSaveValidationPolicy:(id)arg9 encryptionKey:(id)arg10 originalDocumentPackage:(id)arg11 originalSupportPackage:(id)arg12 fileCoordinatorDelegate:(id)arg13 progress:(id)arg14 error:(*id)arg15 ;
-(id)linkOrCopyData:(id)arg0 fromURL:(id)arg1 fromTemporaryLocation:(BOOL)arg2 decryptionInfo:(id)arg3 preferredFilename:(id)arg4 error:(*id)arg5 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg0 documentProperties:(id)arg1 fileFormatVersion:(NSUInteger)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 ;
-(id)newRawComponentWriteChannelWithPackageLocator:(id)arg0 storeOutsideObjectArchive:(BOOL)arg1 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg0 originalLastModificationDate:(id)arg1 originalSize:(NSUInteger)arg2 originalCRC:(unsigned int)arg3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg4 ;
-(id)packageEntryInfoForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 packageURL:(id)arg2 ;
-(id)targetDataURLForPath:(id)arg0 ;
-(struct CGDataConsumer *)newCGDataConsumerAtRelativePath:(id)arg0 ;


@end


#endif