// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPHOTOLIBRARYMIGRATOR_H
#define MKPHOTOLIBRARYMIGRATOR_H

@class NSString;
@protocol OS_dispatch_queue, MKPhotoLibraryMigratorDelegate;

#import <Foundation/Foundation.h>

#import "MKPhotoLibrary.h"
#import "MKPhotoLibraryAssetDatabase.h"

@interface MKPhotoLibraryMigrator : NSObject {
    NSUInteger _importErrors;
    NSUInteger _metadataErrors;
    NSObject<OS_dispatch_queue> *_assetQueue;
    NSString *_root;
    MKPhotoLibrary *_photoLibrary;
    MKPhotoLibraryAssetDatabase *_db;
    NSUInteger _type;
}


@property (nonatomic) NSObject<MKPhotoLibraryMigratorDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isBusy; // ivar: _isBusy
@property (copy, nonatomic) NSString *path; // ivar: _path


-(id)initWithType:(NSUInteger)arg0 ;
-(void)addImportTime:(id)arg0 ;
-(void)addToAssetQueue:(id)arg0 ;
-(void)close;
-(void)import:(id)arg0 identifier:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 filename:(id)arg5 collection:(id)arg6 ;
-(void)importChunk:(id)arg0 identifier:(id)arg1 offset:(NSUInteger)arg2 length:(NSUInteger)arg3 total:(NSUInteger)arg4 filename:(id)arg5 collection:(id)arg6 ;
-(void)photoLibraryDidAddAsset:(id)arg0 identifier:(id)arg1 ;
-(void)photoLibraryDidSetIdentifier:(id)arg0 forAsset:(id)arg1 ;
-(void)photoLibraryWillAddAsset;
-(void)setCollections;


@end


#endif