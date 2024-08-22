// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLTHUMBFILEMANAGERCORE_H
#define PLTHUMBFILEMANAGERCORE_H

@class NSString;
@protocol PLThumbPersistenceManager;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryPathManager.h"
#import "PLImageFormat.h"

@interface PLThumbFileManagerCore : NSObject <PLThumbPersistenceManager>

 {
    unsigned int _recipeId;
    BOOL _readOnly;
    PLPhotoLibraryPathManager *_pathManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) PLImageFormat *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReadOnly;
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly) Class superclass;


+(id)_fileIdentifierForThumbnailIdentifierComponents:(id)arg0 recipeID:(unsigned int)arg1 ;
+(id)thumbnailIdentifierURLComponentsForUBFWithAssetUUID:(id)arg0 bundleScope:(unsigned short)arg1 ;
+(id)thumbnailPathForThumbIdentifier:(id)arg0 withPathManager:(id)arg1 recipeID:(unsigned int)arg2 forDelete:(BOOL)arg3 ;
+(struct ? )maxMasterSizeFromSourceImageSize:(struct ? )arg0 format:(id)arg1 ;
-(BOOL)setImageForEntry:(id)arg0 withIdentifier:(id)arg1 orIndex:(NSUInteger)arg2 photoUUID:(id)arg3 options:(id)arg4 ;
-(BOOL)usesThumbIdentifiers;
-(BOOL)validateData:(id)arg0 withToken:(id)arg1 ;
-(id)beginThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg0 ;
-(id)imageDataWithIdentifier:(id)arg0 orIndex:(NSUInteger)arg1 width:(*int)arg2 height:(*int)arg3 bytesPerRow:(*int)arg4 dataWidth:(*int)arg5 dataHeight:(*int)arg6 dataOffset:(*int)arg7 ;
-(id)initWithImageFormat:(id)arg0 pathManager:(id)arg1 ;
-(id)thumbnailPathForThumbIdentifier:(id)arg0 ;
-(struct CGImage *)createImageWithIdentifier:(id)arg0 orIndex:(NSUInteger)arg1 ;
-(void)deleteEntryWithIdentifier:(id)arg0 ;
-(void)endThumbnailSafePropertyUpdatesOnAssetThumbnailIdentifier:(id)arg0 withToken:(id)arg1 ;
-(void)preheatDataForThumbnailIndexes:(id)arg0 ;


@end


#endif