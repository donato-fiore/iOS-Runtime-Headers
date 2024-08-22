// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOSSTATELOG_H
#define PLPHOTOSSTATELOG_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLPhotosStateLog : NSObject {
    PLPhotoLibrary *_photoLibrary;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_group> *group; // ivar: _group
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;


-(BOOL)compressFileFromPath:(id)arg0 toPath:(id)arg1 ;
-(BOOL)copyFilesMatching:(id)arg0 andExcluding:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3 usingCompression:(BOOL)arg4 ;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)_logAssets:(id)arg0 forAlbum:(id)arg1 indent:(NSUInteger)arg2 ;
-(void)createSnapshot;
-(void)logAlbum:(id)arg0 index:(NSUInteger)arg1 indent:(NSUInteger)arg2 completeMetadata:(BOOL)arg3 printAssets:(BOOL)arg4 ;
-(void)logAlbumLists;
-(void)logAllAlbums;
-(void)logAssetCounts;
-(void)logDescription:(id)arg0 ;
-(void)logMoments;


@end


#endif