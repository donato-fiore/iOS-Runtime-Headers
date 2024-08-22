// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPFILEPACKAGE_H
#define TSPFILEPACKAGE_H

@class TSUZipArchive, TSUTemporaryDirectory;


#import "TSPPackage.h"

@interface TSPFilePackage : TSPPackage {
    TSUZipArchive *_componentZipArchive;
    TSUTemporaryDirectory *_componentZipArchiveTemporaryDirectory;
}




+(BOOL)isValidOrEmptyPackageOrTangierEditingFormatAtURL:(id)arg0 hasNativeUTI:(BOOL)arg1 ;
+(BOOL)isValidPackageAtURL:(id)arg0 ;
+(BOOL)isValidPackageAtZipArchive:(id)arg0 ;
+(BOOL)isValidTangierEditingFormatAtURL:(id)arg0 ;
+(BOOL)isValidTangierEditingFormatAtZipArchive:(id)arg0 ;
+(NSUInteger)zipArchiveOptions;
+(id)zipArchiveURLFromPackageURL:(id)arg0 ;
-(BOOL)didReloadZipArchive:(id)arg0 packageURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)hasDataAtRelativePath:(id)arg0 ;
-(NSInteger)packageType;
-(id)componentZipArchive;
-(id)newDataStorageAtRelativePath:(id)arg0 decryptionInfo:(id)arg1 packageURL:(id)arg2 lastModificationDate:(*id)arg3 ;
// -(id)newDocumentPropertiesWithURL:(id)arg0 zipProvider:(id)arg1 error:(unk)arg2  ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg0 ;
-(id)packageEntryInfoAtRelativePath:(id)arg0 error:(*id)arg1 ;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg0 forSafeSave:(BOOL)arg1 originalURL:(id)arg2 ;


@end


#endif