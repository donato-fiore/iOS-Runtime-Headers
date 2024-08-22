// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC17WALLPAPERSETTINGS28WALLPAPERALBUMLISTCONTROLLER_H
#define _TTC17WALLPAPERSETTINGS28WALLPAPERALBUMLISTCONTROLLER_H

@protocol WKWallpaperBundleDownloadManagerDelegate;


#import "WallpaperAlbumListTableViewController.h"

@interface _TtC17WallpaperSettings28WallpaperAlbumListController : WallpaperAlbumListTableViewController <WKWallpaperBundleDownloadManagerDelegate>





-(id)initWithCoder:(id)arg0 ;
-(id)initWithSpec:(id)arg0 ;
-(id)initWithSpec:(id)arg0 dataSourceManager:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)downloadManagerDidEncounterNetworkConnectionError;
-(void)viewDidLoad;


@end


#endif