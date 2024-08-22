// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFWALLPAPERFILEMANAGER_H
#define HFWALLPAPERFILEMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface HFWallpaperFileManager : NSObject

@property (retain, nonatomic) NSURL *wallpaperFolderURL; // ivar: _wallpaperFolderURL


-(BOOL)originalImageExistsForWallpaper:(id)arg0 ;
-(id)filenameForWallpaper:(id)arg0 ;
-(id)init;
-(id)originalImageForWallpaper:(id)arg0 ;
-(void)pruneUnusedOriginalWallpaperImages:(id)arg0 ;
-(void)saveOriginalImage:(id)arg0 forWallpaper:(id)arg1 ;


@end


#endif