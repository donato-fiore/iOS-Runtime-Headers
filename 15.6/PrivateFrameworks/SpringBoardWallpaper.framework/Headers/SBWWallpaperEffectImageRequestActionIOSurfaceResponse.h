// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBWWALLPAPEREFFECTIMAGEREQUESTACTIONIOSURFACERESPONSE_H
#define SBWWALLPAPEREFFECTIMAGEREQUESTACTIONIOSURFACERESPONSE_H

@class IOSurface;


#import "SBWWallpaperEffectImageRequestActionResponse.h"

@interface SBWWallpaperEffectImageRequestActionIOSurfaceResponse : SBWWallpaperEffectImageRequestActionResponse

@property (readonly, nonatomic) IOSurface *ioSurface;


-(id)initWithActualStyle:(NSInteger)arg0 size:(struct CGSize )arg1 ioSurface:(id)arg2 ;


@end


#endif