// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFWALLPAPEREDITCOLLECTION_H
#define HFWALLPAPEREDITCOLLECTION_H


#import <Foundation/Foundation.h>

#import "HFWallpaperSlice.h"
#import "HFWallpaper.h"

@interface HFWallpaperEditCollection : NSObject

@property (readonly, nonatomic) HFWallpaperSlice *originalSlice; // ivar: _originalSlice
@property (readonly, nonatomic) HFWallpaperSlice *processedSlice; // ivar: _processedSlice
@property (readonly, nonatomic) HFWallpaper *wallpaper; // ivar: _wallpaper


-(id)description;
-(id)initWithWallpaper:(id)arg0 originalSlice:(id)arg1 processedSlice:(id)arg2 ;


@end


#endif