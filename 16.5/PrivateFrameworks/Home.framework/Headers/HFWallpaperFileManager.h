// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFWALLPAPERFILEMANAGER_H
#define HFWALLPAPERFILEMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface HFWallpaperFileManager : NSObject

@property (retain, nonatomic) NSURL *wallpaperFolderURL; // ivar: _wallpaperFolderURL


-(BOOL)originalImageExistsForWallpaper:(id)arg0 ;
-(id)_originalImageForWallpaper:(id)arg0 withFileName:(id)arg1 ;
-(id)fileNameForCustomBlurWallpaper:(id)arg0 ;
-(id)fileNameForDefaultBlurWallpaper:(id)arg0 userInterfaceStyle:(NSInteger)arg1 ;
-(id)filenameForWallpaper:(id)arg0 ;
-(id)init;
-(id)originalImageForWallpaper:(id)arg0 ;
-(void)_saveOriginalImage:(id)arg0 forWallpaper:(id)arg1 withFileName:(id)arg2 ;
-(void)pruneUnusedOriginalWallpaperImages:(id)arg0 ;
-(void)saveOriginalImage:(id)arg0 forWallpaper:(id)arg1 ;


@end


#endif