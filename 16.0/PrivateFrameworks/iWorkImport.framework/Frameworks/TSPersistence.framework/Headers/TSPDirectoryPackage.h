// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDIRECTORYPACKAGE_H
#define TSPDIRECTORYPACKAGE_H



#import "TSPPackage.h"

@interface TSPDirectoryPackage : TSPPackage



+(BOOL)isValidPackageAtURL:(id)arg0 ;
+(NSUInteger)zipArchiveOptions;
+(id)componentFileURLForPackageURL:(id)arg0 packageLocator:(id)arg1 ;
+(id)objectArchiveURLForPackageURL:(id)arg0 ;
+(id)zipArchiveURLFromPackageURL:(id)arg0 ;
-(BOOL)hasDataAtRelativePath:(id)arg0 ;
-(NSInteger)packageType;
-(id)dataAtRelativePath:(id)arg0 allowDecryption:(BOOL)arg1 error:(*id)arg2 ;
-(id)newDataStorageAtRelativePath:(id)arg0 decryptionInfo:(id)arg1 materializedLength:(NSUInteger)arg2 packageURL:(id)arg3 lastModificationDate:(*id)arg4 ;
// -(id)newDocumentPropertiesWithURL:(id)arg0 zipProvider:(id)arg1 error:(unk)arg2  ;
-(id)newRawDataReadChannelAtRelativePath:(id)arg0 ;
-(id)newRawReadChannelForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 error:(*id)arg2 ;
-(id)packageEntryInfoAtRelativePath:(id)arg0 error:(*id)arg1 ;
-(id)packageEntryInfoForComponentLocator:(id)arg0 isStoredOutsideObjectArchive:(BOOL)arg1 ;
-(void)copyComponent:(id)arg0 toPackageURL:(id)arg1 packageLocator:(id)arg2 zipFileWriter:(id)arg3 encryptionKey:(id)arg4 canLink:(BOOL)arg5 completion:(id)arg6 ;
-(void)prepareForDocumentReplacementWithSuccess:(BOOL)arg0 forSafeSave:(BOOL)arg1 originalURL:(id)arg2 ;


@end


#endif