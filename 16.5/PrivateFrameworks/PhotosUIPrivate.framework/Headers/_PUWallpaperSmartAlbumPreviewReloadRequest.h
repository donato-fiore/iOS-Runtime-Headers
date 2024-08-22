// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PUWALLPAPERSMARTALBUMPREVIEWRELOADREQUEST_H
#define _PUWALLPAPERSMARTALBUMPREVIEWRELOADREQUEST_H

@class NSString, PXWallpaperSmartAlbumDataSource;
@protocol PXWallpaperSmartAlbumDataSourceChangeObserver;

#import <Foundation/Foundation.h>


@interface _PUWallpaperSmartAlbumPreviewReloadRequest : NSObject <PXWallpaperSmartAlbumDataSourceChangeObserver>



@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXWallpaperSmartAlbumDataSource *smartAlbumDataSource; // ivar: _smartAlbumDataSource
@property (readonly) Class superclass;


-(id)initWithPhotoLibrary:(id)arg0 shuffleConfiguration:(id)arg1 completion:(id)arg2 ;
-(void)wallpaperSmartAlbumDataSourceAvailableTypesDidChange:(id)arg0 ;
-(void)wallpaperSmartAlbumDataSourcePreviewAssetsDidChange:(id)arg0 ;


@end


#endif