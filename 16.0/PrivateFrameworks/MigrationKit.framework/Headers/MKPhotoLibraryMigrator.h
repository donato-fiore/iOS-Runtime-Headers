// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPHOTOLIBRARYMIGRATOR_H
#define MKPHOTOLIBRARYMIGRATOR_H

@class NSString;
@protocol OS_dispatch_queue;


#import "MKMigrator.h"
#import "MKPhotoLibrary.h"
#import "MKPhotoLibraryAssetDatabase.h"
#import "MKPhotoLibraryAlbumMigrator.h"

@interface MKPhotoLibraryMigrator : MKMigrator {
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSUInteger _interruptionCount;
    NSString *_root;
    MKPhotoLibrary *_photoLibrary;
    MKPhotoLibraryAssetDatabase *_db;
    NSUInteger _type;
}


@property (weak, nonatomic) MKPhotoLibraryAlbumMigrator *albumMigrator; // ivar: _albumMigrator
@property (nonatomic) BOOL isBusy; // ivar: _isBusy
@property (copy, nonatomic) NSString *path; // ivar: _path


-(BOOL)shouldRetry;
-(id)initWithType:(NSUInteger)arg0 ;
-(void)addImportTime:(id)arg0 ;
-(void)addToAssetQueue:(id)arg0 ;
-(void)import;
-(void)import:(id)arg0 identifier:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 filename:(id)arg5 collection:(id)arg6 ;
-(void)importChunk:(id)arg0 identifier:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 filename:(id)arg5 collection:(id)arg6 ;
-(void)photoLibraryDidAddAsset:(id)arg0 identifier:(id)arg1 ;
-(void)photoLibraryDidInterruptAsset:(id)arg0 ;
-(void)photoLibraryDidSetIdentifier:(id)arg0 forAsset:(id)arg1 ;
-(void)photoLibraryWillAddAsset;
-(void)resetInterruptionCount;
-(void)retry;


@end


#endif