// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFWALLPAPEREDITCOLLECTION_H
#define HFWALLPAPEREDITCOLLECTION_H

@class UIImage;

#import <Foundation/Foundation.h>

#import "HFWallpaperSlice.h"
#import "HFWallpaper.h"

@interface HFWallpaperEditCollection : NSObject

@property (readonly, nonatomic) UIImage *originalImage; // ivar: _originalImage
@property (readonly, nonatomic) HFWallpaperSlice *originalSlice; // ivar: _originalSlice
@property (readonly, nonatomic) UIImage *processedImage; // ivar: _processedImage
@property (readonly, nonatomic) HFWallpaperSlice *processedSlice; // ivar: _processedSlice
@property (readonly, nonatomic) HFWallpaper *wallpaper; // ivar: _wallpaper


-(id)description;
-(id)initWithWallpaper:(id)arg0 originalImage:(id)arg1 processedImage:(id)arg2 ;
-(id)initWithWallpaper:(id)arg0 originalSlice:(id)arg1 processedSlice:(id)arg2 ;


@end


#endif