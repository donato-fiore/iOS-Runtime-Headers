// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLLIBRARYUTILITY_H
#define BLLIBRARYUTILITY_H


#import <Foundation/Foundation.h>


@interface BLLibraryUtility : NSObject



+(BOOL)_isMultiUser;
+(BOOL)writeBinaryPropertyList:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
+(id)_dcIdentifierFromOpfPath:(id)arg0 isEPUB:(BOOL)arg1 ;
+(id)_iTunesMetadataPathForEpubPath:(id)arg0 ;
+(id)_storeIdFromiTunesMetadataPath:(id)arg0 error:(*id)arg1 ;
+(id)dcIdentifierFromBookPath:(id)arg0 ;
+(id)generateFileUniqueIdFromPath:(id)arg0 ;
+(id)identifierFromBookContainer:(id)arg0 allowHash:(BOOL)arg1 allowStoreID:(BOOL)arg2 error:(*id)arg3 ;
+(id)identifierFromBookPath:(id)arg0 allowHash:(BOOL)arg1 allowStoreID:(BOOL)arg2 error:(*id)arg3 ;
+(id)identifierFromBookPath:(id)arg0 error:(*id)arg1 ;
+(id)identifierFromBookZipArchive:(id)arg0 allowHash:(BOOL)arg1 allowStoreID:(BOOL)arg2 error:(*id)arg3 ;
+(id)md5FromPath:(id)arg0 ;
+(id)opfPathFromEpubPath:(id)arg0 ;
+(id)opfPathFromFullOpfContainerPath:(id)arg0 ;
+(id)p_opfPathFromContainerXmlDoc:(struct _xmlDoc *)arg0 epubPath:(id)arg1 ;
+(id)p_opfPathFromContainerXmlPath:(id)arg0 epubPath:(id)arg1 ;
+(id)uniqueIdFromEpubPath:(id)arg0 ;
+(id)uniqueIdFromPdfPath:(id)arg0 ;


@end


#endif