// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFWALLPAPERLEGACYFILEMANAGER_H
#define HFWALLPAPERLEGACYFILEMANAGER_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface HFWallpaperLegacyFileManager : NSObject

@property (retain, nonatomic) NSURL *wallpaperFolderURL; // ivar: _wallpaperFolderURL


-(id)clearAllWallpapers;
-(id)filenameForType:(NSInteger)arg0 variant:(NSInteger)arg1 ;
-(id)init;
-(void)migrateCache:(id)arg0 ;


@end


#endif