// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSMETADATAUTILITIES_H
#define PLSMETADATAUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLSMetadataUtilities : NSObject



+(BOOL)_writeDetails:(id)arg0 forEntityNamed:(id)arg1 toFilepath:(id)arg2 withDefaultFilename:(id)arg3 ;
+(BOOL)initializeJSONFileAtPath:(id)arg0 ;
+(id)_allAlbumsInPhotoLibrary:(id)arg0 ;
+(id)_detailsForAlbum:(id)arg0 ;
+(id)_detailsForAsset:(id)arg0 includingLocal:(BOOL)arg1 includingFingerprints:(BOOL)arg2 ;
+(id)_normalizeObjectForJSON:(id)arg0 ;
+(id)allAlbumsDetailsWriteToPath:(id)arg0 inLibrary:(id)arg1 ;
+(id)allAssetsDetailsWriteToPath:(id)arg0 includingLocal:(BOOL)arg1 includingFingerprints:(BOOL)arg2 forAlbumTitled:(id)arg3 library:(id)arg4 ;
+(id)dictionaryFromManagedObject:(id)arg0 excludeAttributes:(id)arg1 includingRelationships:(id)arg2 excludeRelationshipAttributes:(id)arg3 andSubRelationships:(id)arg4 ;
+(void)_writeJSONForObjectDetails:(id)arg0 toFile:(id)arg1 ;
+(void)serializeJSONFromObjectDetails:(id)arg0 ToPath:(id)arg1 ;
+(void)writeJSONData:(id)arg0 toFile:(id)arg1 ;


@end


#endif