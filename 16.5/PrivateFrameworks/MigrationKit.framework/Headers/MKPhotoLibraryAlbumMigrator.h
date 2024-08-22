// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKPHOTOLIBRARYALBUMMIGRATOR_H
#define MKPHOTOLIBRARYALBUMMIGRATOR_H



#import "MKMigrator.h"
#import "MKPhotoLibraryAssetDatabase.h"

@interface MKPhotoLibraryAlbumMigrator : MKMigrator {
    MKPhotoLibraryAssetDatabase *_db;
}




-(id)init;
-(void)import;
-(void)setCollections;
-(void)setIdentifier:(id)arg0 forAsset:(id)arg1 ;


@end


#endif