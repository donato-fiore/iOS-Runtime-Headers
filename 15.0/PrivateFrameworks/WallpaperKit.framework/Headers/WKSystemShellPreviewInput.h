// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKSYSTEMSHELLPREVIEWINPUT_H
#define WKSYSTEMSHELLPREVIEWINPUT_H

@class AVURLAsset, UIImage, SBFWallpaperOptions;

#import <Foundation/Foundation.h>


@interface WKSystemShellPreviewInput : NSObject

@property (readonly, nonatomic) AVURLAsset *urlAsset; // ivar: _urlAsset
@property (readonly, nonatomic) UIImage *wallpaperImage; // ivar: _wallpaperImage
@property (readonly, nonatomic) SBFWallpaperOptions *wallpaperOptions; // ivar: _wallpaperOptions


-(id)initWithWallpaperImage:(id)arg0 urlAsset:(id)arg1 wallpaperOptions:(id)arg2 ;


@end


#endif