// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLREBUILDABLEDIRECTORY_H
#define PLREBUILDABLEDIRECTORY_H

@class NSFileManager, NSURL;

#import <Foundation/Foundation.h>

#import "PLPhotoLibrary.h"

@interface PLRebuildableDirectory : NSObject

@property (readonly) NSFileManager *fm; // ivar: _fm
@property (readonly) BOOL isCPLAssets; // ivar: _isCPLAssets
@property (readonly) BOOL isPhotoStream; // ivar: _isPhotoStream
@property (readonly) PLPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) CGFloat startTime; // ivar: _startTime
@property (readonly) NSURL *url; // ivar: _url


+(id)rebuildableDirectoryWithURL:(id)arg0 isCPLAssets:(BOOL)arg1 isPhotoStream:(BOOL)arg2 photoLibrary:(id)arg3 startTime:(CGFloat)arg4 ;
+(void)collectFileURLs:(id)arg0 urlsToSkip:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(BOOL)arg5 startTime:(CGFloat)arg6 pathManager:(id)arg7 ;
-(id)debugDescription;
-(id)description;
-(void)_collectContentsOfDirectoryURL:(id)arg0 urlsToSkip:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 startTime:(CGFloat)arg5 ;
-(void)gatherAssetsToImport:(id)arg0 pendingAssetsCount:(*NSUInteger)arg1 onDiskURLsToSkip:(id)arg2 cameraRollOnly:(BOOL)arg3 ;


@end


#endif