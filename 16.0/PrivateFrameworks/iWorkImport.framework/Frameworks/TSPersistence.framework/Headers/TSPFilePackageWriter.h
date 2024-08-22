// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPFILEPACKAGEWRITER_H
#define TSPFILEPACKAGEWRITER_H

@class TSUZipFileWriter, TSUSafeSaveAssistant;


#import "TSPPackageWriter.h"

@interface TSPFilePackageWriter : TSPPackageWriter {
    TSUZipFileWriter *_delayedZipArchiveWriter;
    TSUSafeSaveAssistant *_safeSaveAssistant;
    BOOL _onlyWriteToDelayedZipArchive;
}




-(id)componentZipArchiveWriter;
-(id)initWithURL:(id)arg0 documentTargetURL:(id)arg1 relativeURLForExternalData:(id)arg2 packageIdentifier:(unsigned char)arg3 documentProperties:(id)arg4 documentMetadata:(id)arg5 fileFormatVersion:(NSUInteger)arg6 updateType:(NSInteger)arg7 cloneMode:(BOOL)arg8 documentSaveValidationPolicy:(id)arg9 encryptionKey:(id)arg10 originalDocumentPackage:(id)arg11 originalSupportPackage:(id)arg12 fileCoordinatorDelegate:(id)arg13 progress:(id)arg14 error:(*id)arg15 ;
-(id)newPackageWithPackageIdentifier:(unsigned char)arg0 documentProperties:(id)arg1 fileFormatVersion:(NSUInteger)arg2 decryptionKey:(id)arg3 fileCoordinatorDelegate:(id)arg4 ;
-(id)newRawDataWriteChannelForRelativePath:(id)arg0 originalLastModificationDate:(id)arg1 originalSize:(NSUInteger)arg2 originalCRC:(unsigned int)arg3 forceCalculatingSizeAndCRCForPreservingLastModificationDate:(BOOL)arg4 ;
-(id)zipArchiveWriter;
-(void)closeWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)finalizeComponentAndDataSectionWithCompletionHandler:(id)arg0 ;
-(void)truncateZipAtFirstDeletedData:(id)arg0 ;
-(void)willWriteData:(id)arg0 ;


@end


#endif